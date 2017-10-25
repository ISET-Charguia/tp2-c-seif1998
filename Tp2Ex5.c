/*
 ============================================================================
 Name        : Tp2Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("taper un entier de 3 chiffre");
    scanf("%d",&num);
	printf("centaine %d dizaine  %d d’unité %d",num / 100,num %100 / 10,num %100 %10);
}
