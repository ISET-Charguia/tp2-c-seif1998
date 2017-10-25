/*
 ============================================================================
 Name        : Tp2Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char car;
	printf("taper un caracter");
	scanf("%c",&car);
	if((car >='A')&(car <='Z'))
		printf("%c  est une lettre majuscule",car);
	else
		if((car >='a')&(car <='z'))
			printf("%c  est une lettre minuscule,",car);
		else
			if((car >='0')&(car <='9'))
				printf("%c chiffre",car);
				else printf("%c c'est un carecter special",car);

}
