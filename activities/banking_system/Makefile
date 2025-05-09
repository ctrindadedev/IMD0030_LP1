#Makefile for a "banking system" C++ application
#Created by Caio de Medeiros Trindade  08/05/2025

#PROG É a variável
PROG = banking_system #Recebe o executável
CC = g++ #Compilador
CPPFLAGS = -O0 -g -Wall -Wextra -pedantic  #Flags de compilação para o pré-processador e compilador.
LDFLAGS = #Flags para o linker

OBJS = main.o #Arquivos objetos definidos como pré requisitos
 # Não precisa usar? classes.h 
$(PROG) : $(OBJS) #Alvo Padrão	
#Regra de construção do executável
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)  


#Compilar o main.cpp

main.o : main.cpp classes.h
	$(CC) $(CPPFLAGS) -c main.cpp


clean:
	rm -f core $(PROG) $(OBJS)
