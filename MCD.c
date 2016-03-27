#include <stdio.h> 

int mcd (int a, int b); 

int main() 
{ 
	int a = 2; 
	int b = 4; 
	int c = 16; 
	int d = 24;
	int f=mcd(a,b);
	int g=mcd(f,c);
	printf ("El maximo Comun Divisor es :%d\n", mcd ( g , d)); 
	
	return 0; 
} 

int mcd (int a, int b) 
{ 
	if ((a % b) == 0) 
		return b; 
	else 
		return mcd (b, a % b); 
}

