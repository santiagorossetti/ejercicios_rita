
/*
 COMPILADOR USADO: DEV C++
 LENGUAJE UTILIZADO: C++
 
*/


#include <iostream>
using namespace std;


#include <stdlib.h>
#include <time.h>
#include <string.h>


#define NUM_OPERADORES 7
#define NUM_VIANDAS 4

// ** VARIABLES GLOBALES **

char *nombres_vianda[NUM_VIANDAS] = {"vegetales" , "carne", "pescado" , "frutas"};  // vector con el tipo de vianda
float precios[NUM_VIANDAS] = {10.0 , 15.0 , 20.0 , 12.0}; // vector que guarda el precio de las viandas
int Ventas_totales[NUM_OPERADORES] = {0}; // vector que acumula las ventas totales
int ventas_operador[NUM_OPERADORES] = {0}; // vector que acumula las ventas por operador
float ComisionesOperador[NUM_OPERADORES] = {0.0}; // vector que guarda las comisiones por operador
int VentasSuperirorA4 = 0; // Variable que cuenta cuantas ventas superaron los 4 elementos




void limpiarPantalla(){ // funcion para limpar la pantalla de la terminal
    system("cls"); 
}


void procesarPedido(int tipo , int operador , int cantidad){ // funcion para procesar el ultimo pedido ingresado 
    Ventas_totales[tipo - 1] += cantidad; // suma al vector de ventas totales


    ventas_operador[operador - 1] += cantidad; // suma al vector de ventas por operador


    if (cantidad > 4){
        VentasSuperirorA4++; // comprueba si la cantidad de productos es mayor a 4, si es asi, le suma 1 a la variable que cuenta la cantidad de ventas superiores a 4
    }


    ComisionesOperador[operador - 1] += cantidad * precios[tipo - 1] * 0.10; // calcula la comision por operador


    if (cantidad > 4){
        ComisionesOperador[operador - 1] += cantidad * precios[tipo - 1] * 0.3; // si el operador vendio mas de 4 productos, este recibe un extra del 3%
    }
}




void gananciaXVianda (){ // muestra la ganancia por vianda
    limpiarPantalla(); // limpia la pantalla
    cout << "\033[1;32m"; // color verde
    cout << "ganancia por tipo de vianda: \n";


    for(int i = 0; i < NUM_VIANDAS ; i++ ){
        cout << nombres_vianda[i] << ": " << precios[i] * Ventas_totales[i] << endl; // muestra el nombre de la vianda y a continuacion calcula el precio X las ventas totales de esa vianda
    }
    cout << "\033[0m"; // devuelve al color blanco
    cout << "Presione ENTER para continuar";
    getchar();
    getchar();// getchar para esperar que el usuario presione enter para continuar
}


void detallesPorOperador(){
    limpiarPantalla();


    cout << "\033[1;32m"; // color verde
    for(int i = 0; i < NUM_OPERADORES; i++){
        cout << "detalles del operador " << i + 1 << ":" << endl; // muestra de que operador son los detalles
        cout << "viandas vendidas: " << ventas_operador[i] << endl; // muestra las viandas vendidas
        cout << "comision obtenida: " << ComisionesOperador[i] << endl; // muestra la comision obtenida
        cout << endl;
    }
    cout << "\033[0m";
    cout << "Presione ENTER para continuar";
    getchar();
    getchar(); // getchar para esperar que el usuario presione enter para continuar
}


void menu_viandas(){ // menu para ver los tipos de viandas
   
    
    cout << "\033[1;34m";// color azul
    cout << "1. Vegetales\n";
    cout << "2. Carne\n";
    cout << "3. Pescado\n";
    cout << "4. Frutas\n";
    cout << "\033[0m"; // Resetear color
}






int main(){
     
	cout << "Bienvenido usuario!! a continuacion, podra calcular la ganancia por vianda y por operador :)" << endl;
	cout << "Presione ENTER para continuar";
	
	getchar();
    getchar(); // getchar para esperar que el usuario presione enter para continuar

	

	//declaraciones
	
    int tipo;
    int cantidad;
    int operador;


    while(1){ // loop que permite al programa recibir datos hasta que el usuario ingrese operador = 0


   limpiarPantalla();
        
        cout << "\033[1;32m" << "elija el operador que realizo la venta (seleccione el id del 1 al 7 y ponga 0 para ver resultados): " << "\033[0m" ;
        cin >> operador;
    
        if (operador > 7 || operador < 0){ // comprueba que el operador ingresado entre en las opciones dadas
            while(operador > 7 || operador < 1){ // si el valor ingresado no es correcto, entra en un loop hasta que se ingrese un valor correcto
                cout << "seleccione una opcion valida" << endl;
                cin >> operador;
            }
        } else if (operador == 0){ // si el valor ingresado es 0, sale del while(1) para entregar los datos procesados
            break;
        }
    
        limpiarPantalla();
        
        cout << "\033[1;34m" << "Ahora, elija el tipo de vianda que se vendido: " << "\033[0m" << endl; // se pide el tipo de vianda que el operador vendio
        
        menu_viandas(); // se llama al menu de sabores
        
        cin >> tipo;
   
        if (tipo > 4 || tipo < 1){ // comprueba que el operador ingresado entre en las opciones dadas
            while(tipo > 4 || tipo < 1){ // si el valor ingresado no es correcto, entra en un loop hasta que se ingrese un valor correcto
                cout << "por favor elija una opcion valida \n";
                cin >> tipo;
            }
        }
        
        limpiarPantalla();
        
        cout << "Por ultimo, ingrese la cantidad: "; // se pide la cantidad de productos
        cin >> cantidad; 
    
        procesarPedido( tipo , operador , cantidad); // se llama a la funcion donde se procesan los datos
    }


    gananciaXVianda (); // se llama a la funcion donde muestra la ganancia por vianda
    detallesPorOperador(); // se llama a la funcion donde muestra los detalles por operador

	limpiarPantalla();

    cout << "ventas que superan las 4 unidades: " << VentasSuperirorA4; // muestra la cantidad de ventas que superan las 4 unidades


    return 0;


}

