CC = gcc
CFLAGS = -Wall

OBJ = main.o game.o

zap: $(OBJ)
	$(CC) $(OBJ) -o zap

main.o: main.c game.h
	$(CC) $(CFLAGS) -c main.c

game.o: game.c game.h
	$(CC) $(CFLAGS) -c game.c

clean:
	rm -f *.o

run: zap
	./zap