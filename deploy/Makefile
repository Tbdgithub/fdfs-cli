OBJS =   main.o   fdfs_trackerd.o fdfs_define.o fdfs_global.o

main: $(OBJS)
	gcc  $(OBJS) /usr/local/lib/libfastcommon.so -o  fdfs-cli

edit: $(OBJS)
	gcc -o edit $(OBJS)


main.o:   main.c
	gcc -c main.c

fdfs_trackerd.o:   tracker/fdfs_trackerd.c tracker/fdfs_trackerd.h
	gcc -c tracker/fdfs_trackerd.c

fdfs_define.o:   common/fdfs_define.c common/fdfs_define.h
	gcc -c common/fdfs_define.c

fdfs_global.o:   common/fdfs_global.c common/fdfs_global.h
	gcc -c common/fdfs_global.c


clean:
	rm -rf *.o fdfs-cli