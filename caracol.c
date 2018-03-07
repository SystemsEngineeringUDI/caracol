/*
@autor:
 * C�sar Villalobos
 * Estudiante: Ing.Sistemas UDI
*/
/*
Dado el tama�o de la matriz se imprime una matriz en forma de caracol
*/
#include <stdio.h>

int main(){
	int a,i,j;
	printf("Ingrese el tama�o de la matriz cuadrada: ");
	scanf("%d",&a);
	int matriz[a][a];
	int n=a, inicio=0, nlimite=n-1,c=1; //Puntos de referencia dentro de la matriz
	while(c<=(n*n)){ //Parar� cuando llegue al numero que coincida con el tama�o al cuadrado de la matriz
		for(i=inicio;i<=nlimite;i++){ //Izquierda a derecha
			matriz[inicio][i]=c;
			c++;
		}
		for(i=inicio+1;i<=nlimite;i++){ //Hacia abajo
			matriz[i][nlimite]=c;
			c++;
		}
		for(i=nlimite-1;i>=inicio;i--){//Derecha a izquierda
			matriz[nlimite][i]=c;
			c++;
		}
		for(i=nlimite-1;i>=inicio+1;i--){//Hacia arriba
			matriz[i][inicio]=c;
			c++;
		}
		inicio+=1;
		nlimite-=1;//Se disminuye los limites para hacer la matriz cada vez m�s peque�a
	}
	for (i=0;i<a;i++){	//Impresion de la matriz
		for (j=0;j<a;j++){	
			printf("| %d |",matriz[i][j]);							
		}
	printf("\n");
	}
 
	return 0;
}
