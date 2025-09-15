#include <stdio.h>
//jogo Super Trufo
int main() {
    
    // variaveis da primeira carta
    
    char codigo[5]; // ex: A01
    char pais [40];
    int populacao;
    float area;
    float PIB;
    int pontosT; //significa Pontos turísticos

    // segunda carta
   
    char codigo2[5]; // ex: A01
    char pais2[40];
    int populacao2;
    float area2;
    float PIB2;
    int pontosT2;

    //aqui vamos começar o cadastro das cartas
    printf(" Super Trunfo Países \n");
    printf("Começaremos cadastrando as cartas para seu jogo.\n");
    printf("\n--- Vamos começar pela Carta 1 ---\n");


    printf("Crie um código utilizando uma letra de A a H e um número de 01 a 04: ");
    scanf(" %3s", codigo);

    printf("Insira o nome do País: ");
    scanf(" %s", pais); // 

    printf("População do País: ");
    scanf("%d", &populacao);

    printf("Área do País em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosT);

    //vamos cadastrar a segunda carta
    
    printf("\n--- Agora forneça as informações da segunda carta: ---\n");


    printf("Crie um código utilizando uma letra de A a H e um número de 01 a 04: ");
    scanf(" %3s", codigo2);

    printf("Insira o nome do País: ");
    scanf(" %s", pais2); 

    printf("População do País: ");
    scanf("%d", &populacao2);

    printf("Área do País em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosT2);

    // calculo de densidade populacional
    float densidade = populacao / area;
    float densidade2 = populacao2 / area2; 
    
    // calculo de PIB per capita
    float PIBpc = (PIB * 1000000000) / populacao;  // exemplo 240 bilhões, tenho que encontrar o valor completo para depois dividir pela população
    float PIBpc2 = (PIB2 * 1000000000) / populacao2;

    //Agora vamos ver o Super poder
    float superpoder = (float) populacao + area + PIB + (float) pontosT + PIBpc - densidade;
    float superpoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosT2 + PIBpc2 - densidade2;


    // Exibindo o que foi cadastrado
    printf("\n--- Carta 1 cadastrada ---\n");
    printf("Código: %s\n", codigo);
    printf("País: %s\n", pais);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f mil\n", PIB); // não estou usando Bilhões, pois estou fazendo exemplo com as cidades pequenas da minha região
    printf("Pontos turísticos: %d\n", pontosT);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", PIBpc);
    printf("Super Poder: %.3f\n", superpoder);

    //informações da segunda carta

      printf("\n--- Carta 2 cadastrada ---\n");
    printf("Código: %s\n", codigo2);
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f mil\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosT2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", PIBpc2);
    printf("Super Poder: %.3f\n", superpoder2);

    // comparações do atributos das cartas
  int escolhadacomparacao;
printf("--- Opções de comparação --- \n");
printf("Populção = 1 \n");
printf("Área = 2 \n");
printf("PIB = 3 \n");
printf("Pontos Turísticos = 4 \n");
printf("Densidade Populacional = 5 \n");
printf("PIB per capita = 6 \n");
printf("Super Poder = 7 \n");
printf("Escolha o atributo a ser comparado: ");
scanf("%d", &escolhadacomparacao);

  switch (escolhadacomparacao)
{
 case 1:
  printf("População da Carta 1 %d vs Carta 2 %d :  ", populacao , populacao2);
   if (populacao > populacao2){
   printf("Carta 1 vence!! \n");
   } else if ( populacao == populacao2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
  case 2:
  printf("Área da Carta 1  %.2f vs Carta 2 %.2f :  ", area , area2);
   if (area > area2){
   printf("Carta 1 vence!! \n");
   } else if ( area == area2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
  case 3:
  printf("PIB da Carta 1 %.2f vs Carta 2 %.2f \n", PIB , PIB2);
   if (PIB > PIB2){
   printf("Carta 1 vence!! \n");
   } else if ( PIB == PIB2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
   case 4:
  printf("Quantidades de Pontos Turísticos da Carta 1  %d vs Carta 2 %d :  ", pontosT , pontosT2);
   if (pontosT > pontosT2){
   printf("Carta 1 vence!! \n");
   } else if ( pontosT == pontosT2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
   case 5:
  printf("Densidade Populacional da Carta 1  %.2f vs Carta 2 %.2f :  ", densidade , densidade2);
   if (densidade < densidade2){
   printf("Carta 1 vence!! \n");
   } else if ( densidade == densidade2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
   case 6:
  printf("PIB per Capita da Carta 1  %.2f vs Carta 2 %.2f :  ", PIBpc, PIBpc2);
   if (PIBpc > PIBpc2){
   printf("Carta 1 vence!! \n");
   } else if ( PIBpc == PIBpc2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;
   case 7:
  printf("Super Poder da Carta 1  %.3f vs Carta 2 %.3f :  ", superpoder , superpoder2);
   if (superpoder > superpoder2){
   printf("Carta 1 vence!! \n");
   } else if ( superpoder == superpoder2){
    printf("Empate !! \n");
   } else 
    printf("Carta 2 vence !! \n");
  break;

 default:
 printf("Opção inválida \n");
  break;
}
  
return 0;
}
