#include<stdio.h>//inccluir biblioteca

//Desafio Super Trunfo 
//Tema 1 Cadastro de Cartas

 int main(){

    //Declarando as variaveis
    char  estado1[10], estado2[10];
    char  codigo1[10],codigo2[10],cidade1[50],cidade2[50];
    int   turistico1,turistico2;
    float area1, area2, pib1, pib2;
    float densidade1,percapita1,densidade2,percapita2;
    unsigned long int populacao1,populacao2;
    float superpoder1,superpoder2;
    float inversodensidade1 ,inversodensidade2;

    



    // Cadastramento carta 1
    printf("***Vamos começar o cadastramento de cartas!***  \n");//interação
    printf("Carta 1  \n");//interação
    printf("Digite o Estado com um caracter de 'A' á 'H'  \n");//Saida de dados 
    scanf(" %s",estado1);//Entrada de dados

    printf("Digite o codigo da carta com três caracteres!  \n");
    scanf("%s",codigo1);

    printf(" Digie o nome da cidade!  \n");
    scanf("%s",cidade1);

    printf("Digite a população!  \n");
    scanf("%lu",&populacao1);

    printf("Digite a Área em km2! \n");
    scanf("%f",&area1);

    printf("Digite o PIB!  \n");
    scanf("%f",&pib1);

    printf("Digite o n° de pontos turisticos!  \n");
    scanf ("%d",&turistico1);

    printf("Primeira carta concluída! \n ");
    printf("***Vamos continuar!***  \n");


    // Cadastramento carta 2


    printf("Carta 2  \n");
    printf("Digite o  estado com um caracter de 'A' á 'H'  \n");//saísa de dados
    scanf(" %s",estado2);//entrada de dados

    printf("Digite o codigo da carta com três caracteres!  \n");
    scanf("%s",codigo2);

    printf(" Digite o nome da cidade!  \n");
    scanf("%s",cidade2);

    printf("Digite a população! \n");
    scanf("%lu",&populacao2);

    printf("Digite a Área em km2!  \n");
    scanf("%f",&area2);

    printf("Digite o PIB!  \n");
    scanf("%f",&pib2);

    printf("Digite o n° de pontos turisticos!  \n");
    scanf("%d",&turistico2);

    printf("Concluído,acompanhe o resultado!  \n");
    printf("\n");
    printf("\n");

    //Calculos das variaveis

    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;

    
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

     //calculo inverso da densidade populacional
    inversodensidade1 = densidade1 / 1;
    inversodensidade2 = densidade2 / 1;

    //Calculo super poder
    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + percapita1 + inversodensidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + percapita2 + inversodensidade2;





    printf("Carta 1  \n");
    printf("Estado:%s \n",estado1);
    printf("Código:%s \n",codigo1);
    printf("Cidade:%s \n",cidade1);
    printf("População:%lu  habitantes\n",populacao1);
    printf("Área:%f  km2\n",area1);
    printf("PIB:%f  bilhoes de reias\n",pib1);
    printf("Pontos Turisticos:%d \n",turistico1);
    printf("Densidade Populacional: %.2f hab/km2\n" ,densidade1);
    printf("Renda per capita: %.2f reais\n",percapita1);
    printf("Super Poder: %f\n",superpoder1);

    printf("\n");
    printf("\n");

    printf("Carta 2 \n");
    printf("Estado:%s \n",estado2);
    printf("Código:%s \n",codigo2);
    printf("Cidade:%s \n",cidade2);
    printf("População:%lu  habitantes\n",populacao2);
    printf("Área:%f  km2\n",area2);
    printf("PIB:%f  bilhoes de reais\n",pib2);
    printf("Pontos Turisticos:%d \n",turistico2); 
    printf("Densidade Populacional: %.2f  hab/km2 \n" ,densidade2);
    printf("Renda per capita: %.2f  reais\n",percapita2);
    printf("Super Poder: %f\n",superpoder2);

    //Comparação das cartas 
    printf("***Comparação das Cartas***\n");

    printf("\n");
    printf("\n");

    printf("***Resultado '1' será vencedor e resultado '0' perdedor***\n");
    printf("\n");
    
    printf("***Carta 1 ***\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n",area1 > area2);
    printf("PIB: %d\n",pib1 > pib2);
    printf("Pontos turisticos: %d\n",turistico1 > turistico2);
    printf("Densidade populacional: %d\n",densidade1 < densidade2);
    printf("Renda per Capita: %d\n",percapita1 > percapita2);
    printf("Super Poder: %d\n",superpoder1 > superpoder2);


    printf("\n");
    printf("\n");



    printf("***Carta 2 ***\n");

    printf("\n");
    printf("População: %d\n", populacao2 > populacao1);
    printf("Área: %d\n",area2 > area1);
    printf("PIB: %d\n",pib2 > pib1);
    printf("Pontos turisticos: %d\n",turistico2 > turistico1);
    printf("Densidade populacional: %d\n",densidade2 < densidade1);
    printf("Renda per Capita: %d\n",percapita2 > percapita1);
    printf("Super Poder: %d\n",superpoder2 > superpoder1);



    
    


    












































 }