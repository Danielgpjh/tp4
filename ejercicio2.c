#include <stdio.h>

int perimetro(int num1,int num2,int peri){
	
	printf("El perimetro es %d \n",peri);
	
}
	int area(int num1,int num2,int are){
		
		printf("EL area es %d \n",are);
	}
		
		
		int main(int argc, char *argv[]) {
			
			int num1,num2,peri,are;
			
			printf("ingrese un numero ");
			scanf("%d",&num1);
			
			printf("ingrese otro numero ");
			scanf("%d",&num2);
			
			peri = 2*num1 + 2*num2;
			
			are = num1 * num2;
			
			perimetro(num1,num2,peri);
			area(num1,num2,are);
			
			return 0;
		}
		
