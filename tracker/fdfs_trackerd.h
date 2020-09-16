//
// Created by john on 2020/9/14.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include "fastcommon/shared_func.h"
#include "fastcommon/pthread_func.h"
#include "fastcommon/process_ctrl.h"
#include "fastcommon/logger.h"
//#include "fdfs_global.h"
#include "fastcommon/base64.h"
#include "fastcommon/sockopt.h"
#include "fastcommon/sched_thread.h"
#include "tracker_types.h"
//#include "tracker_mem.h"
//#include "tracker_service.h"
#include "tracker_global.h"
#include "../common/fdfs_global.h"
//#include "tracker_proto.h"
//#include "tracker_func.h"
//#include "tracker_status.h"
//#include "tracker_relationship.h"

#ifndef FDFS_CLI_FDFS_TRACKERD_H
#define FDFS_CLI_FDFS_TRACKERD_H

int fdfs_trackerd_main(int argc, char *argv[]);
void usage(const char *program);

void test_a1();
#endif //FDFS_CLI_FDFS_TRACKERD_H
