cmake_minimum_required(VERSION 3.16)
project(fdfs_cli C)

set(CMAKE_C_STANDARD 11)

#set(INC_DIR ./include)

add_executable(fdfs_cli main.c test/gen_files/gen_files.c test/gen_files/gen_files.h test/test_types.h tracker/fdfs_trackerd.c tracker/fdfs_trackerd.h
        common/fdfs_global.h common/fdfs_global.c


        )

#   fastcommon/ioevent.h fastcommon/ioevent.c

#fastcommon/common_define.h fastcommon/shared_func.h fastcommon/shared_func.c
#
#
#fastcommon/_os_define.h
#
#
#fastcommon/fast_mblock.h fastcommon/fast_mblock.c fastcommon/sched_thread.h fastcommon/sched_thread.c
#
#fastcommon/hash.h fastcommon/hash.c
#
#fastcommon/common_blocked_queue.h fastcommon/common_blocked_queue.c
#
#fastcommon/ini_file_reader.h fastcommon/ini_file_reader.c
#
#fastcommon/pthread_func.h fastcommon/pthread_func.c
#fastcommon/fast_timer.h fastcommon/fast_timer.c
#
#
#fastcommon/fc_memory.h fastcommon/fc_memory.c
#fastcommon/sockopt.h fastcommon/sockopt.c
#fastcommon/fc_queue.c
#fastcommon/fc_queue.h
#
#fastcommon/system_info.h fastcommon/system_info.c
#
#fastcommon/thread_pool.h fastcommon/thread_pool.c
#
#fastcommon/md5.h fastcommon/md5.c
#
#fastcommon/local_ip_func.h fastcommon/local_ip_func.c
#
#fastcommon/json_parser.h fastcommon/json_parser.c
#
#fastcommon/ioevent.h fastcommon/ioevent.c
#
#fastcommon/hash.h fastcommon/hash.c