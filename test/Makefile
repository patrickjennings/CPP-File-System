CC 	=	g++
CFLAGS 	=	-g -Wall -pedantic -W -O2
LIBS	=	-llinkedlist -lfilesystem
OBJECT	=	testfs

all: testfs

testfs:
	$(CC) $(CFLAGS) main.cpp -o $(OBJECT) $(LIBS)

clean:
	rm $(OBJECT)
