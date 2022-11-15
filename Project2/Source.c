/*
 -------------------------------------------------
 -- Projet : Calcul Aire cercle					--
 -- Fichier : Demo22.c							--
 -- Versions : 1.0								--
 -- Date : 13.09.22								--
 -- Autheur : Léo Mendes						--
 -- Description : Calcul de l'aire d'un cercle	--
 -------------------------------------------------
*/

//-- Librairie (standart) --//
#include <stdio.h>
#include <stdint.h>
#include <math.h>
//
#define INPUT 1  

#define INPUT_INI 0
//-- Librairie (Perso) --//
void main()
{
	int Val = 0;
	int Val0 = INPUT_INI;
	int ValOutput = 0;

	while (1)
	{
		scanf_s("%d%*c", &Val);
		if ((Val > Val0)||((Val+Val0) > 1))
		{
			ValOutput = 1;
		}
		else
		{
			ValOutput = 0;
		}

		Val0 = Val;
		Val = 0;
		delay(3);
		printf_s("%d", ValOutput);

	}
}