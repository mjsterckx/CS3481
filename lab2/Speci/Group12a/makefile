CXX=g++
CXXFLAGS= -std=c++11 -g
H = Headers
HDRS = $(H)/Register.h $(H)/ProcessorStateWord.h $(H)/FpStatusWord.h $(H)/IntRegisterFile.h $(H)/FpRegisterFile.h $(H)/Memory.h $(H)/Cpu.h $(H)/Instruction.h $(H)/Group12a.h

.SUFFIXES: .C .o
.C.o:
	g++ -c -g $<

all: Trap.o Group12a.o

Trap.o: Trap.C $(H)/Trap.h $(HDRS)

Group12a.o: Group12a.C $(HDRS)

clean:
	rm -f *.o
