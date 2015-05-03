/*
 * ConfigReader.h
 *
 *  Created on: May 3, 2015
 *      Author: dmitry
 */

#ifndef CONFIGREADER_H_
#define CONFIGREADER_H_
#include "header.h"

static class ConfigReader {
public:
	ConfigReader();
	static void read(const std::string& path){
		my_print(LOG_INFO, ToString() << "Read config: " << path);
	}
} CfgR;

#endif /* CONFIGREADER_H_ */
