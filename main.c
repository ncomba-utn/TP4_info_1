#include <stdio.h>
#include <string.h>

#include "funciones.h"

int main(void){
  int opcion = 1, salida = 1, i = 0;
  char palabra[256] = {0};
  int mayusculas[CANT_LETRAS] = {0}, minusculas[CANT_LETRAS] = {0};

  print_titulo("HISTOGRAFO", 7);

  do{
    printf("Ingrese las palabras a analizar (/fin para finalizar): \n");

    while(salida){
      scanf("%s", palabra);
      if(!strcmp(palabra, "/fin")){
        salida = 0;
        printf("Saliendo del loop\n");
      } else {
        analizar_palabra(palabra, mayusculas, minusculas);
      }
    }

    printf("\n");
    for(i = 0; i < CANT_LETRAS; i++){
      if(mayusculas[i] != 0)
        printf("%c -> %d\n", A_MAY + i, mayusculas[i]);
    }
    for(i = 0; i < CANT_LETRAS; i++){
      if(minusculas[i] != 0)
        printf("%c -> %d\n", A_MIN + i, minusculas[i]);
    }
    printf("\n\n\n");
    printf("Desea analizar otra frase? (0 -> no): ");
    scanf("%d", &opcion);
  } while (opcion);

  return 0;
}
