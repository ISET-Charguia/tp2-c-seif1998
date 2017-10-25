/*
 ============================================================================
 Name        : Tp2Ex4.c
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
	printf("taper une année");
	scanf("%d",&ann);
	if(ann % 400 == 0)
		printf("%d est bissextile",ann);
	else
		if((ann % 4 ==0 )&(ann % 100 !=0))
			printf("%d est bissextile",ann);
		else printf("%d n'est pas bissextile",ann);

}
