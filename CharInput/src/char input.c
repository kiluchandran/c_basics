/*
 ============================================================================
 Name        : char.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("Enter a character:");
	scanf("%c",&character);
	printf("Character is %c",character);
	return EXIT_SUCCESS;
}
