cmake_minimum_required(VERSION 3.16)
project(fdfs_cli C)

set(CMAKE_C_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}   -pthread")

#set(CMAKE_C_STANDARD 99)

set(LINK_DIR /usr/local/lib)

#引入头文件

#include_directories(./common)

#add_subdirectory(./tracker)

#引入库文件
link_directories(${LINK_DIR})


add_executable(fdfs_cli main.c test/gen_files/gen_files.c test/gen_files/gen_files.h test/test_types.h



        common/fdfs_define.h
        common/fdfs_define.c
        common/fdfs_global.h
        common/fdfs_global.c

        tracker/fdfs_trackerd.c
        tracker/fdfs_trackerd.h

        tracker/tracker_global.h
        tracker/tracker_global.c
        tracker/tracker_func.h
        tracker/tracker_func.c

        tracker/tracker_mem.h
        tracker/tracker_mem.c
        tracker/tracker_relationship.h
        tracker/tracker_relationship.c

        tracker/fdfs_shared_func.c
        tracker/fdfs_shared_func.h
        tracker/tracker_proto.h
        tracker/tracker_proto.c

        tracker/fdfs_server_id_func.c
        tracker/fdfs_server_id_func.h

        tracker/tracker_status.h
        tracker/tracker_status.c

        hello/MyHello.c hello/MyHello.h hello/Other.c hello/Other.h common/fdfs_define.c)

target_link_libraries(fdfs_cli  /usr/local/lib/libfastcommon.so  )

