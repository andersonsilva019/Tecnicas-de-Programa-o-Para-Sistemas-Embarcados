
all: app

app: main.o fila.o
	gcc obj/main.o obj/fila.o -o bin/exec

main.o: src/main.c
	gcc -c src/main.c -Iinc -o obj/main.o

fila.o: src/fila.c
	gcc -c src/fila.c -Iinc -o obj/fila.o

run: 
	./bin/exec

clean:
	rm obj/*.o bin/exec