/*
 * Daemon.h
 *
 *  Created on: May 3, 2015
 *      Author: dmitry
 */

#ifndef DAEMON_H_
#define DAEMON_H_
#include "header.h"

class Daemon {
	bool _is_running;
	bool _is_need_reup;

public:
	static std::vector<std::string> dir;
	static std::map<int, std::string> _in_dir;
	int _inotify_discriptor;

public:
	Daemon();
	void start();
	inline void die() {
		_is_running = false;
	}
	inline void reup() {
		_is_need_reup = true;
	}
private:
	void init();
	void clearData();
	void setWatcher(const std::string &cur_dir);
	void process();
	void dispalyEvent(struct inotify_event *event);
};

#endif /* DAEMON_H_ */
