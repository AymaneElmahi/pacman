CC=g++
CFLAGS=-c -Wall 
LDFLAGS=-lSDL2
SRC_DIR=src
INC_DIR=inc
OBJ_DIR=obj
BIN_DIR=bin
SOURCES=$(wildcard $(SRC_DIR)/*.cpp)
HEADERS=$(wildcard $(INC_DIR)/*.h)
OBJECTS=$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))
EXECUTABLE=$(BIN_DIR)/main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)
	
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXECUTABLE)
