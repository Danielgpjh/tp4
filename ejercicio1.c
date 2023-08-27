#include <stdio.h>
#include <stdlib.h>
void usuario(){
	char nombre[20], apellido[20];
	
	printf("ingrese su nombre ");
	scanf("%s",&nombre);
	
	printf("ingrese su apellido ");
	scanf("%s",&apellido);
	
	printf("su nombre y apellido es %s %s \n",nombre,apellido);
	
}
int main(){

	usuario();
	system("pause");
	return 0;
}

