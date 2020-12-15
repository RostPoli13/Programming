targets = 5.1.bin 5.2.bin 5.3.bin 5.4.bin 5.5.bin 6.1.bin 6.2.bin 6.3.bin 6.4.bin 6.5.bin 6.6.bin 7.1.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 5.1.bin 5.2.bin 5.3.bin 5.4.bin 5.5.bin 6.1.bin 6.2.bin 6.3.bin 6.4.bin 6.5.bin 6.6.bin 7.1.bin

5.1.bin: src/5.1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

5.2.bin: src/5.2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

5.3.bin: src/5.3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

5.4.bin: src/5.4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

5.5.bin: src/5.5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.1.bin: src/6.1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.2.bin: src/6.2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.3.bin: src/6.3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.4.bin: src/6.4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.5.bin: src/6.5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

6.6.bin: src/6.6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

7.1.bin: src/7.1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/5.1.bin 5.2.bin 5.3.bin 5.4.bin 5.5.bin 6.1.bin 6.2.bin 6.3.bin 6.4.bin 6.5.bin 6.6.bin 7.1.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

