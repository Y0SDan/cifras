#include <stdio.h>
#include <stdlib.h>

void unidades(int n);
void eleven(int n);
void decenas(int n);
void centenas(int n);
void impDec(int n);
void impCent(int n);
void impMil(int n);
void miles(int coc);
void numCL(int num);

void unidades(int n){
  if(n <= 9){
      switch(n){
          case 0: printf("cero "); break;
          case 1: printf("uno "); break;
          case 2: printf("dos "); break;
          case 3: printf("tres "); break;
          case 4: printf("cuatro "); break;
          case 5: printf("cinco "); break;
          case 6: printf("seis "); break;
          case 7: printf("siete "); break;
          case 8: printf("ocho "); break;
          case 9: printf("nueve "); break;
      }
  }
}

void eleven(int n){
  switch(n){
      case 11: printf("once"); break;
      case 12: printf("doce"); break;
      case 13: printf("trece"); break;
      case 14: printf("catorce"); break;
      case 15: printf("quince"); break;
      case 16: printf("dieciseis"); break;
      case 17: printf("diecisiete"); break;
      case 18: printf("dieciocho"); break;
      case 19: printf("diecinueve"); break;
  }
}

void decenas(int n){
  switch(n){
    case 1: printf("diez"); break;
    case 2: printf("veinte"); break;
    case 3: printf("treinta"); break;
    case 4: printf("cuarenta"); break;
    case 5: printf("cincuenta"); break;
    case 6: printf("sesenta"); break;
    case 7: printf("setenta"); break;
    case 8: printf("ochenta"); break;
    case 9: printf("noventa"); break;
  }
}

void centenas(int n){
  switch(n){
    case 1: printf("cien"); break;
    case 2: printf("doscientos "); break;
    case 3: printf("trescientos "); break;
    case 4: printf("cuatroscientos "); break;
    case 5: printf("quinientos "); break;
    case 6: printf("seiscientos "); break;
    case 7: printf("setescientos "); break;
    case 8: printf("ochoscientos "); break;
    case 9: printf("novescientos "); break;
  }
}

void impDec(int n){
  int mod,coc;

  mod = n % 10;
  coc = n / 10;

  if(n >= 30 || n == 20){
    decenas(coc);

    if(mod % 10 != 0){
      printf(" y ");
      unidades(mod);
      //printf("\n");
    }

  }else if(mod > 20 ){
    printf("venti");
    unidades(mod);
  }
}

void impCent(int n){
  int mod,coc;

  coc = n / 100;
  centenas(coc);
  mod = n % 100;

  if((n % 100) > 0){
    if(n < 200){
        printf("to " );
    }
      if((n % 100) >= 20){
        impDec(mod);
      }
      if((n % 100) > 10 && (n % 100) < 20){
        eleven(mod);
      }
      if((n % 100) < 10 && (n % 100) >= 0){
        unidades(mod);
      }
  }
}

void impMil(int n){
  int mod, coc;

  mod = n % 1000;
  coc = n / 1000;

  if(mod == 0){
    miles(coc);
  }else if(mod != 0){
      miles(coc);
      numCL(mod);
  }


}

void miles(int coc){
  if(coc <= 9){
    if(coc == 1){
      printf("mil" );
    }else{
        unidades(coc);
        printf("mil" );
    }
  }
  if(coc > 10 && coc < 20){
    eleven(coc);
    printf("mil" );
  }
  if(coc > 10 && coc < 100){
    impDec(coc);
    if(coc >= 20 || coc == 10){
        printf("mil" );
    }
  }
  if(coc >= 100 && coc < 1000){
    impCent(coc);
    printf("mil" );
  }
}

void numCL(int num) {
  if(num <= 9){
    unidades(num);
  }
  if(num > 10 && num < 20){
    eleven(num);
  }
  if(num > 10 && num < 100){
    impDec(num);
  }
  if(num >= 100 && num < 1000){
    impCent(num);
  }
}

int main(){
    char numCad[5] = {'0','0','0','0','\0'};
    int num;

    printf("Introduce un numero: \n");
    scanf("%s",numCad);

    num = atoi(numCad);

    //printf("El numero introducido es %c\n",num);

    if(num <= 9){
      unidades(num);
    }
    if(num > 10 && num < 20){
      eleven(num);
    }
    if(num > 10 && num < 100){
      impDec(num);
    }
    if(num >= 100 && num < 1000){
      impCent(num);
    }
    if(num >= 1000 && num <= 50000){
      impMil(num);
    }


return 0;

}
