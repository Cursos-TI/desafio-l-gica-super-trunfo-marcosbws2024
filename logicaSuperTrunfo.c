#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
	char siglaEstado1[3], siglaEstado2[3];
	char nomeCidade1[100], nomeCidade2[100];
	unsigned long int populacao1, populacao2;
	double area1, area2, pib1, pib2;
	int qtdePontoTuristico1, qtdePontoTuristico2;
	int opcao, pontosCidade1 = 0, pontosCidade2 = 0;

    // Atribuição automática de valores para a primeira cidade
    //arrays não podem ter valores atribuidos diretamente sem a função strcpy
    strcpy(siglaEstado1, "SP");
    strcpy(nomeCidade1, "São Paulo");
    
    populacao1 = 12000000;
    area1 = 1521.11;

    // Atribuição automática de valores para a segunda cidade
    //arrays não podem ter valores atribuidos diretamente sem a função strcpy
    strcpy(siglaEstado2, "RJ"); 
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.27;

	// Calculos de PIB per Capita e Densidade Demografica
	double densidade1 = populacao1 / area1;
	double pibPerCapita1 = pib1 / populacao1;
	double densidade2 = populacao2 / area2;
	double pibPerCapita2 = pib2 / populacao2;

	// Calculo do Super Poder
	float superPoder1 = populacao1 + area1 + pib1 + qtdePontoTuristico1 + pibPerCapita1 + (1 / densidade1);
	float superPoder2 = populacao2 + area2 + pib2 + qtdePontoTuristico2 + pibPerCapita2 + (1 / densidade2);

  		/*COMPARANDO A POPULACAO*/
		printf("Comparando Populacao: \n");
		printf("\nCarta 1 - %s (%s): %lu\n", nomeCidade1, siglaEstado1, populacao1);
		printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, siglaEstado2, populacao2);

		if (populacao1 > populacao2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
	

		/*COMPARANDO AREA TERRITORIAL*/
		printf("\nComparando Area: \n");
		printf("\nCarta 1 - %s (%s): %.2lf kmB2\n", nomeCidade1, siglaEstado1, area1);
		printf("Carta 2 - %s (%s): %.2lf kmB2\n", nomeCidade2, siglaEstado2, area2);

		if (area1 > area2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);


		/*COMPARANDO APENAS O PIB ENTRE AS CIDADES*/
		printf("\nComparando PIB: \n");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pib1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pib2);

		if (pib1 > pib2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else if (pib1 < pib2)
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);


		/*COMPARANDO PONTOS TURISTICOS*/
		printf("\nComparando Pontos Turisticos: \n");
		printf("\nCarta 1 - %s (%s): %d pontos turC-sticos\n", nomeCidade1, siglaEstado1, qtdePontoTuristico1);
		printf("Carta 2 - %s (%s): %d pontos turC-sticos\n", nomeCidade2, siglaEstado2, qtdePontoTuristico2);

		if (qtdePontoTuristico1 > qtdePontoTuristico2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
	
            
		/*COMPARANDO DENSIDADE DEMOGRAFICA*/
		printf("\nComparando Densidade Demografica: \n");
		printf("\nCarta 1 - %s (%s): %.2lf hab/kmB2\n", nomeCidade1, siglaEstado1, densidade1);
		printf("Carta 2 - %s (%s): %.2lf hab/kmB2\n", nomeCidade2, siglaEstado2, densidade2);

		if (densidade1 < densidade2) // Menor densidade vence
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
     

		/*COMPARANDO PIB PER CAPITA*/
		printf("\nComparando PIB per Capita:\n");
		printf("\nCarta 1 - %s (%s): %.2lf\n", nomeCidade1, siglaEstado1, pibPerCapita1);
		printf("Carta 2 - %s (%s): %.2lf\n", nomeCidade2, siglaEstado2, pibPerCapita2);

		if (pibPerCapita1 > pibPerCapita2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
     

		/*COMPARANDO O SUPER PODER*/
		printf("\nComparando o Super Poder: \n");
		printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, superPoder1);
		printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, superPoder2);

		if (superPoder1 > superPoder2)
			printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
		else 
			printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
      
            
    return 0;
}
