SList:main.c SeqList.c
	gcc -std=c99 -o $@ $^
%.o:%.c
	gcc -c $<
.LHONY:clean
clean:
	rm -f SList *.o
