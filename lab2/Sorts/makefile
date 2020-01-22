CC = gcc
CFLAGS = -std=c11 -g

Sort: sort.o bubbleSort.o mergeSort.o quickSort.o
	gcc sort.o bubbleSort.o mergeSort.o quickSort.o -o Sort

sort.o: sort.c bubbleSort.h mergeSort.h quickSort.h types.h

bubbleSort.o: bubbleSort.c bubbleSort.h

mergeSort.o: mergeSort.c mergeSort.h

quickSort.o: quickSort.c quickSort.h

clean:
	rm -f *.o
