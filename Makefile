CC = gcc
CFLAGS = -Wall -Wextra -g

# Final program name
TARGET = twixt

# Object files
OBJ = main.o functions.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c functions.h
	$(CC) $(CFLAGS) -c main.c

functions.o: functions.c functions.h
	$(CC) $(CFLAGS) -c functions.c

clean:
	rm -f *.o $(TARGET)
