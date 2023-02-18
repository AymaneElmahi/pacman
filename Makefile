CC=g++
CFLAGS=-c -Wall 
LDFLAGS=-lSDL2
SOURCES=window.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=window

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)
	
clean:
	rm -rf *.o $(EXECUTABLE)
