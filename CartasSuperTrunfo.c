#include<stdio.h>//inccluir biblioteca

//Desafio Super Trunfo 
//Tema 1 Cadastro de Cartas

 int main(){

    //Declarando as variaveis
    //Carta 1
    char estado1[30];
    char codigo1[10],cidade1[60];
    int populacao1,turistico1;
    float area1,pib1;
    float densidade1,percapita1;  //acrecentando a densidade e pib per capita 


    //Carta 2
     char estado2[30];
     char codigo2[10],cidade2[60];
     int populacao2,turistico2;
     float area2,pib2;
     float densidade2, percapita2;  //acrecentando a densidade e pib per capita


    printf("Vamos começar o cadastramento de cartas!  \n");//interação
    printf("Carta 1  \n");//interação
    printf("Digite o Estado com um caracter de 'A' á 'H'  \n");//Saida de dados 
    scanf("%s",estado1);//Entrada de dados

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

    printf("Digite o número de pontos turisticos!  \n");
    scanf ("%d",&turistico1);

    printf("Primeira carta concluída! \n ");
    printf("Vamos continuar!  \n");

    printf("Carta 2  \n");
    printf("Digite o  estado com um caracter de 'A' á 'H'  \n");//saísa de dados
    scanf(" %s",estado2);//entrada de dados

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

    printf("Digite o número de pontos turisticos!  \n");
    scanf("%d",&turistico2);

    printf("Concluído,acompanhe o resultado!  \n");
    printf("\n");
    printf("\n");

    //calculos de densidade e renda per capita, forçando a todos serem float
    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;

    
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    printf("Carta 1  \n");
    printf("Estado:%s \n",estado1);
    printf("Código:%s \n",codigo1);
    printf("Cidade:%s \n",cidade1);
    printf("População:%d Habitantes \n",populacao1);
    printf("Área:%f km2 \n",area1);
    printf("PIB:%f reais\n",pib1);
    printf("Pontos Turisticos:%d \n",turistico1);
    printf("Densidade Populacional: %.2f hab/ km2 \n" ,densidade1);
    printf("Renda per capita: %.5f reais\n",percapita1);

    printf("\n");
    printf("\n");

    printf("Carta 2 \n");
    printf("Estado:%s \n",estado2);
    printf("Código:%s \n",codigo2);
    printf("Cidade:%s \n",cidade2);
    printf("População:%d Habitantes\n",populacao2);
    printf("Área:%f  km2\n",area2);
    printf("PIB:%f  reais\n",pib2);
    printf("Pontos Turisticos:%d  \n",turistico2); 
    printf("Densidade Populacional: %.2f hab/ km2 \n" ,densidade2);
    printf("Renda per capita: %.5f reais\n",percapita2); 

  return 0;
 }