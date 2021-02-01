targets = 1.bin 2.bin 3.bin 4.bin 5.bin 6.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist

compile: 1.bin 2.bin 3.bin 4.bin 5.bin 6.bin
1.bin: src/1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

2.bin: src/2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

3.bin: src/3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

4.bin: src/4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

5.bin: src/5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.bin: src/6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/1.bin 2.bin 3.bin 4.bin 5.bin 6.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

