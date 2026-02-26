#include <stdio.h> //incluir biblioteca

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas


int main() {
  //Declarando todas as variaveis.
   char Estado1 ,Estado2;
   char Codigo1[03] ,Cidade1[20] ,Codigo2[03] ,Cidade2[20];
   int  Populacao1,Turistico1,Populacao2,Turistico2;
   float Area1, PIB1, Area2, PIB2;

   printf("Vamos começar o cadastramento das cartas!  \n");//interação
   printf("Carta 1   \n"); // interação
   printf("Digite o estado com um caractere de 'A' á 'H'    \n");// saída de dados
   scanf(" %c",&Estado1); //entrada de dados 

   printf("Digite o código da carta com três caracteres!   \n");
   scanf("%s",Codigo1);

   printf("Digite o nome da cidade!   \n");
   scanf("%s",Cidade1);

   printf("Digite a população!   \n");
   scanf("%d",&Populacao1);

   printf("Digite a Área km2!  \n");
   scanf("%f",&Area1);

   printf("Digite o PIB!  \n");
   scanf("%f",&PIB1);

   printf("Digite o n° de pontos turisticos!  \n");
   scanf("%d",&Turistico1);

   printf("Primeira carta concluida!\n""Vamos continuar!    \n");

   printf("Carta 2  \n"); // interação
   printf("Digite o estado com um caractere de 'A' á 'H'   \n");// saída de dados
   scanf(" %c",&Estado2); //entrada de dados 

   printf("Digite o código da carta com três caracteres!\n");
   scanf("%s",Codigo2);

   printf("Digite o nome da cidade!\n");
   scanf("%s",Cidade2);

   printf("Digite a população!\n");
   scanf("%d",&Populacao2);

   printf("Digite a Área km2!\n");
   scanf("%f",&Area2);

   printf("Digite o PIB!\n");
   scanf("%f",&PIB2);

   printf("Digite o n° de pontos turisticos!");
   scanf("%d",&Turistico2);

   printf("Concluido,acompanhe o resultado!   \n");//aconteceu diversos erros na compilação,notei que se colocar . ou , nos dados acontece erros

   printf("Carta1                             Carta2\n");
  printf("Estado:%c                           Estado:%c      \n ",Estado1,Estado2);
  printf("Código:%s                     Código:%s      \n ",Codigo1,Codigo2);
   printf("Cidade: %s                           Cidade:%s      \n",Cidade1,Cidade2);
   printf("População:%d                  População%d    \n",Populacao1,Populacao2);
   printf("Área:%f                 Área%f         \n",Area1,Area2);
   printf("PIB:%f                  PIB:%f          \n",PIB1,PIB2);
   printf("P.Turisticos:%d                   P.Turisticos:%d \n",Turistico1,Turistico2);
//tentei alinhar os Resultados ,mais sem sucesso.



return 0;
} 
