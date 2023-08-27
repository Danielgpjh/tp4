#include <stdio.h>

void numero(float num){
	
	float octava=num/8;
	printf("la octava parte del numero es %.2f \n",octava);
	
}
	
	int main()
	{
		float num=0;
		float octava;
		
		printf("ingrese un numero ");
		scanf("%f ",&num);
		
		octava=num/8;
		
		numero(num);
		
		return 0;
	}
	
	
