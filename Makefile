comp = gcc

all: learnc01

learnc01: learnc01.o
	 ${comp} -o learnc01 learnc01.o

learnc01.o: learnc01.c
	 ${comp} -c learnc01.c
     
clean:
	 rm learnc01.o learnc01
