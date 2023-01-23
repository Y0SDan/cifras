/*Tarea 2: Convertir una matriz de tamño maximo 4x4 a su transpuesta*/
#include<stdio.h>
#include<stdlib.h>//incluye la funcion "malloc" que se utiliza para reservar memoria

void meteMatriz(int [][4]);
void traspuesta(int [][4]);
void muestraMatriz(int [][4]);
int **reservaMemoria(int, int);
void liberaMatriz(int **matriz, int n);
void rellenaMatriz(int** matrix, int n, int m);
void transponeMatriz(int** matriz, int n, int m);
void imprimeMatriz(int** matriz, int n, int m);

int main()
{
	int matriz[4][4],**M,n,m;
	//meteMatriz(matriz);
    //muestraMatriz(matriz);
	//traspuesta(matriz);

    printf("Ingresa el valor n de la matriz: \n");
    scanf("%d",&n);
    printf("Ingresa el valor m de la matriz: \n");
    scanf("%d",&m);

    M = reservaMemoria(n,m);
    rellenaMatriz(M,n,m);
    printf("La matriz es: \n");
    imprimeMatriz(M,n,m);
    transponeMatriz(M,n,m);
    printf("La matriz transpuesta es: \n");
    imprimeMatriz(M,n,m);
    liberaMatriz(M,n);

	return 0;
}
void meteMatriz(int matrizx[4][4])
{
	int fila,columna;
	printf("Dame los datos a ingresar a la matriz:\n");
	for(fila=0;fila<4;++fila)
	{
	for(columna=0;columna<4;++columna)
	 {
	 printf("Matriz [%d][%d]=", fila,columna);
	 scanf("%d", &matrizx[fila][columna]);
	 }
    }
	return;
}
void muestraMatriz(int matrizx[4][4])
{
	int z,y;
	printf("La matriz antes de la funcion transpuesta :\n");
	for(z=0;z<4;++z)
	{
		for(y=0;y<4;++y)
		{
		printf(" %d ",matrizx[z][y]);
		}
		printf("\n");
	}
	return;
}
void traspuesta(int matrizx[4][4])
{
	int i,t;
	printf("La matriz despues de la funcion transpuesta es :\n");
	for(i=0;i<4;i++)
	{
		for(t=0;t<4;t++)
		{
			printf(" %d ",matrizx[t][i]);
		}
		printf("\n");
	}
}
int **reservaMemoria(int n, int m){
    int i;

    int** matriz =(int**) malloc(n * sizeof(int*));
    for (i = 0; i < n; i++){
        matriz[i] = (int*) malloc(m * sizeof(int));
    }
    return matriz;
}
void liberaMatriz(int **matriz, int n){
    int i;

    for (i = 0; i < n; i++){
        free(matriz[i]);
    }
    free(matriz);
}
void rellenaMatriz(int** matriz, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void transponeMatriz(int** matriz, int n, int m) {
    int i, j;
    int temp;
    for (i = 0; i < n; i++) {
        for (j = i; j < m; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}
void imprimeMatriz(int** matriz, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}