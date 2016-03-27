#include <stdio.h>
void mayor_menor(){
	int num_1,num_2,num_3;
	printf("Ingrese tres numero:\n");
	scanf("%d\n",&num_1);
	scanf("%d\n",&num_2);
	scanf("%d",&num_3);
	if (num_1>num_2 and num_2>num_3)
		printf("El numero %d es menor a %d y este menor a %d",num_1,num_2,num_3);
	if (num_1>num_3 and num_3>num_2)
		printf("El numero %d es menor a %d y este mayor a %d",num_1,num_3,num_2);
	else
		printf("El numero %d es menor a %d y este menor a %d",num_3,num_2,num_1);
	
}

int main() {
	mayor_menor();
	return 0;
}

