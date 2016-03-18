main.exe: main.o obras.o literatura.o escultura.o pintura.o arquitectonico.o
	g++ main.o obras.o literatura.o escultura.o pintura.o arquitectonico.o -o museo 
	
main.o:	main.cpp obras.h literatura.h escultura.h pintura.h arquitectonico.h
	g++ -c main.cpp 

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp 

literatura.o:	literatura.cpp literatura.h obras.h
	g++ -c literatura.cpp

escultura.o:	escultura.cpp escultura.h obras.h
	g++ -c escultura.cpp 

pintura.o:	pintura.cpp pintura.h obras.h
	g++ -c pintura.cpp

arquitectonico.o:	arquitectonico.cpp arquitectonico.h obras.h
	g++ -c arquitectonico.cpp 
