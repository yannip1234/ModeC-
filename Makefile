GCC = g++ -std=c++11

OBJS = ModeMain.o readfile.o mode.o

default: ModeMain

ModeMain: $(OBJS)
	$(GCC) -o ModeMain $(OBJS)

readfile.o: readfile.cpp readfile.h
	$(GCC) -c readfile.cpp -o readfile.o
mode.o: mode.cpp mode.o
	$(GCC) -c mode.cpp -o mode.o

ModeMain.o: ModeMain.cpp mode.h readfile.h
	$(GCC) -c ModeMain.cpp -o ModeMain.o

clean: 
	rm $(OBJS) ModeMain
