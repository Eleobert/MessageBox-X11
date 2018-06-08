TARGET = out

default: out

all: default
build: default

$(TARGET):
	gcc -o out messagebox.c example.c -lX11

run:
	./$(TARGET)

clean:
	rm ./$(TARGET)

.PHONY: default all clean run
