OBJS = fdfs_global.o fdfs_trackerd.o main.o

main: $(OBJS)
	gcc  $(OBJS) -o fdfs-cli


#fdfs_global.o: common/fdfs_global.c  common/fdfs_global.h
#	gcc -c common/fdfs_global.c  common/fdfs_global.h
#fdfs_trackerd.o: tracker/fdfs_trackerd.h tracker/fdfs_trackerd.c
#	gcc -c  tracker/fdfs_trackerd.h tracker/fdfs_trackerd.c

edit: $(OBJS)
	cc-o edit $(OBJS)

fdfs_global.o:   common/fdfs_global.h
	gcc -c common/fdfs_global.c
fdfs_trackerd.o: tracker/fdfs_trackerd.h
	gcc -c    tracker/fdfs_trackerd.c


clean:
	rm -rf *.o fdfs-cli