main:main.o cal.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $<
.PHONY:clear
clear:
	rm *.o main
