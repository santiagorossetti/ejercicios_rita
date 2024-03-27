#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int ejercicio;
	
	// ejrcicio 1
	int Alumnos;
	int CostoA;
	float CostoT;
	
	// ejercicio 2
	int Sueldo;
	int Venta1;
	int Venta2;
	int Venta3;
	double SueldoT;
	
	// ejercicio 3
	
	int nota1;
	int nota2;
	int nota3;
	double CParciales;
	int CalP;
	int CalTP;
	double CalFinal;
	
	// ejercicio 4
	int A;
	int B;
	 
	
	// ejercicio 5
	int Auto1 = 70;
	int Auto2 = 150;
	double PuntoX;
	
	printf("Ingrese el ejercicio deseado del 1 al 5\n");
	scanf("%d" , &ejercicio);
		
		if (ejercicio > 5 || ejercicio < 1 ){
			printf("te dije que sea del 1 al 5");
			return 0;
		}
		
	switch (ejercicio){
		
		case 1:
			
			printf("Ingrese la cantidad de alumnos\n");
			scanf("%d" , &Alumnos);
			
			if(Alumnos >= 100){
				CostoA = 500;
				CostoT = Alumnos * CostoA;
				
			} else if (Alumnos >= 50 && Alumnos <= 99){
				CostoA = 400;
				CostoT = Alumnos * CostoA;
					
			} else if (Alumnos >= 30 && Alumnos <= 49){
				CostoA = 300;
				CostoT = Alumnos * CostoA;
				
			} else if (Alumnos < 30){
				CostoT = 6000;
				CostoA = CostoT / Alumnos;
								
			}
			
			printf("El costo por alumno es de $ %d y el costo total es de $ %.2f\n" , CostoA , CostoT);
		
		break;
		
		case 2:
			printf("Ingrese el sueldo y las ventas realizadas\n");
			scanf("%d %d %d %d" , &Sueldo , &Venta1 , &Venta2 , &Venta3 );
			
			SueldoT = Sueldo + (double)Venta1 * 0.10 + (double)Venta2 * 0.10 + (double)Venta3 * 0.10;
			
			
			printf("El sueldo total es de %.2f \n" , SueldoT);
			
		break;
		
		case 3:
			printf("Ingrese sus 3 calificaciones parciales, su calificación del examen final y la calificación del TP final \n");
			scanf("%d %d %d %d %d" , &nota1 , &nota2 , &nota3 , &CalP , &CalTP);
			
			CParciales = (nota1 + nota2 + nota3) / 3;
			CParciales = CParciales * 0.55;
			
			CalP = CalP * 0.30;
			CalTP = CalTP * 0.15;
			
			CalFinal = CParciales + CalP + CalTP;
			
			printf("La nota final del alumno es %.2f\n" , CalFinal);
			
			
			
		break;
		
		case 4:
			printf("ingrese dos numeros y le digo los numeros pares entre estos dos\n");
			scanf("%d %d" , &A , &B);
			
			if (A < B){
				for(int i= A; i <= B; i++) {
					if(i % 2 == 0) {
						printf("%d ", i);
					}	
				}	
			} else if (A > B) {
				for(int i= B; i <= A; i++) {
					if(i % 2 == 0) {
						printf("%d ", i);
					}	
				}	
			}
			
			
		break;
		
		case 5:
			
			PuntoX = (Auto1 + Auto2) / 2;
			
			printf("los dos vehiculos se cruzan en el kilometro %.2f\n" , PuntoX);
		
		break;	
	}
	
return 0;
	
}
