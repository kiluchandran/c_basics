/*
 ============================================================================
 Name        : simpleinterest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n;
	float SI;
	printf("Enter P:");
	scanf("%d",&P);
	printf("Enter R:");
	scanf("%f",&R);
	printf("Enter n:");
	scanf("%f",&n);
	SI =(P*R*n)/100;
	printf("SI is %f:",SI);



	return EXIT_SUCCESS;
}
