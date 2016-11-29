CC = g++
CFLAGS = -c -Wall
TARGET = heap

all:$(TARGET)

$(TARGET): main.o heap.o
	$(CC) main.o heap.o -o $(TARGET)

main.o: main.cpp heap.h
	$(CC) main.cpp $(CFLAGS)

heap.o: heap.cpp heap.h
	$(CC) heap.cpp $(CFLAGS)

clean:
	rm *.o $(TARGET) *~
