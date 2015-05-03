#include "header.h"

void my_print(int type,const std::string &data){
#ifdef DAEMON
	syslog(type, data.c_str());
#else
	switch (type) {
		case LOG_ERR:
			std::cerr << data;
			break;
		case LOG_INFO:
		default:
			std::cout << data;
			break;
	}
#endif
}
