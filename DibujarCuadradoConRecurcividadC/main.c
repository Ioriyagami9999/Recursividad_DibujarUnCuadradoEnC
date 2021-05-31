#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void DibujarCuadrado(int b, int a){
	 
	 if (b>a){
	 	
	 	
	 	
	 }else{
	 	int i;
	 	DibujarCuadrado(b+1,a);
	 	for( i=0;i<a;i++){
	 	printf("*");
		 
		 }
	 	printf("\n");
	 
	 }

	
}

void CapturaDatos(){
	int datos;
	printf("Introduce el numero largo del cuadrado\n");
	scanf("%i",&datos);
	
	DibujarCuadrado(1,datos);
}

int main(int argc, char *argv[]) {


CapturaDatos();
return 0;
}
