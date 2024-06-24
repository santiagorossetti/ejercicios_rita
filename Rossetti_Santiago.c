#include <stdio.h>
#include <stdlib.h>


 //\033[0m Texto \033[0m
//\033[0;31m Texto \033[0m

//HECHO EN DEV C++
/* ATENCION: USAR EL -STD=C99 EN LAS OPCIONES DE COMPILADOR */

void ingresar(){
	
	int jug_selec;
	int juego_selec;
	int punt_selec;
	
	
	//int terna [][3];
	int jugador[30];
	int juego[7];
	int puntaje[10];
	int premio;
	
	for (int i = 0; i < 30; i++){
		jugador[i] = i;
	//	printf(  "%d\n" , jugador[i]);
	}
	
	for (int i = 0; i < 7; i++){
		juego[i] = i;
		//printf("%d\n" , juego[i]);
	}
	
	for (int i = 0; i < 10; i++){
		puntaje[i] = i;
		//printf("%d\n" , puntaje[i]);
	}
	
	

	
	
	while (jug_selec != 0){ // este while controla que el numero de jugador no sea 0
		printf(" \n ingrese el numero de jugador (ingrese 0 si quiere cerrar el programa):");
		scanf("%d" , &jug_selec);
		if(jug_selec > 30){
			printf("Error, ingrese un valor valido"); // recibe el numero de jugador
			ingresar();
		} else if(jug_selec == 0){
			return 0;
		}
	
		printf("Ahora ingrese el numero de juego: "); // recibe el numero de juego
		scanf("%d" , &juego_selec);
			if(juego_selec > 7){
				printf("Error, ingrese un valor valido");
				ingresar();
			}
		
		printf("Ingrese el puntaje en el juego: "); // recibe el numero de puntaje en dicho juego
		scanf("%d" , &punt_selec);
			if(punt_selec > 10){
				printf("Error, ingrese un valor valido");
				ingresar();
			}
		
		printf("Por ultimo, ingrese el premio a entregar: "); // recibe el premio
			scanf("%d" , &premio);
		
		if (puntaje[punt_selec] > 8){
			printf("\n el jugador %d recibe $ %d de premio por sacar %d puntos en el juego numero %d \n" , jugador[jug_selec] , premio, punt_selec, juego_selec);
		} else if (puntaje[punt_selec] <= 8){
		
			printf("El jugador %d no recibe premio en el juego %d \n" , jug_selec , juego_selec);
		
		}
		
		
	}

	
}


void menu(){
	printf("bienvenido, a la tabla de valores ");
		ingresar();
	
	}




int main() {
	
	menu();
	
	return 0;

}
