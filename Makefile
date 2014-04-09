SRCS = math.c
CC = gcc
CFLAGS = -lm -Wall

math: $(SRCS)

all: math

clean:
	rm -f math math.exe
