CC	= g++
CFLAGS	= -Wall
LDFLAGS = -lpthread
OBJFILES= main.o BubbleSort.o InsertionSort.o Mergesort.o Quicksort.o Template.o
TARGET  = main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~

