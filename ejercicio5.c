#include <stdio.h>


int resistenciaTotal(int r1,int r2,int r3,int r4,int r5,int rt)
{
	rt=r1+r2+r3+r4+r5;
	
	printf("el valor de la resistencia total es :%d \n",rt);
}
int main() {
	int r1=0,r2=0,r3=0,r4=0,r5=0,rt=0;
	printf("ingrese la resistencia 1:");
	scanf("%d",&r1);
	printf("ingrese la resistencia 2:");
	scanf("%d",&r2);
	printf("ingrese la resistencia 3:");
	scanf("%d",&r3);
	printf("ingrese la resistencia 4:");
	scanf("%d",&r4);
	printf("ingrese la resistencia 5:");
	scanf("%d",&r5);
	
	rt=r1+r2+r3+r4+r5;
	
	resistenciaTotal(r1,r2,r3,r4,r5,rt);
	
	return 0;
}

