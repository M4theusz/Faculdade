#include <stdio.h>

int main()
{
    float peso=0;
    float altura=0;
    float   Mc=0;
    printf("Diga seu Peso");
    scanf("%f", &peso);
    
    printf("Diga sua altura");
    scanf("%f",&altura);
       
     altura = altura * altura;
       
    Mc = peso / altura;
    printf("Mc=%f", Mc);
       
       if(Mc<=19)
      { printf("Você esta Magra");
      }
      
       else if(Mc<25)
       {printf("Você esta no Peso Ideal");
       }
       
       
       else if(Mc<=30)
      { printf("Você esta Acima do Peso Ideal");
      }
    
       else if (Mc>31)
       {printf("Você esta Obesa");
       }
       return 0;
       
}
