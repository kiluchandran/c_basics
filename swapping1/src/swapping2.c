/*
 ============================================================================
 Name        : swapping2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=20,b=30;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d b:%d",a,b);
	return EXIT_SUCCESS;
}
