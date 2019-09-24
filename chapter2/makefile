TARGET=sdlhelloworld 

all: $(TARGET)

sdlhelloworld:	sdlhelloworld.cpp
	g++ -O1 -o $@ $@.cpp -Wall -std=gnu++17 `sdl2-config --cflags --libs`

clean:
	rm -f *.o $(TARGET) 
