/*
 * Daemon.h
 *
 *  Created on: May 3, 2015
 *      Author: dmitry
 */

#ifndef DAEMON_H_
#define DAEMON_H_
#include "header.h"
#include "ConfigReader.h"

class Daemon {
	std::vector<std::string> dir;

public:
	Daemon();
	void start();
	void close();
};

#endif /* DAEMON_H_ */
