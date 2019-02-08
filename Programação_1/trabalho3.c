/**************************************   * Trabalho 3 de Programacao de Computadores I - 
Batalha Naval  * Curso de Sistemas da informacao  
* Aluno: Matheus Vinnicios - matricula: 0050013189 * Professor: Alex Salgado ***************************************/




#include<stdio.h>
int main()
{
char tabuleiro[5][5];

char batalha[5][5] ={{0,0,0,0,0},
                    {0,1,0,0,1},
                    {0,1,0,0,0},
                    {0,0,0,1,0},
                    {1,0,1,0,1}};

char nome[20];
char continuar;     
int ponto=0;                    
int i;
int j;

printf("Diga seu Nome:   ");
scanf("%s", nome);

do
{
 for(i=0;i<5;i++)
     {
        for(j=0;j<5;j++)
            {
                tabuleiro[i][j] = '*';
                printf("%c" ,tabuleiro[i][j]);
            }
    printf("\n");
}


printf("Escolha onde Deseja Atirar, Linha(0--4) \n  ");
scanf("%d",&i);
printf("Escolha onde Deseja Atirar, Coluna(0--4) \n ");
scanf("%d",&j);
        
                
                        
    if(batalha[i][j] == 1)
        {
             tabuleiro[i][j] = 'X';
             printf("Bomba!!, você ganhou 1 ponto");
             ponto++;
             printf("%d", ponto);
             printf("\n");
              
              
              
         }
            
    else 
        {
        tabuleiro[i][j] = '0';
        printf("\n");
        printf("Agua!! Que Pena!!");
        printf("\n");
        }
               
             
     for(i=0; i<5; i++)
         { 
            for(j=0; j<5; j++)
                {
                    printf("%c", tabuleiro[i][j]);
                }
    printf("\n");
        }
            
          
         printf("deseja continuar sim=s não=n\n");
         scanf(" %c",&continuar);
                       
        if(continuar == 'n')
            {
                printf ("%s, você fez: %d!! \n", nome,ponto);
                break;
            }
}        
           
while (continuar=='s');

return 0;
}