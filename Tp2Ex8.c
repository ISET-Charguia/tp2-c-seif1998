/*
 ============================================================================
 Name        : Tp2Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ann;
	double mon;
	printf("taper le nombre d’années de dépôt et la montant déposé ");
	scanf("%d %lf",&ann,&mon);
	if(ann > 5)
		printf("taux est 0.095");
	else if((ann> 3)&(ann<=5))
		printf("taux est 0.085");
	else if((ann> 1)&(ann<=3))
		printf("taux est 0.065");
	else if(ann <= 1)
		printf("taux est 0.058");

}
