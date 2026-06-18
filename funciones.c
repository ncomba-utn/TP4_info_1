#include <stdio.h>
#include <string.h>
#include "funciones.h"

void print_titulo(char titulo[], char margen){
int largo_titulo = strlen(titulo);

  for (int i = 0; i < (margen * 2)+ 2 + largo_titulo; i++){
    printf("-");
  }
  printf("\n");

  for (int i = 0; i < (margen * 2); i++){
    printf("-");
    if (i == margen - 1){
      printf(" %s ", titulo);
    }
  }
  printf("\n");

  for (int i = 0; i < (margen * 2)+ 2 + largo_titulo; i++){
    printf("-");
  }
  printf("\n");
}

void analizar_palabra(char * palabra, int * mayusculas, int * minusculas){
  int i = 0, j = 0;

  for(i = 0; i < CANT_LETRAS; i++){
    j = 0;
    while(palabra[j] != '\0'){
      if(palabra[j] == A_MAY + i){
        mayusculas[j]++;
      }
      j++;
    }
  }

  for(i = 0; i < CANT_LETRAS; i++){
    j = 0;
    while(palabra[j] != '\0'){
      if(palabra[j] == A_MIN + i){
        minusculas[j]++;
      }
      j++;
    }
  }
}
