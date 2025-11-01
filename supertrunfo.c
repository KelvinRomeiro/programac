#include <stdio.h>

int main(){
// carta 1
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1, pontos_turisticos1;
  float area1, pib1, densidade1, pib_per_capita1;
  
  // carta 2
char estado2;
char codigo2[5];
char cidade2[50];
int populacao2, pontos_turisticos2;
float area2, pib2, densidade2, pib_per_capita2;
// cadastro das cartas
// dados da carta 1

printf("Carta 1 \n");
printf("Digite o estado (A-H):");
scanf("%c", &estado1);

printf("Digite o codigo da carta: ");
scanf("%s", codigo1);

printf("Digite o nome da cidade:");
scanf(" %[^\n]",cidade1);

printf("Digete a populacao:");
scanf("%d", &populacao1);

printf("Digite a area em (km²):");
scanf("%f", &area1);

printf("Digite o pib:");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos:");
scanf("%d", &pontos_turisticos1);

densidade1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;

// dados da carta 2

printf("Carta 2 \n");
printf("Digite o estado (A-H):");
scanf(" %c", &estado2);

printf("Digite o codigo da carta:");
scanf("%s", codigo2);

printf("Digite o nome da cidade:");
scanf(" %[^\n]",cidade2);

printf("Digete a populacao:");
scanf("%d", &populacao2);

printf("Digite a area em (km²):");
scanf("%f", &area2);

printf("Digite o pib:");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos:");
scanf("%d", &pontos_turisticos2);

densidade2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;
// Dados cadastrados carta 1

printf("Carta 1 \n");
printf("Estado: %c \n",estado1);
printf("Codigo: %s \n",codigo1);
printf("Cidade: %s \n",cidade1);
printf("Populacao: %d \n",populacao1);
printf("Area: %f km² \n",area1);
printf("Pib: %f Bilhoes de Reais \n",pib1);
printf("Pontos Turisticos: %d \n",pontos_turisticos1);
printf("Densidade: %2f hab/km²\n",densidade1);
printf("Per Capita: %2f reais por pessoa\n" ,pib_per_capita1);
// Dados cadastrados carta 2

printf("Carta 2 \n");
printf("Estado: %c \n",estado2);
printf("Codigo: %s \n",codigo2);
printf("Cidade: %s \n",cidade2);
printf("Populacao: %d \n",populacao2);
printf("Area: %f km² \n",area2);
printf("Pib: %f Bilhoes de Reais \n",pib2);
printf("Pontos Turisticos: %d \n",pontos_turisticos2);
printf("Densidade: %2f hab/km²\n",densidade2);
printf("Per Capita: %2f reais por pessoa\n" ,pib_per_capita2);

return 0;

}