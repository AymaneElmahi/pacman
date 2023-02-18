CC=g++
CFLAGS=-c -Wall 
LDFLAGS=-lSDL2
SOURCES=main.cpp window.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)
	
clean:
	rm -rf *.o $(EXECUTABLE)
