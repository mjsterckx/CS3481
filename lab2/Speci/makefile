
CXX = g++
CXXFLAGS= -std=c++11 -g
H = Headers
HDRS = $(H)/Register.h $(H)/ProcessorStateWord.h $(H)/FpStatusWord.h $(H)/IntRegisterFile.h $(H)/FpRegisterFile.h $(H)/Memory.h $(H)/Cpu.h $(H)/Instruction.h

.SUFFIXES: .C .o
.C.o:
	g++ -c -g $<

build:
	(cd Group12a; make)
	(cd Group9; make)
	make speci

speci: speci.o Loader.o Group12a/Group12a.o Group12a/Trap.o Group9/Group9.o Group9/Halt.o Register.o ProcessorStateWord.o FpStatusWord.o IntRegisterFile.o FpRegisterFile.o Memory.o Cpu.o Instruction.o
	g++ speci.o Loader.o Group12a/Group12a.o Group12a/Trap.o Group9/Group9.o Group9/Halt.o Register.o ProcessorStateWord.o FpStatusWord.o IntRegisterFile.o FpRegisterFile.o Memory.o Cpu.o Instruction.o -o speci

speci.o: speci.C $(HDRS)

Loader.o: Loader.C Headers/Loader.h

Register.o: Register.C $(H)/Register.h

ProcessorStateWord.o: ProcessorStateWord.C $(H)/ProcessorStateWord.h

FpStatusWord.o: FpStatusWord.C $(H)/FpStatusWord.h

IntRegisterFile.o: IntRegisterFile.C $(H)/IntRegisterFile.h

FpRegisterFile.o: FpRegisterFile.C $(H)/FpRegisterFile.h

Memory.o: Memory.C $(H)/Memory.h

Cpu.o: Cpu.C $(H)/Cpu.h

Instruction.o: Instruction.C $(H)/Instruction.h

clean:
	(cd Group12a; make clean)
	(cd Group9; make clean)
	rm -f *.o
