BubbleBinary:BubbleBinary.c main.c
	gcc -std=c99 -o $@ $^
%.o:%.c
	gcc -c $<
.PHONY:clean
clean:
	rm -f *.o BubbleBinary 
