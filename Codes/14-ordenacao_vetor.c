/*
 * Escreva um algoritmo que leia um vetor de 10 números de um vetor lido
 * Considere que na medida em que os números forem lidos, os mesmos deverão ser inseridos na posição correta para que o vetor fique ordenado
 * em ordem crescente
 * Por exemplo, lido o número 5, o vetor fica {5,...,}
 * Lendo o número 2, o vetor fica {2,5,...,}
 * Lendo o número 8, o vetor fica {2,5,8,...,}
 * Deverá ser considerado que o algoritmo pode ler números repetidos
 * No final, o algoritmo deverá mostrar o vetor
*/

#include <stdio.h>

#define tamanho 10

int main ()
{
  float vetor[tamanho] = NULL, leitura;
  int a = 0;

  for (a = 0; a < tamanho; a++)
  {
    printf ("insira um numero: ");
    scanf ("%f", &leitura);

    if (a = 0) vetor[a] = leitura;
    b = 0;

    do{
      if (leitura >= vetor[b]) b++;
      else
      {
        for (c = b; c < a; c++)
        {
          vetor[c]


      vetor[b] = leitura;


    while(b < a);


