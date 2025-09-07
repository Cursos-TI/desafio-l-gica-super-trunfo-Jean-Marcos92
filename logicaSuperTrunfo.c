#include <stdio.h>
//jogo Super Trufo
int main() {
    
    // variaveis da primeira carta
    char estado[40]; // estado onde está localizado a cidade
    char codigo[5]; // ex: A01
    char cidade[40];
    int populacao;
    float area;
    float PIB;
    int pontosT; //significa Pontos turísticos

    // segunda carta
    char estado2[40]; // estado onde está localizado a cidade
    char codigo2[5]; // ex: A01
    char cidade2[40];
    int populacao2;
    float area2;
    float PIB2;
    int pontosT2;

    //aqui vamos começar o cadastro das cartas
    printf("Olá, bem-vindo ao jogo Super Trunfo.\n");
    printf("Começaremos cadastrando as cartas para seu jogo.\n");
    printf("\n--- Vamos começar pela Carta 1 ---\n");


    printf("Estado onde está localizado a cidade: ");
    scanf(" %s", estado); // 

    printf("Crie um código utilizando uma letra de A a H e um número de 01 a 04: ");
    scanf(" %3s", codigo);

    printf("Insira o nome da cidade: ");
    scanf(" %s", cidade); // 

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Área da cidade em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosT);

    //vamos cadastrar a segunda carta
    
    printf("\n--- Agora forneça as informações da segunda carta: ---\n");

    printf("Estado onde está localizado a cidade: ");
    scanf(" %s", estado2); 

    printf("Crie um código utilizando uma letra de A a H e um número de 01 a 04: ");
    scanf(" %3s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf(" %s", cidade2); 

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosT2);

    // calculo de densidade populacional
    float densidade = populacao / area;
    float densidade2 = populacao2 / area2; 
    
    // calculo de PIB per capita
    float PIBpc = (PIB * 1000) / populacao;
    float PIBpc2 = (PIB2 * 1000) / populacao2;

    //Agora vamos ver o Super poder
    float superpoder = (float) populacao + area + PIB + (float) pontosT + PIBpc - densidade;
    float superpoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosT2 + PIBpc2 - densidade2;


    // Exibindo o que foi cadastrado
    printf("\n--- Carta 1 cadastrada ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f mil\n", PIB); // não estou usando Bilhões, pois estou fazendo exemplo com as cidades pequenas da minha região
    printf("Pontos turísticos: %d\n", pontosT);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", PIBpc);
    printf("Super Poder: %.3f\n", superpoder);

    //informações da segunda carta

      printf("\n--- Carta 2 cadastrada ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f mil\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosT2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", PIBpc2);
    printf("Super Poder: %.3f\n", superpoder2);

    // comparações do atributos das cartas
  printf("Vamos comparar a população: \n");
  if (populacao > populacao2){
    printf("Carta 1 vence: População %d habitantes\n", populacao);
  }else {
    printf("Carta 2 vence: População %d habitantes\n", populacao2);
  }
  // comparação do PIB
  printf("Comparação do PIB: \n");
  if (PIB > PIB2){
    printf("Carta 1 vence: PIB de %.2f\n ", PIB);
  }else {
    printf("Carta 2 vence: PIB de %.2f\n ", PIB2);
  }
  //comparação da área
  printf("Comparação das áreas: \n");
  if (area > area2){
    printf("Carta 1 vence: Área de %.2f km²", area);
  } else{
    printf("Carta 2 vence: Área de %.2f km²", area2);
  }

  
return 0;
}
