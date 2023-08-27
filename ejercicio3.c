#include <stdio.h>

int porcen(int hombres,int mujeres){
	
	int totalP = hombres + mujeres;
	
	float ph = (hombres*100.0)/totalP;
	float pm = (mujeres*100.0)/totalP;
	
	printf("El porcentaje de Hombres es %.2f \n",ph);
	printf("El porcentaje de mujeres es  %.2f \n",pm);
	
}
	
	int main()
	{
		int hombres,mujeres;
		
		printf("Ingrese el numero de hombres que inviaron curriculum ");
		scanf("%d",&hombres);
		
		printf("Ingrese el numero de mujeres que inviaron curriculum ");
		scanf("%d",&mujeres);
		
		porcen(hombres,mujeres);
		
		return 0;
	}
	
	
