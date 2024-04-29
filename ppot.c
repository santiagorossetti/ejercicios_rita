#include <stdio.h>
#include <stdlib.h>



int main() {
	while(1){
	
	// declaraciones
	
	int Persona;
	int Maquina;
	int elecc1;
	
	puts("¡Bienvenido a Piedra, Papel o Tijera!\n");
	
	printf("Queres aprender como jugar? \n");
	puts("1. Ver como se juega");
	puts("2. Comenzar juego");
	
	printf("Ingrese la opcion deseada: ");
	
	scanf("%d" , &elecc1);
	
	if(elecc1 == 1){
		puts("El objetivo es vencer al oponente seleccionando el arma que gana, segun las siguientes reglas:");
		puts("La piedra aplasta la tijera. (Gana la piedra.)");
		puts("La tijera corta el papel. (Gana la tijera.)");
		puts("El papel envuelve la piedra. (Gana el papel.)");
		puts("En caso de empate (que dos jugadores elijan el mismo elemento o que tres jugadores elijan cada uno un objeto distinto), se juega otra vez.");
		
	} else if (elecc1 != 2 || elecc1 !=1){
		
		puts("ingrese una opcion valida");
			
	}
	
	puts("Ahora si, ¡A comenzar el juego!");
	
	
	
}

}
