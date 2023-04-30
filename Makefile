main: functions_vector.o student.o
	g++ -O3 -o main_vector main_vector.cpp functions_vector.o student.o
clean:
	rm *.o main_vector
rez:
	rm *.txt