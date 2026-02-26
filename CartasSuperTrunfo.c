#include <stdio.h> //incluir biblioteca

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas


int main() {
  //Declarando todas as variaveis.
   char Estado1 ,Estado2;
   char Codigo1[3] ,Cidade1[50] ,Codigo2[3] ,Cidade2[60];
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

   printf("Digite o n° de pontos turisticos!\n");
   scanf("%d",&Turistico2);

   printf("Concluido,acompanhe o resultado!\n");
   printf("\n");
   printf("\n");


   printf("Carta 1\n");
   printf("Estado:%c  \n",Estado1);
   printf("Código:%s  \n",Codigo1);//não entendo pq não aparece 
   printf("Cidade:%s  \n",Cidade1);//não entendo pq não aprece
   printf("População:%d  \n",Populacao1);
   printf("Área:%f  \n",Area1);
   printf("PIB:%f  \n",PIB1);
   printf("Pontos Turisticos:%d  \n",Turistico1);

   printf("\n");
   printf("\n");

   printf("Carta 2\n");
   printf("Estado:%c  \n",Estado2);
   printf("Código:%s  \n",Codigo2);
   printf("Cidade:%s  \n",Cidade2);
   printf("População:%d  \n",Populacao2);
   printf("Área:%f  \n",Area2);
   printf("PIB:%f  \n",PIB2);
   printf("Pontos Turisticos:%d  \n",Turistico2);


  










return 0;
} 
