CXX=g++
CXXFLAGS= -std=c++11 -g
H = Headers
HDRS = $(H)/Register.h $(H)/ProcessorStateWord.h $(H)/FpStatusWord.h $(H)/IntRegisterFile.h $(H)/FpRegisterFile.h $(H)/Memory.h $(H)/Cpu.h $(H)/Instruction.h $(H)/Group9.h

.SUFFIXES: .C .o
.C.o:
	g++ -c -g $<

all: Group9.o Halt.o

Halt.o: Halt.C $(H)/Halt.h $(HDRS)

Group9.o: Group9.C $(HDRS)

clean:
	rm -f *.o
