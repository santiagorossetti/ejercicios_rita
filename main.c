#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	//while (1){ //mientras sea verdadero, el programa no termina
		
        //declaraciones

		int ejercicio; // declaro la variable donde guardo el ejercicio a realizar
		
        // variables para guardar valores
        
        int A;
		int B;
		int C;
		
        // se pide que el usuario elija el ejercicio y se revisa cual eligió

		printf("Ingrese el ejercicio deseado del 1 al 4\n");
		scanf("%d" , &ejercicio);
	
        // se entra al switch, donde estan los 4 ejercicios

		switch (ejercicio){
	
            

		case 1:
			
			printf("ingrese un numero y te digo si es positivo, negativo o cero\n");
			scanf("%d" , &A );
			
			if (A != 0){ // pregunta si el numero ingresado es diferente a 0
				if (A > 0) { // si el numero es mayor a 0, este sera positivo, y si es menor, sera negativo 
					printf("%d es positivo\n" , A);
				} else{
					printf("%d es negativo\n" , A);
				} 
			}else{
				printf("%d es cero, por lo que no es positivo ni negativo" , A); //si es 0, el programa te hace saber que 0 no es positivo ni negativo
			}
		break;
		
		case 2:
			printf("ingrese el numero deseado y te digo si es par o impar\n");
			scanf("%d" , &A);
			
			if (A % 2 == 0){ // se fija que el resto de A / 2 sea 0, sabiendo asi si es par o no
				printf("%d es par" , A);
			} else {
				printf("%d es impar", A);
			}
		
		break;
		
		case 3:
			printf("ingrese el numero deseado y te digo si es multiplo de 2, de 3, de ambos o de ninguno\n");
			scanf("%d" , &A);
			
			if (A % 2 == 0){
				if (A % 3 == 0){ // si esto es verdadero, A es multiplo de ambos numeros
					printf("%d es multiplo de 2 y 3\n" , A);
				} else {
					printf("%d es multiplo de 2\n" , A);
				}
			} else if (A % 3 == 0) {
				
					printf ("%d es multiplo de 3\n" , A);
				
			} else {
				printf("%d no es multiplo ni de 2 ni de 3\n" , A); //si ningún modulo da 0, entonces A no es multiplo de ninguno
			}
		break;
		
		case 4:
			printf("ingrese los 3 numeros deseados y te digo cual de los ingresados es mayor\n");
			scanf("%d %d %d" , &A , &B , &C);
			
			if(A == B) { //revisa caso por caso, para determinar cuales son iguales y cual es el mayor
				if(B == C){
					
					printf("son los 3 iguales");
					break;

				} else if (B > C) {
					printf ("%d y %d son iguales y, por lo tanto, son ambos los mayores " , A , B);
                    break;
				} else {
                    printf("%d es el mayor" , C);
                    break;
                }
			} else if (A == C){
                if(A > B){
                    printf ("%d y %d son iguales y, por lo tanto, son ambos los mayores" , A , C);
                    break;
                } else {
                    printf("%d es el mayor" , B);
                    break;
                }
            } else if (B == C){
                if(B > A){
                    printf ("%d y %d son iguales y, por lo tanto, son ambos los mayores" , B , C);
                    break;
                } else {
                    printf("%d es el mayor" , A);
                    break;
                }
            } else if (A > B){
                if (A > C){
                    printf("%d es el mayor" , A);
                    break;
                } else {
                    printf("%d es el mayor" , C);
                    break;
                }
            } else if (B > C){
                printf("%d es el mayor" , B);
                    break;
            } else {
                printf("%d es el mayor" , C);
                    break;
            }
		
		}
		
		return 0;
	
    //una prueba que me rompe todo el programa, pedir ayuda a la profe

	/*char SoN;
	
	printf("desea realizar otro ejercicio?\n");
	
	scanf("%c" , &SoN);
	
	if (SoN == 'N'){
		return 0;
	}
	*/
}



