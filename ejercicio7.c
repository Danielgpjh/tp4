#include <stdio.h>

int suma(int a,int b){
	
	int sum=0;
	sum=a+b;
	
	printf("el valor de la suma es %d \n ",sum);
	
	return 0;
}
	
	int mayor(int a,int b){
		
		if(a == b)
			printf("son iguales \n \n ");
		
		else {
			
			if(a>b)
				printf("es mayor %d ",a);
			
			else
				printf("es mayor %d ",b);
			
		}
		
		return 0;
	}
		
		int main(){
			int a=0,b=0;
			
			printf("ingrese el valor de a ");
			scanf("%d",&a);
			
			printf("ingrese el valor de b ");
			scanf("%d",&b);
			
			suma(a,b);
			mayor(a,b);
			
			
			return 0;
		}
			
