all:
	gcc -Wall -Wextra -Iinclude src/*.c tests/main.c -o ds_test

clean:
	rm -f ds_test
