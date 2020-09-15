//
// Created by john on 2020/9/14.
//
#include "stdio.h"
#include "fdfs_trackerd.h"
#include "../common/fdfs_global.h"


int fdfs_trackerd_main(int argc, char *argv[])
{

    printf("argc %d  \n",argc);


    if (argc < 2)
    {
        usage(argv[0]);
        return 1;
    }

    printf("do something");
    return 0;
}

void usage(const char *program)
{
    fprintf(stderr, "FastDFS server v%d.%02d\n"
                    "Usage: %s <config_file> [start | stop | restart]\n",
            g_fdfs_version.major, g_fdfs_version.minor,
            program);
}


