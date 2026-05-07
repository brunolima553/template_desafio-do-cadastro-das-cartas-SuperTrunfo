#include<stdio.h>//inccluir biblioteca
#include <stdlib.h>
#include<time.h>

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
    int escolhaAtributo1,escolhaAtributo2,resultado1,resultado2;

    srand(time(0));
    populacao1=1;
    populacao2=0;
    area1=1;
    area2=0;
    pib1=1;
    pib2=0;
    turistico1=1;
    turistico2=0;
    densidade1=0;
    densidade2=1;
    percapita1=1;
    percapita2-0;
    superpoder1=1;
    superpoder2=0;


    



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
    inversodensidade1 = 1 / densidade1 ;
    inversodensidade2 = 1 / densidade2 ;

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
    printf("\n");
    printf("\n");
    printf("\n");
    

    //Comparação das cartas 
    printf("***Comparação das Cartas***\n");

    printf("\n");
    printf("\n");
    printf("\n");

    //Logica da Comparação de cartas com  SWITCH e IF e ELSE

    printf(" Selecione o primeiro atributo para á comparação das cartas de 1 á 7!\n");
    printf("\n");
    printf("\n");
    printf("1. População\n");
    printf("2. Aréa\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("***Escolha uma opção***\n");
    scanf("%d",&escolhaAtributo1);

     //usando if/else dentro do switch
    switch (escolhaAtributo1)
    {
     case 1:
         
      printf(" *** Comparação Populacional***\n");
      printf("Carta 1 - %s : %lu \n",cidade1,populacao1);
      printf("Carta 2 - %s : %lu \n",cidade2,populacao2);

      resultado1 = populacao1 > populacao2 ? 1 : 0;
      break;

     case 2:
           
      printf(" *** Comparação Area km2!***\n");
      printf("Carta 1 - %s : %f \n",cidade1,area1);
      printf("Carta 2 - %s : %f \n",cidade2,area2);
      
       resultado1 = area1 > area2 ? 1 : 0;
     
      break;

     case 3:

     printf(" *** Comparação PIB***\n");
     printf("Carta 1 - %s : %f \n",cidade1,pib1);
     printf("Carta 2 - %s : %f \n",cidade2,pib2);
     
     
       resultado1 = pib1> pib2 ? 1 : 0;

      break;

     case 4:

     printf(" *** Comparação Pontos Turisticos***\n");
     printf("Carta 1 - %s : %d \n",cidade1,turistico1);
     printf("Carta 2 - %s : %d \n",cidade2,turistico2);
    
       resultado1 = turistico1 > turistico2 ? 1 : 0;

      break;

     case 5:

     printf(" *** Comparação Densidade Populacional***\n");  
     printf("Carta 1 - %s : %.2f \n",cidade1,densidade1);
     printf("Carta 2 - %s : %.2f \n",cidade2,densidade2);
     
       resultado1 = densidade1 < densidade2 ? 1 : 0;

      break;

     case 6:

     printf(" *** Comparação Renda Per Capita ***\n");  
     printf("Carta 1 - %s : %.2f \n",cidade1,percapita1);
     printf("Carta 2 - %s : %.2f \n",cidade2,percapita2);
    
      resultado1 = percapita1 > percapita2 ? 1 : 0;

    break;

     case 7:

     printf(" *** Comparação Super Poder ***\n");  
     printf("Carta 1 - %s : %f \n",cidade1,superpoder1);
     printf("Carta 2 - %s : %f \n",cidade2,superpoder2);
    
       resultado1 = superpoder1 > superpoder2 ? 1 : 0;

      break;

      default:
          printf("Opção Inválida\n");
       break;
    }
    
    printf("\n");
    printf("\n");

    

    printf(" Selecione segundo atributo para á comparação das cartas de 1 á 7!\n");
    printf("\n");
    printf("\n");
    printf("1. População\n");
    printf("2. Aréa\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("***Escolha uma opção***\n");
    scanf("%d",&escolhaAtributo2);
    printf("\n");
    printf("\n");

    if (escolhaAtributo1 == escolhaAtributo2)
    {
      printf("Você escolheu o mesmo atributo,tente novamente!\n");
    } else{
       
         switch (escolhaAtributo2)
    {
     case 1:
         
      printf(" *** Comparação Populacional***\n");
      printf("Carta 1 - %s : %lu \n",cidade1,populacao1);
      printf("Carta 2 - %s : %lu \n",cidade2,populacao2);

      resultado2 = populacao1 > populacao2 ? 1 : 0;
      break;

     case 2:
           
      printf(" *** Comparação Area km2!***\n");
      printf("Carta 1 - %s : %f \n",cidade1,area1);
      printf("Carta 2 - %s : %f \n",cidade2,area2);
      
       resultado2 = area1 > area2 ? 1 : 0;
     
      break;

     case 3:

     printf(" *** Comparação PIB***\n");
     printf("Carta 1 - %s : %f \n",cidade1,pib1);
     printf("Carta 2 - %s : %f \n",cidade2,pib2);
     
     
       resultado2 = pib1> pib2 ? 1 : 0;

      break;

     case 4:

     printf(" *** Comparação Pontos Turisticos***\n");
     printf("Carta 1 - %s : %d \n",cidade1,turistico1);
     printf("Carta 2 - %s : %d \n",cidade2,turistico2);
    
       resultado2 = turistico1 > turistico2 ? 1 : 0;

      break;

     case 5:

     printf(" *** Comparação Densidade Populacional***\n");  
     printf("Carta 1 - %s : %.2f \n",cidade1,densidade1);
     printf("Carta 2 - %s : %.2f \n",cidade2,densidade2);
     
       resultado2 = densidade1 < densidade2 ? 1 : 0;

      break;

     case 6:

     printf(" *** Comparação Renda Per Capita ***\n");  
     printf("Carta 1 - %s : %.2f \n",cidade1,percapita1);
     printf("Carta 2 - %s : %.2f \n",cidade2,percapita2);
    
      resultado2= percapita1 > percapita2 ? 1 : 0;

    break;

     case 7:

     printf(" *** Comparação Super Poder ***\n");  
     printf("Carta 1 - %s : %f \n",cidade1,superpoder1);
     printf("Carta 2 - %s : %f \n",cidade2,superpoder2);
    
       resultado2 = superpoder1 > superpoder2 ? 1 : 0;

      break;

      default:
          printf("Opção Inválida\n");
       break;
    }


    }

    printf("\n");
    printf("\n");
    if (resultado1 && resultado2)
     {
       printf("Parabéns você ganhou!\n");
       printf("Carta 1 Venceu!\n");
     }else if (resultado1 != resultado2)
     {
      printf("Empate!\n");
     }else{
      printf("Infelizmente você perdeu!\n");
      printf("Carta 2 Venceu!\n");
     }
     
     
    


    return 0;
    
     
    }

   


    
    


    












































 