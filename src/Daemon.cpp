/*
 * Daemon.cpp
 *
 *  Created on: May 3, 2015
 *      Author: dmitry
 */

#include "Daemon.h"

Daemon::Daemon() {
	// TODO Auto-generated constructor stub

}

void Daemon::start(){
	my_print(LOG_INFO, ToString() << "Daemon is start...");
	CfgR.read(CONFIG_PATH);
}

void Daemon::close(){
	my_print(LOG_INFO, ToString() << "Daemon is close...");
}

