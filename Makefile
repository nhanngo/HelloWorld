CC=gcc

all: 
	$(CC) -o hello hello.c

clean:
	rm -f hello
