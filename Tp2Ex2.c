/*
 ============================================================================
 Name        : Tp2Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	 double num;
	 printf("taper un reel");
	 scanf("%lf",&num);
	 if(num < 0)
	 printf("la valeur absolue de %lf est %lf",num,num*-1);
	 else printf("la valeur absolue de %lf est %lf",num,num);
}
