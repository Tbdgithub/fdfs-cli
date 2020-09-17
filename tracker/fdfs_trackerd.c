//
// Created by john on 2020/9/14.
//


#include "fdfs_trackerd.h"
#include "../hello/MyHello.h"
#include "tracker_func.h"


#define SCHEDULE_ENTRIES_COUNT 5

static bool bTerminateFlag = false;
static bool bAcceptEndFlag = false;

static char bind_addr[IP_ADDRESS_SIZE];

static void sigQuitHandler(int sig);
static void sigHupHandler(int sig);
static void sigUsrHandler(int sig);
static void sigAlarmHandler(int sig);

void test_a2();

void usage(const char *program) {

//    logError("file: "__FILE__", line: %d, " \
//			"the length=%d of filename \"%s\" is too short", \
//			__LINE__, 3, "abc");
    //g_fdfs_connect_timeout =3;
    // printf("aaa %d",FDFS_FILE_EXT_NAME_MAX_LEN);
    fprintf(stderr, "FastDFS server v%d.%02d\n"
                    "Usage: %s <config_file> [start | stop | restart]\n",
            g_fdfs_version.major, g_fdfs_version.minor,
            program);
}


int fdfs_trackerd_main(int argc, char *argv[]) {

    printf("begin\n");

    Version  aa= {
            'a','b','c'
    };
    printf("version:%c\n",aa.major);


    char *conf_filename;
    int result;
    int wait_count;
    int sock;
    pthread_t schedule_tid;
    struct sigaction act;
    ScheduleEntry scheduleEntries[SCHEDULE_ENTRIES_COUNT];




    printf("version:%c\n",aa.major);
    ScheduleArray scheduleArray;
    char pidFilename[MAX_PATH_SIZE];
    bool stop;

    printf("argc %d  \n", argc);


    printf("he %d", FDFS_DEF_STORAGE_RESERVED_MB);

    if (argc < 2) {
        usage(argv[0]);
        return 1;
    }

    g_current_time = time(NULL);
    g_up_time = g_current_time;
    srand(g_up_time);

    log_init2();

    conf_filename = argv[1];
    if (!fileExists(conf_filename))
    {
        if (starts_with(conf_filename, "-"))
        {
            usage(argv[0]);
            return 0;
        }
    }

    if ((result=get_base_path_from_conf_file(conf_filename,
                                             g_fdfs_base_path, sizeof(g_fdfs_base_path))) != 0)
    {
        log_destroy();
        return result;
    }



    snprintf(pidFilename, sizeof(pidFilename),
             "%s/data/fdfs_trackerd.pid", g_fdfs_base_path);

    printf("pid path:%s",g_fdfs_base_path);
    if ((result=process_action(pidFilename, argv[2], &stop)) != 0)
    {
        if (result == EINVAL)
        {
            usage(argv[0]);
        }
        log_destroy();
        return result;
    }
    if (stop)
    {
        log_destroy();
        return 0;
    }


    memset(bind_addr, 0, sizeof(bind_addr));
    if ((result=tracker_load_from_conf_file(conf_filename, \
			bind_addr, sizeof(bind_addr))) != 0)
    {
        logCrit("exit abnormally!\n");
        log_destroy();
        return result;
    }

    //printf("do something %d" ,myDefine);
    test_a2();
    int count=0;
    while (count<10)
    {
        sleep(1);
        printf("sleeping %d\n",count);
        count++;
    }
    return 0;
}

//void test_a1()
//{
//    int A[] = {1, 3, 2, 4, 5};
//
//    quickSort(A, 0, 2);
//
//    int length = sizeof(A) / sizeof(int);
//
//    for (int i = 0; i < length; i++) {
//        printf("item:%d ", A[i]);
//    }
//    printf("\n");
//}


void test_a2()
{

    time_t timer;
    struct tm *tblock;
    time(&timer);
    tblock = gmtime(&timer);
    time_t tick;
    tick = time(NULL);

    printf("现在时间是 %d 年 %d 月 %d 日 %d 时 %d 分 %d 秒.\n",\
            tblock->tm_year+1900, tblock->tm_mon+1, tblock->tm_mday,\
            tblock->tm_hour+8, tblock->tm_min, tblock->tm_sec);


    printf("tick=%d:\n", (int)tick);
}

