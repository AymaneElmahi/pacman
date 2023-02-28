CC = g++
CFLAGS ?= -Wall -Wextra -Werror -Wformat -g 
LDLIBS = -lSDL2 -lSDL2_image 

INCLUDE_PATH = ./inc

TARGET   = pacman

SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin

SOURCES  := $(wildcard $(SRCDIR)/*.cc)
INCLUDES := $(wildcard $(INCLUDE_PATH)/*.hpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)

$(BINDIR)/$(TARGET): $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CC) -o $@ $^ $(CFLAGS) $(LDLIBS)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cc $(INCLUDES)
	mkdir -p $(OBJDIR)
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCLUDE_PATH)


PATH_TO_EXE = $(BINDIR)/$(TARGET)



run:
ifneq ("$(wildcard $(PATH_TO_EXE))", "")
	./$(PATH_TO_EXE)
else
	@echo "\033[31mNo executable found!\033[0m"
endif

.PHONY: clean cov
clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(OBJDIR)/*.gcda
	rm -f $(OBJDIR)/*.gcno
	rm -f $(PATH_TO_EXE)