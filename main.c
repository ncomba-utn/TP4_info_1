/**
	\file    main.c
	\brief   Funcion principal del histografo
	\author  COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date    18/06/2026
	\version V3.14.15

	Compilación:  gcc -c main.c -o main.o -Wall
	              gcc -c funciones.c -o funciones.o -Wall
	Linkeo:       gcc main.o funciones.o -o ejecutable -Wall
	Ejecución:    ./ejecutable
*/

//--------------
//-- Includes --
//--------------
#include <stdio.h>
#include <string.h>

#include "funciones.h"


/**
	\fn      int main
  \brief   Ciclo principal del programa del histografo
	\author  COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date    18/06/2026
	\return  Devuelve 0 si finaliza la secuencia del programa
*/
int main(void){
  int opcion = 1, salida = 1, i = 0;
  char palabra[256] = {0};
  int mayusculas[CANT_LETRAS] = {0}, minusculas[CANT_LETRAS] = {0};

  print_titulo("HISTOGRAFO", 7);
  do{
    printf("\n\nIngrese las palabras a analizar (/fin para finalizar): \n");

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
