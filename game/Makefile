CC = c99
CFLAGS = -Wall -O2

proxy: clean main.c main.h network.c process.c
	$(CC) $(CFLAGS) -o game main.c network.c process.c -D_GNU_SOURCE

clean:
	rm game a.out -f
