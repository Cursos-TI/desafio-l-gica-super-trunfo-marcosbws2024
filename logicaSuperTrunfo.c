#include <stdio.h>
#include <string.h>
#include <time.h>
#include<stdlib.h>
#define QTDEOPCAO 2

int main() {
    
	// Inicializando a semente para numeros aleatorios
	srand(time(NULL));
	// DeclaraCao de variaveis
	char siglaEstado1[3], siglaEstado2[3];
	char nomeCidade1[100], nomeCidade2[100];
	unsigned long int populacao1, populacao2;
	double area1, area2, pib1, pib2;
	int qtdePontoTuristico1, qtdePontoTuristico2;
	int opcao;
	int pontosCarta1 = 0, pontosCarta2=0;

	// Atribuicao automática de valores para a primeira cidade
	//arrays nao podem ter valores atribuidos diretamente sem a funcao strcpy
	strcpy(siglaEstado1, "SP");
	strcpy(nomeCidade1, "São Paulo");
	
	populacao1 = rand() % 10000000 + 1000000; // Populacoo entre 1 milhC#o e 10 milhoes
	area1 = (rand() % 10000) + 100; // Area entre 100 kmB2 e 10.000 kmB2
	pib1 = ((rand() % 500000) + 100000) * 1000.0; // PIB entre 100 mil e 500 mil
	qtdePontoTuristico1 = rand() % 20 + 1; // Pontos turC-sticos entre 1 e 20

	strcpy(siglaEstado2, "RJ");
	strcpy(nomeCidade2, "Rio de Janeiro");
	populacao2 = rand() % 10000000 + 1000000; // PopulaC'C#o entre 1 milhC#o e 10 milhC5es
	area2 = (rand() % 10000) + 100; // area entre 100 kmB2 e 10.000 kmB2
	pib2 = ((rand() % 500000) + 100000) * 1000.0; // PIB entre 100 mil e 500 mil
	qtdePontoTuristico2 = rand() % 20 + 1; // Pontos turisticos entre 1 e 20
	
	// Calculos de PIB per Capita e Densidade Demografica
	double densidade1 = populacao1 / area1;
	double pibPerCapita1 = pib1 / populacao1;
	double densidade2 = populacao2 / area2;
	double pibPerCapita2 = pib2 / populacao2;

	// Calculo do Super Poder
	float superPoder1 = populacao1 + area1 + pib1 + qtdePontoTuristico1 + pibPerCapita1 + (1 / densidade1);
	float superPoder2 = populacao2 + area2 + pib2 + qtdePontoTuristico2 + pibPerCapita2 + (1 / densidade2);

	//Escolha do criterio de comparacao
	printf("\nEscolha o criterio de comparacao:\n");
	printf("1 - Populacao#o\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n8 - Comparar Tudo\n");
	printf("Opcao Escolhida: ");
	scanf("%d", &opcao);
	printf("\n");
	
	switch (opcao) {
	case 1:
	   /*Comparando apenas a Populacao entre as Cartas*/
		printf("Comparando Populacao: \n");
		printf("\nCarta 1 - %s (%s): %lu\n", nomeCidade1, siglaEstado1, populacao1);
		printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, siglaEstado2, populacao2);
		if (populacao1 > populacao2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(populacao1 < populacao2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");
		break;
		
	case 2:
	     /*Comparando apenas a Area entre as Cartas*/
	    printf("\nComparando a area entre as Cartas:\n");
		printf("\nCarta 1 - %s (%s): %.2lf kmB2\n", nomeCidade1, siglaEstado1, area1);
		printf("Carta 2 - %s (%s): %.2lf kmB2\n", nomeCidade2, siglaEstado2, area2);
		if (area1 > area2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (area1<area2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");
		break;
		
	case 3:
	
	    /*Comparando apenas o pib das duas cidades */
	    printf("Comparando somente o pib entre as cartas");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pib1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pib2);
		if (pib1 > pib2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(pib1 < pib2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");
		break;
		
	case 4:
	    //Comparandos apenas os pontos turisticos entre as cartas
	    printf("\nComparando os Pontos Turisticos entre as Cartas:\n");
		printf("\nCarta 1 - %s (%s): %d pontos turristicos\n", nomeCidade1, siglaEstado1, qtdePontoTuristico1);
		printf("Carta 2 - %s (%s): %d pontos turisticos\n", nomeCidade2, siglaEstado2, qtdePontoTuristico2);
		if (qtdePontoTuristico1 > qtdePontoTuristico2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(qtdePontoTuristico1 < qtdePontoTuristico2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");

		break;
	case 5:
	
	    //comparando somente a densidade demográfica
	    printf("\nComparando a Densidade Demografica entre as Cartas: \n");
		printf("\nCarta 1 - %s (%s): %.2lf hab/kmB2\n", nomeCidade1, siglaEstado1, densidade1);
		printf("Carta 2 - %s (%s): %.2lf hab/kmB2\n", nomeCidade2, siglaEstado2, densidade2);
		if (densidade1 < densidade2) // Menor densidade vence
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(densidade1 > densidade2){
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		}else if(densidade1 == densidade2){
			printf("\nEmpatou\n");
		}
		break;
	
	case 6:
	
	  //Comparando a densidade demográfica
	     printf("\nComparando a Densidade Demografica entre as Cartas: \n");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pibPerCapita1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pibPerCapita2);
		if (pibPerCapita1 > pibPerCapita2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(pibPerCapita1 < pibPerCapita2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");
		break;
		
	case 7:
	    /*COMPARANDO O SUPER PODER DAS CARTAS*/
	    printf("\nComparando Super Poder entre as Cartas\n");
	 	printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, superPoder1);
		printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, superPoder2);
		if (superPoder1 > superPoder2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(superPoder1 < superPoder2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou\n");
		break;
		
	case 8:

		/*COMPARANDO A POPULACAO*/
		printf("\nComparando Populacao: \n");
		printf("\nCarta 1 - %s (%s): %lu\n", nomeCidade1, siglaEstado1, populacao1);
		printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, siglaEstado2, populacao2);

		if (populacao1 > populacao2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (populacao1 < populacao2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou!!!\n");

		/*COMPARANDO AREA TERRITORIAL*/
		printf("\nComparando Area: \n");
		printf("\nCarta 1 - %s (%s): %.2lf kmB2\n", nomeCidade1, siglaEstado1, area1);
		printf("Carta 2 - %s (%s): %.2lf kmB2\n", nomeCidade2, siglaEstado2, area2);

		if (area1 > area2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else  if (area1 < area2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
			printf("\nEmpatou!!!\n");

		/*COMPARANDO APENAS O PIB ENTRE AS CIDADES*/
		printf("\nComparando PIB: \n");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pib1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pib2);

		if (pib1 > pib2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (pib1 < pib2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
            printf("\nEmpatou!!!\n");

		/*COMPARANDO PONTOS TURISTICOS*/
		printf("\nComparando Pontos Turisticos: \n");
		printf("\nCarta 1 - %s (%s): %d pontos turisticos\n", nomeCidade1, siglaEstado1, qtdePontoTuristico1);
		printf("Carta 2 - %s (%s): %d pontos turisticos\n", nomeCidade2, siglaEstado2, qtdePontoTuristico2);

		if (qtdePontoTuristico1 > qtdePontoTuristico2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (qtdePontoTuristico1 < qtdePontoTuristico2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		else
            printf("\nEmpatou!!!\n");
            
		/*COMPARANDO DENSIDADE DEMOGRAFICA*/
		printf("\nComparando a Densidade Demografica entre as Cartas: \n");
		printf("\nCarta 1 - %s (%s): %.2lf hab/kmB2\n", nomeCidade1, siglaEstado1, densidade1);
		printf("Carta 2 - %s (%s): %.2lf hab/kmB2\n", nomeCidade2, siglaEstado2, densidade2);
		if (densidade1 < densidade2) // Menor densidade vence
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if(densidade1 > densidade2){
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
		}else if(densidade1 == densidade2){
			printf("\nEmpatou\n");
		}

		/*COMPARANDO PIB PER CAPITA*/
		printf("\nComparando PIB per Capita: \n");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pibPerCapita1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pibPerCapita2);

		if (pibPerCapita1 > pibPerCapita2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (pibPerCapita1 < pibPerCapita2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else 
            printf("\nEmpatou!!!\n");

		/*COMPARANDO O SUPER PODER*/
		printf("\nComparando o Super Poder: \n");
		printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, superPoder1);
		printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, superPoder2);

		if (superPoder1 > superPoder2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (superPoder1 < superPoder2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else 
            printf("\nEmpatou!!!\n");
		break;
	default:
		printf("\nOpçao Invalida!\n");
		break;
	}

	return 0;
}
