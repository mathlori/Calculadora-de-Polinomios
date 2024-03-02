# include <math.h>
# include <stdio.h>
# include <locale.h>
# include "funcoes.h"


void imprimePolinomio(int polinomio[], int tam) {
  
  for (int i = tam - 1; i > 0; i--) { // Impressão de trás para frente, do maior termo para o menor
    if (i == tam - 1 || polinomio[i] < 0) { // Se for o último termo, ou se o termo for menor do que zero
      printf("%dx^%d", polinomio[i], i); // Imprimir apenas o elemento, sem nenhum sinal
    } else (polinomio[i] > 0) { // Se for maior do que zero, imprimir o termo acompanhado de um "+"
      printf("+%dx^%d", polinomio[i], i);
    } 
  } 
  if (polinomio[0] > 0) { // No caso do termo independente
      printf("+%d", polinomio[0]);
    } else {
      printf("%d", polinomio[0]);
    } // Mesmo algoritmo, no entanto, a impressão é realizada sem o x e sem o expoente
}

void lePolinomio(int valores[], int tam) {
  
    printf("\n");
    for (int i = 0; i < tam; i++) {
    
	int v; 
    
    printf("Digite o coeficiente do expoente %d: ", i ); // Lê o valor com o expoente i
    scanf("%d", &v);

    valores[i] = v;
  }
}

int calculaPolinomio(int polinomio[], int tam, int x) {
  float soma = 0;

  for (int i = tam-1; i >= 0; i--) {
    // Soma o coeficiente multiplicado com a potência do x fornecido
    soma += pow(x, i) * polinomio[i]; 
  }
  
  return soma;
}

void somaPolinomios(int polMaior[], int tamMaior, int polmenor[],int tammenor, int res[]) {
  for (int i = 0; i < tammenor; i ++) {
    res[i] = polMaior[i] + polmenor[i]; // Soma o coeficiente dos expoentes que existem nos dois polinômios
  }
  printf("\n");
  for (int i = tammenor; i < tamMaior; i ++) {
    res[i] = polMaior[i]; // Completa a soma com os elementos restantes do polinômio maior
  }
}

void multiplicaPolinomios(int p1[], int tam1, int p2[], int tam2, int res[], int tamR) {

   for (int i = 0; i < tamR; i++) {
     res[i] = 0; // Preenche o vetor do resultado com zeros
   }
   for (int i = tam1 - 1; i >= 0; i--) { // Para cada elemento de um vetor
      for (int j = tam2 - 1; j >= 0; j--) { // Percorre o outro vetor e vai multiplicando cada termo
        int ind = i + j; // Soma os expoentes
        res[ind] += p1[i] * p2[j]; // Adiciona a multiplicação dos termos no expoente proveniente da soma anterior.
  
      }
    }
}
