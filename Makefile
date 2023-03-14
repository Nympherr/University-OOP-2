main: functions.o
	g++ -O3 -o main main.cpp functions.o
clean:
	rm *.o main
rez:
	rm *.txt