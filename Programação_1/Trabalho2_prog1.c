

/**************************************   
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao *
Aluno: Matheus Vinnicius Gomes Rodrigues - matricula: 0050013189
* Professor: Alex Salgado 
***************************************/

#include<stdio.h>

int main()
{

int i=0, j=0;
int lar, alt;
int recomeco=0;
char caracter, fim;



while( recomeco == 0 )
{

  printf("Introduza uma Largura Valida""\n");
  scanf("%d",&lar);
  
  printf("Introduza uma Altura Valida""\n");
  scanf("%d",&alt);
  
  printf("Escolha um caracter que vc deseja usar""\n" );
  scanf(" %c",&caracter);
  
  printf("Ola meu Nome é Matheus Vinnicius e o meu Retangulo ficou assim:\n");

for(j; j<alt; j++)
{
    for(i; i<lar; i++)
        {
    
            if( j == 0 || j == alt - 1 || i == 0 || i == lar - 1)
                
                  { printf(" %c ", caracter);
                
                  }
                
                    else 
                      {  printf("   ");
                      }
        }              
i=0;
printf( "\n" );               
}
        
        printf("Deseja continuar se sim=(1) se não=(2) ?\n");
        scanf(" %c", &fim);
        
        if( fim == '2' )
        {
            recomeco = 1;
        }
            }



return 0;
}