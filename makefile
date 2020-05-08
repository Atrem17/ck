DIR_BIN = ./bin
DIR_BUILD_SRC = ./build/src
DIR_BIILD_TEST = ./build/test
DIR_SRC = ./src
CFLAGS = -std=gnu11 -Wall -Werror

.PHONY: clean test FORMAT all 

all: $(DIR_BIN)/main
	make FORMAT
test: $(DIR_BIN)/test
	$(DIR_BIN)/test

-include build/src/*.d

$(DIR_BIN)/main: $(DIR_BUILD_SRC)/main.o $(DIR_BUILD_SRC)/pravila.o $(DIR_BUILD_SRC)/menu.o $(DIR_BUILD_SRC)/authors.o $(DIR_BUILD_SRC)/test.o $(DIR_BUILD_SRC)/vubortemy.o $(DIR_BUILD_SRC)/look.o $(DIR_BUILD_SRC)/vuborx.o $(DIR_BUILD_SRC)/vvod.o
	gcc -Wall -Werror -o $(DIR_BIN)/main $(DIR_BUILD_SRC)/main.o $(DIR_BUILD_SRC)/pravila.o $(DIR_BUILD_SRC)/menu.o $(DIR_BUILD_SRC)/authors.o $(DIR_BUILD_SRC)/test.o $(DIR_BUILD_SRC)/vubortemy.o $(DIR_BUILD_SRC)/look.o $(DIR_BUILD_SRC)/vuborx.o $(DIR_BUILD_SRC)/vvod.o
$(DIR_BUILD_SRC)/main.o: $(DIR_SRC)/main.c
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/main.o -c $(DIR_SRC)/main.c
$(DIR_BUILD_SRC)/pravila.o: $(DIR_SRC)/pravila.c
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/pravila.o -c $(DIR_SRC)/pravila.c
$(DIR_BUILD_SRC)/menu.o: $(DIR_SRC)/menu.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/menu.o -c $(DIR_SRC)/menu.c
$(DIR_BUILD_SRC)/authors.o: $(DIR_SRC)/authors.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/authors.o -c $(DIR_SRC)/authors.c
$(DIR_BUILD_SRC)/look.o: $(DIR_SRC)/look.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/look.o -c $(DIR_SRC)/look.c
$(DIR_BUILD_SRC)/test.o: $(DIR_SRC)/test.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/test.o -c $(DIR_SRC)/test.c
$(DIR_BUILD_SRC)/vubortemy.o: $(DIR_SRC)/vubortemy.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/vubortemy.o -c $(DIR_SRC)/vubortemy.c
$(DIR_BUILD_SRC)/vuborx.o: $(DIR_SRC)/vuborx.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/vuborx.o -c $(DIR_SRC)/vuborx.c
$(DIR_BUILD_SRC)/vvod.o: $(DIR_SRC)/vvod.c    
	gcc -Wall -Werror -o $(DIR_BUILD_SRC)/vvod.o -c $(DIR_SRC)/vvod.c

-include build/test/*.d

bin/test: build/test/main.o build/test/menu.o build/test/pravila.o build/test/test.o build/test/vvod.o build/test/vuborx.o build/test/vubortemy.o build/test/authors.o build/test/look.o build/test/tests.o
	gcc $(CFLAGS) -o $@ $^

build/test/main.o: test/main.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/pravila.o: src/pravila.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/tests.o: test/tests.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/menu.o: src/menu.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/authors.o: src/authors.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/look.o: src/look.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/test.o: src/test.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/vubortemy.o: src/vubortemy.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/vuborx.o: src/vuborx.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build/test/vvod.o: src/vvod.c
	gcc -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

clean:
	rm -rf build/src/*.o build/src/*.d build/test/*.o build/test/*.d bin/*

FORMAT:
	clang-format -i $(DIR_SRC)/*.h
	clang-format -i $(DIR_SRC)/*.c
	clang-format -i ./test/*.c