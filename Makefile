prog:  atom_components.o atoms.o main.o
	g++ -o prog atom_components.o atoms.o main.o

atom_components.o: atom_components.cpp
	g++ -c atom_components.cpp

atoms.o: atoms.cpp
	g++ -c atoms.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f prog atom_components.o atoms.o main.o
