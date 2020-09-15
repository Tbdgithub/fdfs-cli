#include <stdio.h>
#include "test/gen_files/gen_files.h"
#include "tracker/fdfs_trackerd.h"

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    printf("Hello, World 2!\n");
    //int ret = gen_files_main();

   // printf(argv[0]);


    int ret=fdfs_trackerd_main(argc,argv);

    return ret;
}
