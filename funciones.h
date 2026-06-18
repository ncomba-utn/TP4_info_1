/**
	\file    funciones.h
	\brief   Contiene los encabezados de las funciones definidas en funciones.c
	\author  COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date    18/06/2026
	\version 6.67.7
*/


#ifndef FUNCIONES_H
#define FUNCIONES_H

//-------------
//-- Defines --
//-------------
#define A_MAY 65
#define A_MIN 97
#define CANT_LETRAS 26

//--------------
//-- Includes --
//--------------
#include <stdio.h>
#include <string.h>

//----------------
//-- Prototipos --
//----------------

/**
	\fn     print_titulo
	\brief  Funcion utilizada para imprimir titulo
          en pantalla de manera compacta
	\author COMBA, Nicolas (ncomba@frba.utn.edu.ar)
	\date   18/06/2026
	\param  titulo: string que se desea imprimir
	\param  margen: numero de caracteres utilizados en el margen
*/
void print_titulo(char titulo[], char margen);

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
void analizar_palabra(char * palabra, int * mayusculas, int * minusculas);

#endif
