main: functions.o
	g++ -o main main.cpp functions.o
clean:
	rm *.o main