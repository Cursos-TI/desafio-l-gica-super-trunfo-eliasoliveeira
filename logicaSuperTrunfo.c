#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

      // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[15];
  char codigoDaCarta1[4];
  char nomeDaCidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontosTur1;
  float densidadePopulacional1;
  float pibPerCapita1;

    char estado2[15];
  char codigoDaCarta2[4];
  char nomeDaCidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontosTur2;
  float densidadePopulacional2;
  float pibPerCapita2;


  // Área para entrada de dados
  printf("Digite o estado: ");
  scanf("%s", &estado1);

  printf("\nDigite o código da carta: ");
  scanf("%s", &codigoDaCarta1);

  printf("\nDigite o nome da cidade: ");
  scanf("%s", &nomeDaCidade1);

  printf("\nDigite a população: ");
  scanf("%d", &populacao1);

  printf("\nDigite a area: ");
  scanf("%f", &area1);

  printf("\nDigite o PIB: ");
  scanf("%f", &pib1);

  printf("\nDigite o número de pontos turísticos: ");
  scanf("%d", &pontosTur1);

  densidadePopulacional1 = populacao1/area1;
  pibPerCapita1 = pib1/populacao1;

  // Área para exibição dos dados da cidade
  printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f", estado1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, pontosTur1, densidadePopulacional1, pibPerCapita1);

  // Área para entrada de dados
  printf("\nDigite o estado: ");
  scanf("%s", &estado2);

  printf("\nDigite o código da carta: ");
  scanf("%s", &codigoDaCarta2);

  printf("\nDigite o nome da cidade: ");
  scanf("%s", &nomeDaCidade2);

  printf("\nDigite a população: ");
  scanf("%d", &populacao2);

  printf("\nDigite a area: ");
  scanf("%f", &area2);

  printf("\nDigite o PIB: ");
  scanf("%f", &pib2);

  printf("\nDigite o número de pontos turísticos: ");
  scanf("%d", &pontosTur2);

  densidadePopulacional2 = populacao2/area2;
  pibPerCapita2 = pib2/populacao2;

  // Área para exibição dos dados da cidade
  printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n", estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTur2, densidadePopulacional2, pibPerCapita2);

  int escolha1, escolha2;
  int resultado1, resultado2;

  printf("Escolha um atributo para comparar:\n");
  printf("1-População\n");
  printf("2-Área\n");
  printf("3-PIB\n");
  printf("4-Número de pontos turísticos\n");
  printf("5-Densidade demográfica\n");
  scanf("%d", &escolha1);

  switch (escolha1)
  {
  case 1:
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
      case 2:
    resultado1 = area1 > area2 ? 1 : 0;
    break;
      case 3:
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
      case 4:
    resultado1 = pontosTur1 > pontosTur2 ? 1 : 0;
    break;
      case 5:
    resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
    break;
  
  default:
  printf("Escolha inválida");
    break;
  }

  printf("Escolha outro atributo para comparar:\n");
  printf("1-População\n");
  printf("2-Área\n");
  printf("3-PIB\n");
  printf("4-Número de pontos turísticos\n");
  printf("5-Densidade demográfica\n");
  scanf("%d", &escolha2);

  if (escolha1 != escolha2)
  {
  switch (escolha2)
  {
  case 1:
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
      case 2:
    resultado2 = area1 > area2 ? 1 : 0;
    break;
      case 3:
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
      case 4:
    resultado2 = pontosTur1 > pontosTur2 ? 1 : 0;
    break;
      case 5:
    resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
    break;
  
  default:
  printf("Escolha inválida");
    break;
  }
  }else{
    printf("Opção inválida");
  }
  
  if (resultado1 == 1 && resultado2 == 1){
    printf("Carta 1 venceu!");
  }else if(resultado1 != resultado2){
    printf("Empate!");
  }else{
    printf("Carta 2 venceu!");
  }

  /*
  switch (escolha)
  {
  case 1:
    if(populacao1 > populacao2){

      printf("\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2, nomeDaCidade2);
  }
    break;
    case 2:
    if(area1 > area2){

      printf("\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, area1, nomeDaCidade2, area2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, area1, nomeDaCidade2, area2, nomeDaCidade2);
  }
    break;
        case 3:
    if(pib1 > pib2){

      printf("\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, pib1, nomeDaCidade2, pib2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, pib1, nomeDaCidade2, pib2, nomeDaCidade2);
  }
    break;
            case 4:
    if(pontosTur1 > pontosTur2){

      printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, pontosTur1, nomeDaCidade2, pontosTur2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, pontosTur1, nomeDaCidade2, pontosTur2, nomeDaCidade2);
  }
    break;
    case 5:
    if(densidadePopulacional1 > densidadePopulacional2){

      printf("\nComparação de cartas (Atributo: Densidade demográfica):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: Densidade demográfica):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2, nomeDaCidade2);
  }
    break;
    
  
  default:
  printf("Opção inválida");
    break;
  }

  if(populacao1 > populacao2){

      printf("\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 %s venceu!", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2, nomeDaCidade1);
  } else{
          printf("\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 %s venceu!", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2, nomeDaCidade2);
  }
*/

    return 0;
}
