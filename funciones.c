/**
	\file    funciones.c
	\brief   funciones.c contiene tanto las funciones print_titulo y analizar_palabra
	\author  COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date    18/06/2026
	\version 9.12.18
*/


//--------------
//-- Includes --
//--------------
#include <stdio.h>
#include <string.h>
#include "funciones.h"


//---------------
//-- Funciones --
//---------------

/**
	\fn     print_titulo
	\brief  Funcion utilizada para imprimir titulo
          en pantalla de manera compacta
	\author COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date   18/06/2026
	\param  titulo: string que se desea imprimir
	\param  margen: numero de caracteres utilizados en el margen
*/
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

/**
	\fn     analizar_palabra
	\brief  Esta funcion analiza las letras en una palabra dada y devuelve las mayusculas
          y minusculas en 2 vectores.
	\author COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date   18/06/2026
  \param  palabra: string con la palabra a analizar
  \param  mayusculas: vector de devolucion con la cantidad de veces que aparece cada letra,
          donde el espacio n corresponde a la letra con numero ascii (A + n)
  \param  minusculas: vector de devolucion con la cantidad de veces que aparece cada letra,
          donde el espacio n corresponde a la letra con numero ascii (a + n)
*/
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
