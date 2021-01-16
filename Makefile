derlecalistir:uygulama calistir

uygulama:pch.o Kova.o Top.o KovaKontrol.o Test.o
	g++ ./lib/Top.o ./lib/Kova.o ./lib/KovaKontrol.o ./lib/Test.o -o ./bin/uygulama

pch.o:
	g++ -I "./include" -c ./src/pch.cpp -o ./lib/pch.o

Kova.o:
	g++ -I "./include" -c ./src/Kova.cpp -o ./lib/Kova.o

Top.o:
	g++ -I "./include" -c ./src/Top.cpp -o ./lib/Top.o	

KovaKontrol.o:
	g++ -I "./include" -c ./src/KovaKontrol.cpp -o ./lib/KovaKontrol.o
	
Test.o:
	g++ -I "./include" -c ./src/Test.cpp -o ./lib/Test.o

calistir:
	./bin/uygulama.exe