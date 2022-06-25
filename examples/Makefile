default: graph.o example.o
	g++ example.o graph.o -o example.exe
graph.o: 
	g++ -c -g -I../include ../src/graph.cpp -o graph.o
example.o:
	g++ -c -g -I../include example.cpp -o example.o
clean:
	rm -rf *.o
	rm -rf *.exe
