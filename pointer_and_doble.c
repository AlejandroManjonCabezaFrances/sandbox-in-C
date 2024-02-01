#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// void	change_valor(int *a)
// {
// 	*a = 6;
// }

// int main()
// {
// 	int a;

// 	a = 2;
// 	change_valor(&a);
// 	printf("a = %d\n", a);
// 	return (0);
// }

void	change_valor(char **str)
{
	*str = malloc(5);

	*str = "hola";
}

int main()
{
	char *str;

	str = malloc(3);

	change_valor(&str);	// necesitas subir en ** para guardarlo
	printf("str = %s\n", str);	// despúes de la función
	return (0);
}