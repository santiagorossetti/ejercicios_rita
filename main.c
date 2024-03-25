#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//while (1){ //mientras sea verdadero, el programa no termina
		
		int ejercicio; // declaro la variable donde guardo el ejercicio a realizar
		int A;
		int B;
		int C;
		
		printf("Ingrese el ejercicio deseado\n");
		scanf("%d" , &ejercicio);
	
		switch (ejercicio){
	
		case 1:
			
			printf("ingrese un numero\n");
			scanf("%d" , &A );
			
			if (A != 0){
				if (A > 0) {
					printf("%d es positivo\n" , A);
				} else{
					printf("%d es negativo\n" , A);
				}
			}else{
				printf("%d es cero, por lo que no es positivo ni negativo" , A);
			}
		break;
		
		case 2:
			printf("ingrese el numero deseado\n");
			scanf("%d" , &A);
			
			if (A % 2 == 0){
				printf("%d es par" , A);
			} else {
				printf("%d es impar", A);
			}
		
		break;
		
		case 3:
			printf("ingrese el numero deseado\n");
			scanf("%d" , &A);
			
			if (A % 2 == 0){
				if (A % 3 == 0){
					printf("%d es multiplo de 2 y 3\n" , A);
				} else {
					printf("%d es multiplo de 2\n" , A);
				}
			} else if (A % 3 == 0) {
				
					printf ("%d es multiplo de 3\n" , A);
				
			} else {
				printf("%d no es multiplo ni de 2 ni de 3\n" , A);
			}
		break;
		
		case 4:
			printf("ingrese los 3 numeros deseados\n");
			scanf("%d %d %d" , &A , &B , &C);
			
			if(A > B) {
				if(A > C){
					
					printf("%d es el mayor" , A);
					
				} else if (A == C) {
					printf ("%d y %d son mayores" , A , C);
				}
			} else if (A == B)
		
		
		
		// CODIGO NO TERMINADO!!
		
		
		
		
		}
		
		return 0;
	
	/*char SoN;
	
	printf("desea realizar otro ejercicio?\n");
	
	scanf("%c" , &SoN);
	
	if (SoN == 'N'){
		return 0;
	}
	*/
}


