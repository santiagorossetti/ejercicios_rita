#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int num;
	int result;
	
	puts("ingrese el numero deseado");
	scanf("%d" , &num);
	
	while(num != 1){
		
		if (num % 2 == 0){
			result = num / 2;
			num = result;
		} else {
			result = (num * 3) + 1;
			num = result;
		}
	
	printf("%d " , num);
		
	}
	
	return 0;
}
