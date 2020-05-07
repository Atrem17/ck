DIR_BIN = ./bin
DIR_BUILD_RELEASE_SRC = ./build/src
DIR_BIILD_TEST = ./build/test
DIR_SRC = ./src
CFLAGS = -std=gnu11 -Wall -Werror

.PHONY: clean test FORMAT all 

all: $(DIR_BIN)/main
	make FORMAT

-include build/Release/src/*.d

$(DIR_BIN)/main: $(DIR_BUILD_RELEASE_SRC)/main.o $(DIR_BUILD_RELEASE_SRC)/pravila.o $(DIR_BUILD_RELEASE_SRC)/menu.o $(DIR_BUILD_RELEASE_SRC)/authors.o $(DIR_BUILD_RELEASE_SRC)/test.o $(DIR_BUILD_RELEASE_SRC)/vubortemy.o $(DIR_BUILD_RELEASE_SRC)/look.o $(DIR_BUILD_RELEASE_SRC)/vuborx.o $(DIR_BUILD_RELEASE_SRC)/vvod.o
	gcc -Wall -Werror -o $(DIR_BIN)/main $(DIR_BUILD_RELEASE_SRC)/main.o $(DIR_BUILD_RELEASE_SRC)/pravila.o $(DIR_BUILD_RELEASE_SRC)/menu.o $(DIR_BUILD_RELEASE_SRC)/authors.o $(DIR_BUILD_RELEASE_SRC)/test.o $(DIR_BUILD_RELEASE_SRC)/vubortemy.o $(DIR_BUILD_RELEASE_SRC)/look.o $(DIR_BUILD_RELEASE_SRC)/vuborx.o $(DIR_BUILD_RELEASE_SRC)/vvod.o
$(DIR_BUILD_RELEASE_SRC)/main.o: $(DIR_SRC)/main.c
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/main.o -c $(DIR_SRC)/main.c
$(DIR_BUILD_RELEASE_SRC)/pravila.o: $(DIR_SRC)/pravila.c
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/pravila.o -c $(DIR_SRC)/pravila.c
$(DIR_BUILD_RELEASE_SRC)/menu.o: $(DIR_SRC)/menu.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/menu.o -c $(DIR_SRC)/menu.c
$(DIR_BUILD_RELEASE_SRC)/authors.o: $(DIR_SRC)/authors.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/authors.o -c $(DIR_SRC)/authors.c
$(DIR_BUILD_RELEASE_SRC)/look.o: $(DIR_SRC)/look.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/look.o -c $(DIR_SRC)/look.c
$(DIR_BUILD_RELEASE_SRC)/test.o: $(DIR_SRC)/test.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/test.o -c $(DIR_SRC)/test.c
$(DIR_BUILD_RELEASE_SRC)/vubortemy.o: $(DIR_SRC)/vubortemy.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/vubortemy.o -c $(DIR_SRC)/vubortemy.c
$(DIR_BUILD_RELEASE_SRC)/vuborx.o: $(DIR_SRC)/vuborx.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/vuborx.o -c $(DIR_SRC)/vuborx.c
$(DIR_BUILD_RELEASE_SRC)/vvod.o: $(DIR_SRC)/vvod.c    
	gcc -Wall -Werror -o $(DIR_BUILD_RELEASE_SRC)/vvod.o -c $(DIR_SRC)/vvod.c

clean:
	rm -rf build/src/*.o build/src/*.d

FORMAT:
	clang-format -i $(DIR_SRC)/*.h
	clang-format -i $(DIR_SRC)/*.c