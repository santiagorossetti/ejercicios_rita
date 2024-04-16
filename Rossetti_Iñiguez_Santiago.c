#include <stdio.h>
#include <stdlib.h>


int main() {
	while(1){
	
	// declaraciones de variables
	
	// selector de ejercicio
	int ejercicio;
	
	// ejercicio 1
	
	int Hora_i;
	int Hora_e;
	int monto = 500;
	
	// ejercicio 2
	
	double n1;
	double n2;
	double result1;
	double cont1 = 1.00;
	
	// ejercicio 3
	
	double KM;
	double PComb;
	double CostoComb;
	double Tiempo;
	int BoC;
	
	// ejercicio 4
	
	int entradas;
	int precio;
	double total;
	
	// ejercicio 5
	
	int personas;
	int valor;
	int valorT;
	
	// se ingresa el ejercicio a revisar
	printf("elija el ejercicio que desea ver\n");
	scanf("%d" , &ejercicio);
	
	if (ejercicio > 5 || ejercicio < 1){
		puts("error: el ejercicio ingresado no existe");
	}
	if (ejercicio == 3){
		printf("no lo termine :(");
		return 0;
	}
	
	switch(ejercicio){
		
		// ejercicio 1
		
		case 1:
			printf("Ingrese la hora de ingreso en horario militar: ");
			scanf("%d" , &Hora_i);
			
			printf("Ahora, ingrese la hora de egreso en horario militar: ");
			scanf("%d" , &Hora_e);
			
			while(Hora_i != Hora_e){
				
				if(Hora_i == 2400){
					Hora_i = 0000; // devuelve el reloj a 0000 indicando que es un nuevo dia
				}
				
				monto = monto + 250;
				
				Hora_i = Hora_i + 100;
			}
			
			printf("El monto a pagar es de %d $\n" , monto);
			
			puts("Gracias por utilizar este programa");
			return 0;
		
		// ejercicio 2
		
		case 2:
			printf("Ingrese los dos numeros: ");
			scanf("%lf %lf" , &n1 , &n2);
			
			if(n1 != 0 || n2 != 0){
				
				if( n1 < 0 || n2 < 0){
					puts("El numero es negativo");
					
					puts("Gracias por utilizar este programa");
					return 0;
					
				}else if (n1 != (int)n1 || n2 != (int)n2){
					
					puts("El numero no es un entero");
					
					puts("Gracias por utilizar este programa");
					return 0;
				} else {
					
					while(cont1 != (n2 + 1.00) ){
						
						result1 = result1 + n1;
						cont1 = cont1 + 1.00; 
									
					}
				}
					
			} 
			
			printf("%.2f \n" , result1);
			
			puts("Gracias por utilizar este programa");
			return 0;
			
		// ejercicio 3
		
		/*case 3: 
			printf("ingrese el numero de kilometros recorridos: ");
			scanf("%lf" , &KM);
			
			printf("ahora, ingrese el precio del combustible por litro: ");
			scanf("%lf" , &PComb);
			
			printf("por ultimo, ingrese la duracion del viaje: ");
			scanf("%lf" , &Tiempo);
			
			printf("desea medir el valor cada 100 km o cada 1 km? (100/1): ");
			scanf("%d" , &BoC);
			
			if(BoC == 100){
				
				while (KM != 0){
					CostoComb = PComb * 100;
					
				}
					
			}
			
			*/
		
		
		// ejercicio 4
		
		case 4:
			printf("ingrese el numero de entradas a comprar: ");
			scanf("%d" , &entradas);
			
			if (entradas < 0 || entradas > 4){
				puts("Error: Maximo 4 entradas por compra");
				
				puts("Gracias por utilizar este programa");
				return 0;
			}
			
			printf("ahora ingrese el valor de las entradas: ");
			scanf("%d" , &precio);
			
				if(entradas == 2){
					total = precio - (precio * 0.10); 
				} else if(entradas == 3){
					total = precio - (precio * 0.15);
				} else if(entradas == 4){
					total = precio - (precio * 0.20);
				}
			
			printf("debido a los descuentos, el valor de las %d entradas es de %.2f\n" , entradas , total);
			
			puts("Gracias por utilizar este programa");
			return 0;
		
		
		// ejercicio 5
		
		case 5:
			printf("ingrese el numero de personas: ");
			scanf("%d" , &personas);
			
			if(personas <= 200){
				valor = 6500;
			} else if (personas > 200 || personas <= 300){
				valor = 5500;
			} else if (personas > 300){
				valor = 4500;
			}
			
			valorT = personas * valor;
			printf("El monto total es de %d$ \n" , valorT);
			
			puts("Gracias por utilizar este programa");
			return 0;
			
			
	}


	
}
}

