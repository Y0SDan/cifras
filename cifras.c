#include <stdio.h>

int main(){
    int n;
    
    printf("Introduce un numero: \n");
    scanf("%i",&n);

    if(n < 10){
        switch(n){
            case 0: printf("cero\n"); break;
            case 1: printf("uno\n"); break;
            case 2: printf("dos\n"); break;
            case 3: printf("tres\n"); break;
            case 4: printf("cuatro\n"); break;
            case 5: printf("cinco\n"); break;
            case 6: printf("seis\n"); break;
            case 7: printf("siete\n"); break;
            case 8: printf("ocho\n"); break;
            case 9: printf("nueve\n"); break;
        }    
    }

    if(n > 10 && n < 20){
            switch(n){
                case 0: printf("cero\n"); break;
                case 1: printf("uno\n"); break;
                case 2: printf("dos\n"); break;
                case 3: printf("tres\n"); break;
                case 4: printf("cuatro\n"); break;
                case 5: printf("cinco\n"); break;
                case 6: printf("seis\n"); break;
                case 7: printf("siete\n"); break;
                case 8: printf("ocho\n"); break;
                case 9: printf("nueve\n"); break;
            }
    }

    return 0;
}
