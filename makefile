.PHONY: clean all test run runtest

BIN_DIR = ./bin
BUILD_DIR = ./build
SRC_DIR = ./calcApp
TEST_DIR = ./test

FLAGS =-Wall -std=c++11

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/TRPO_Calculator.o $(BUILD_DIR)/TRPO_Functions.o
	g++ $(FLAGS) $(BUILD_DIR)/TRPO_Calculator.o $(BUILD_DIR)/TRPO_Functions.o -o $(BIN_DIR)/main

$(BUILD_DIR)/TRPO_Calculator.o:
	g++ $(FLAGS) -c $(SRC_DIR)/TRPO_Calculator.cpp -o $(BUILD_DIR)/TRPO_Calculator.o
	
$(BUILD_DIR)/TRPO_Functions.o:
	g++ $(FLAGS) -c $(SRC_DIR)/TRPO_Functions.cpp -o $(BUILD_DIR)/TRPO_Functions.o

test: $(BUILD_DIR)/TRPO_Functions.o $(BUILD_DIR)/test.o
	g++ $(FLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/TRPO_Functions.o -o $(BIN_DIR)/test

$(BUILD_DIR)/test.o:
	g++ $(FLAGS) -c $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o
	
	
run: 
	./bin/main
	
runtest:
	./bin/test

clean:
	rm -f build/*.o
	rm -f bin/main
	rm -f bin/test