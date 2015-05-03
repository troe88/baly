//============================================================================
// Name        : daemon.cpp
// Author      : Dmitry
// Version     :
// Copyright   : GPL
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "header.h"
#include <ostream>
//#define DAEMON

void signal_handler(int sig) {
	switch (sig) {
	case SIGHUP:
		syslog(LOG_INFO, "Reload conf file\n");
		break;
	case SIGTERM:
		syslog(LOG_INFO, "Close daemon...\n");
		exit(0);
		break;
	}
}


int main(int argc, char **argv) {
#ifdef DAEMON
	int pid = fork();

	switch (pid) {
		case 0: // child
		{

			umask(0);
			setsid();

			close (STDIN_FILENO);
			close (STDOUT_FILENO);
			close (STDERR_FILENO);

			signal(SIGHUP, signal_handler);
			signal(SIGTERM, signal_handler);
			openlog("daemon", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
//		srv_print(MakeString() << "Daemon is start...", LOG_INFO);
#endif

// CODE

			my_print(0, ToString() << "qwe");

#ifdef DAEMON
	break;
}
case -1: // error!
default:// parent
return 0;
}
#endif
}
