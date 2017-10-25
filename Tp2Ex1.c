/*
 ============================================================================
 Name        : Tp2Ex1.c
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
printf("taper un entier\n");
scanf("%d",&num);
if(num % 3==0)
	printf("%d est devisible par 3",num);
else printf("%d est n'est pas devisible par 3",num);
}
