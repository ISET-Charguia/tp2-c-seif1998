/*
 ============================================================================
 Name        : Tp2Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 double a,b,c;
 printf("taper 3 reel");
 scanf("%lf %lf %lf",&a,&b,&c);
 if((a > b)&(a>c))
	 printf("max est %lf",a);
  else
	  if((b > a)&(b>c))
	  	 printf("max est %lf",b);
	  else
	  	  if((c > b)&(c>a))
	  	  	 printf("max est %lf",c);

 if((a < b)&(a<c))
	 printf("min est %lf",a);
  else
	  if((b < a)&(b<c))
	  	 printf("min est %lf",b);
	  else
	  	  if((c < b)&(c<a))
	  	  	 printf("min est %lf",c);
}
