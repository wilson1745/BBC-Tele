CFLAGS = -Wall -Wextra -Wfloat-equal -pedantic -ansi -lm
TCHECK = -lcheck -lsubunit -lpthread -lrt
LIBS = `pkg-config sdl2 --libs`

TARGET = teletext
MAIN = teletext.c

TMAIN = test.c
TTARGET = test
TFUNC = test_func.c

FONTTARGET = teletext_font
CC = gcc

all: $(MAIN) $(SOURCES)
	$(CC) $(MAIN) -o $(TARGET) $(CFLAGS) $(LIBS)

# '-lsubunit' needs to be deleted when compiling on MVB lab machine, it may cause error, but my virtual machine does need '-lsubunit' to run the Check test 
test: $(TMAIN)
	$(CC) $(TMAIN) $(TFUNC) -o $(TTARGET) $(TCHECK) $(CFLAGS) $(LIBS)

# Generating sixel fonts in teletext_font folder
teletext_font: $(FONTTARGET).c
	$(CC) $(FONTTARGET).c -o $(FONTTARGET) $(CFLAGS)

.PHONY: clean
clean:
	rm teletext teletext_font
