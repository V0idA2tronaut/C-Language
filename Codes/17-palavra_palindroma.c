/*
 * Uma palavra é palíndroma se ela não se altera quando lida da direita para a esquerda
 * Por exemplo, "raiar" é uma palavra palíndroma. Outro exemplo é a palavra "dada"
 * Escreva um programa que verifique se uma palavra dada é palíndroma
 * Considere o tamanho máximo da palavra em 15 caracteres
*/

#include <stdio.h>

#define tamanho 15

int main ()
{
  char string[tamanho];
  char *stringPtr;
  int a, b;

  printf ("digite uma palavra: ");
  scanf ("%15s", &string);
  stringPtr = &string[0];

  for (a = 0, b = ; a < ; a++, b--)
  {
    if (string[a] != string[b])
    {
      printf (" diferenca encontrada\n nao eh palindroma\n");
      break;
    }
  }

  return (0);
}
