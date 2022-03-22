CFLAGS = -O
CC = g++

prog: utiliseRegistre.o Patient.o Registre.o 
	$(CC) $(CFLAGS) -o prog utiliseRegistre.o Patient.o Registre.o 

utiliseRegistre.o: utiliseRegistre.cpp
	$(CC) $(CFLAGS) -c utiliseRegistre.cpp

Patient.o: Patient.cpp
	$(CC) $(CFLAGS) -c Patient.cpp

Registre.o: Registre.cpp
	$(CC) $(CFLAGS) -c Registre.cpp

clean: 
	rm -f core *.o