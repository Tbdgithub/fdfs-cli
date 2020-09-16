#include <stdio.h>
#include "test/gen_files/gen_files.h"
#include "tracker/fdfs_trackerd.h"


#include<signal.h>
#include<unistd.h>


int test1();
void printsigset(sigset_t *set);

int main(int argc, char *argv[]) {
   // printf("Hello, World!\n");
  //  printf("Hello, World 2!\n");
    //int ret = gen_files_main();

   // printf(argv[0]);
   // test1();

    int ret=fdfs_trackerd_main(argc,argv);

    return ret;
}


void printsigset(sigset_t *set)
{
    int i = 0;
    for(;i<32;i++){
        if(sigismember(set,i))
            putchar('1');
        else
            putchar('0');
    }
    puts("");
}

int test1()
{
    sigset_t s,p;
    sigemptyset(&s);
    sigaddset(&s,SIGINT);
    sigprocmask(SIG_BLOCK,&s,NULL);
    while(1)
    {
        sigpending(&p);
        printsigset(&p);
        sleep(1);

//        int a=0;
//        int b=2/a;
    }
    return 0;
}