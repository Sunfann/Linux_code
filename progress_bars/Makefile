prog:main.o prog.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $<
.PHONG: clean
clean:
	rm -f *.o prog 
