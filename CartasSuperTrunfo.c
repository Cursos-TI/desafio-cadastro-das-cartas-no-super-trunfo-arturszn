#include <stdio.h>

int main(){ 
   char   estado1, estado2, codigocidade1[30],codigocidade2[30], nomecidade1[30], nomecidade2[30];
   float area1, area2, pib1, pib2;
   int  populacao1, populacao2, pontosturisticos1, pontosturisticos2;

//Solicita os dados da primeira carta
printf("Digite os dados da primeira carta\n");
printf("Digite a letra do Estado: \n");
scanf(" %c", &estado1);

//Solicita o código da carta ao usuário
printf("Digite o código da cidade: \n");
scanf("%s", codigocidade1);
getchar();

//Solicita o nome da cidade ao usuário
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", nomecidade1);

//Solicita a população ao usuário
printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);

//Solicita a área ao usuário
printf("Digite a área: \n");
scanf("%f", &area1);

//Solicita o PIB ao usuário
printf("Digite o PIB: \n");
scanf("%f", &pib1);

//Solicita o número de pontos turísticos ao usuário
printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontosturisticos1);


//Solicita os dados da segunda carta
printf("Digite os dados da segunda carta\n");
printf("Digite a letra do Estado: \n");
scanf(" %c", &estado2);

//Solicita o código da carta ao usuário
printf("Digite o código da cidade: \n");
scanf("%s", codigocidade2);
getchar();
//Solicita o nome da cidade ao usuário
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", nomecidade2);

//Solicita a população ao usuário
printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);

//Solicita a área ao usuário
printf("Digite a área: \n");
scanf("%f", &area2);

//Solicita o PIB ao usuário
printf("Digite o PIB: \n");
scanf("%f", &pib2);

//Solicita o número de pontos turísticos ao usuário
printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontosturisticos2);



//Função de Saída dos dados inseridos pelo usuário
//Saida da primeira carta
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);

printf("Código: %s\n", codigocidade1);

printf("Nome da cidade: %s\n", nomecidade1);

printf("População: %d\n", populacao1);

printf("Àrea: %.2f km²\n", area1);

printf("PIB: %.2f Bilhões de reais\n", pib1);

printf("Número de pontos turísticos: %d\n", pontosturisticos1);

//Saída da segunda carta
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);

printf("Código: %s\n", codigocidade2);

printf("Nome da cidade: %s\n", nomecidade2);

printf("População: %d\n", populacao2);

printf("Àrea: %.2f km²\n", area2);

printf("PIB: %.2f Bilhões de reais\n", pib2);

printf("Número de pontos turísticos: %d\n", pontosturisticos2);

return 0;

}