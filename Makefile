main: functions_vector.o
	g++ -O3 -o main_vector main_vector.cpp functions_vector.o
list: functions_list.o
	g++ -O3 -o main_list main_list.cpp functions_list.o
deque: functions_deque.o
	g++ -march=native -o main_deque main_deque.cpp functions_deque.o
clean:
	rm *.o main_vector main_list main_deque
rez:
	rm *.txt