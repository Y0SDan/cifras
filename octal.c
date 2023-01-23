#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int octal(int[], int);
void imprime(int, int[]);

int main(){
    int a,b,aa;
    aa = &b;
	int aux[SIZE];
   printf("Dame el numero a convertir\n");
   scanf("%d",&a);

    b = octal(aux,a);
    printf("El numero convertido es --> ");
    imprime(b,aux);

    //printf("El valor es %d",a);

    return 0;
}

int octal(int aux[SIZE],int n){
    int i = 0,c;

    do{
        *(aux + i)= n % 8;
        n = n / 8;
        i++;
    }while(n != 0);

    /*for(c = i-1;c >= 0;c--){
        *n = *n * 10;
        *n = *n + aux[c];
    }*/
    return (i);
}
void imprime(int n, int aux[SIZE])
{
	int i;
	for(i=n-1; i>=0; --i)
		printf("%d",*(aux + i));
	return;
}