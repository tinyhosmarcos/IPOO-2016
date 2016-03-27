#include <stdio.h>
void armonico(int n){
	float suma=0;
	float division;
	for(int i=1;i<=n;i++){
		division= (float)1/i;
		
		suma+=division;
	}
	printf("El numero armonico es:	%f",suma);
	
	
}
int main() {
	armonico(20);
	return 0;
}

