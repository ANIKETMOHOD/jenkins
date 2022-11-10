all: test.c
	g++ -g -Wall -o test test.c
clean: 
	$(RM) test
