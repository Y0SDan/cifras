#include <stdio.h>

int main{
    int n;
    
    printf("Introduce un numero: \n");
    scanf("%i",&n);

    if(n < 10){
        switch(n){
            case 0: printf("cero\n");
            case 1: printf("uno\n");
            case 2: printf("dos\n");
            case 3: printf("tres\n");
            case 4: printf("cuatro\n");
            case 5: printf("cinco\n");
            case 6: printf("seis\n");
            case 7: printf("siete\n");
            case 8: printf("ocho\n");
            case 9: printf("nueve\n");
        }
    }

    return 0;
}
