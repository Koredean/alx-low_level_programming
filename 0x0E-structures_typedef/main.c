#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX School students
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "jack", 3.5, "benad");
	printf("My name is %s, anf I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return(0);
}
