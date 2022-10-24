#include <stdio.h>

void ex01() {

  /* Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida,
  escreva a área do mesmo. Área = (Base * Altura) / 2 */

  float base, altura, area;

  printf("Valor da base: ");
  scanf("%f", &base);

  printf("\nValor da altura: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("\nA area C %.2f cm", area);
};

void ex02() {
  /* O preço de um automóvel é calculado pela soma do preço de fábrica com o
preço dos impostos (45% do preço de fábrica) e a percentagem do revendedor (28%
do preço de fábrica). Faça um algoritmo que leia o nome do automóvel e o preço
de fábrica e imprima o nome do automóvel e o preço final. */

  float precoCarro, fabrica, imposto;
  char nomeCarro[100] = {};

  printf("Nome do carro: ");
  scanf("%s", nomeCarro);

  printf("\nPreço na fabrica: R$ ");
  scanf("%f", &fabrica);

  imposto = fabrica * 0.45;
  precoCarro = fabrica + imposto;

  printf("\nNome do carro: %s", nomeCarro);
  printf("\nPreço final: R$ %.2f", precoCarro);
};

void ex03() {
  /*
  Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e
calcule a média destes, e em seguida apresente esta média e caso esta seja maior
e igual que 30 graus escreva “temperatura acima da média, calor”, caso esta
média seja inferior ou igual a 15 graus “temperatura a baixo da média, frio “ e
se esta estiver no intervalo entre estes dois valores, “temperatura mediana,
temperatura agradável” */

  int i;
  float temperaturas[5] = {}, soma = 0.0, media;
  size_t qnt = sizeof(temperaturas) / sizeof(int);

  for (i = 0; i < 5; i++) {
    printf("Digite uma temperatura: ");
    scanf("%f", &temperaturas[i]);

    soma += temperaturas[i];
  };
  media = soma / qnt;
  printf("\n\nMedia final: %.1f °C\n", media);

  if (media >= 30.0) {
    printf("Temperatura acima da media, Calor");
  } else if (media <= 15.0) {
    printf("Temperatura abaixo da media, Frio");
  } else if (media > 15.0 && media < 30.0) {
    printf("Temperatura mediana, Agradavel");
  }
};

void ex04() {
	/* Faça um algoritmo que leia 3 números inteiros e imprima o menor deles. */
	int numeros[3] = {}, i, min;
	
	for(i = 0; i < 3; i++){
		printf("\nDigite um numero: ");
		scanf("%i", &numeros[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++){
		if(numeros[i] <= min){
			if(numeros[2] == 0){
				min = numeros[(i-1)];
			}
			min = numeros[i];
		}
		printf("%i ", numeros[i]);
	}
	printf("\n\nMenor numero: %i\n", min);
};

void ex05() {
/*
Faça um programa que imprima os elementos de uma PA e o somatório da mesma dados :
primeiro termo , numero de termos e razão.
*/
	int i, atual, max, razao, soma = 0;
	
	printf("Digite uma razao: ");
	scanf("%i", &razao);
	
	printf("\nQuantidade de PA: ");
	scanf("%i", &max);
	
	for(i=0; i <= max - 1; i++){
		if(i <= 0){
			atual = i + razao;
			printf("%i\n", atual);
		}
		else{
			atual += razao;
			printf("%i\n", atual);
		}
		soma +=atual;
	}
	printf("\nSoma: %i\n", soma);
	
};

int main(void) {

	// ex01();
	// ex02();
	// ex03();
	// ex04();
	ex05();

  return 0;
}