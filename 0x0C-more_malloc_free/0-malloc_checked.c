<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> f6a2f214e250e8ab97d98694eb56dba5094db0bf
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
<<<<<<< HEAD
 * @b: size of memory to be allocated
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory was available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
=======
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
>>>>>>> f6a2f214e250e8ab97d98694eb56dba5094db0bf
}
