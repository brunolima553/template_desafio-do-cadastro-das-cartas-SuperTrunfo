#include<stdio.h>//inccluir biblioteca

//Desafio Super Trunfo 
//Tema 1 Cadastro de Cartas

 int main(){

    //Declarando as variaveis
    char estado1, estado2;
    char codigo1[03],codigo2[03],cidade1[30],cidade2[40];
    int populacao1,populacao2,turistico1,turistico2;
    float area1, area2, pib1, pib2;

    printf("Vamos começar o cadastramento de cartas!  \n");//interação
    printf("Carta 1  \n");//interação
    printf("Digite o Estado com um caracter de 'A' á 'H'  \n");//Saida de dados 
    scanf("%c",&estado1);//Entrada de dados

    printf("Digite o codigo da carta com três caracteres!  \n");
    scanf("%s",codigo1);

    printf(" Digie o nome da cidade!  \n");
    scanf("%s",cidade1);

    printf("Digite á populacao!  \n");
    scanf("%d",&populacao1);

    printf("Digite a Área em km2! \n");
    scanf("%f",&area1);

    printf("Digite o PIB!  \n");
    scanf("%f",&pib1);

    printf("Digite o n° de pontos turisticos!  \n");
    scanf ("%d",&turistico1);

    printf("Primeira carta concluída! \n ");
    printf("Vamos continuar!  \n");

    printf("Carta 2  \n");
    printf("Digite o  estado com um caracter de 'A' á 'H'  \n");//saísa de dados
    scanf(" %c",&estado2);//entrada de dados

    printf("Digite o codigo da carta com três caracteres!  \n");
    scanf("%s",codigo2);

    printf(" Digite o nome da cidade!  \n");
    scanf("%s",cidade2);

    printf("Digite a populacao! \n");
    scanf("%d",&populacao2);

    printf("Digite a Área em km2!  \n");
    scanf("%f",&area2);

    printf("Digite o PIB!  \n");
    scanf("%f",&pib2);

    printf("Digite o n° de pontos turisticos!  \n");
    scanf("%d",&turistico2);

    printf("Concluído,acompanhe o resultado!  \n");
    printf("\n");
    printf("\n");

    printf("Carta 1  \n");
    printf("Estado:%c \n",estado1);
    printf("Código:%s \n",codigo1);
    printf("Cidade:%s \n",cidade1);
    printf("População:%d \n",populacao1);
    printf("Área:%f \n",area1);
    printf("PIB:%f \n",pib1);
    printf("Pontos Turisticos:%d \n",turistico1);
    printf("\n");
    printf("\n");

    printf("Carta 2 \n");
    printf("Estado:%c \n",estado2);
    printf("Código:%s \n",codigo2);
    printf("Cidade:%s \n",cidade2);
    printf("População:%d \n",populacao2);
    printf("Área:%f \n",area2);
    printf("PIB:%f \n",pib2);
    printf("Pontos Turisticos:%d  \n",turistico2); //finalizado,alguns erros quando aparece os dados das cartas 

  return 0;
 }