CC=g++ -std=c++11 -g
EXE_FILE=r

all: $(EXE_FILE)

$(EXE_FILE): main.cpp
	$(CC) main.cpp -o $(EXE_FILE)

clean:
	rm -f *.o $(EXE_FILE)