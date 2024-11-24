/*
 * The least significant byte set to all ones, and all other bytes of x left
 * unchanged.
 */

#include <stdio.h>

int		book_version(unsigned int x);
int		my_version(unsigned int x);
void	show_int_as_bytes(unsigned int x);

int	main(void)
{
	unsigned int	x = 0x87654321;

	printf("Value '0x%x' [%u] masked ...\n", x, x);
	printf("\t... book expression:\t0x%x\n", book_version(x));
	printf("\t... book expression:\t0x");
	show_int_as_bytes(book_version(x));
	putchar('\n');
	printf("\t... my expression:\t0x%x\n", my_version(x));
	printf("\t... my expression:\t0x");
	show_int_as_bytes(my_version(x));
	putchar('\n');

	return (0);
}

int	book_version(unsigned int x)
{
	return (x ^ (~0xff));
}

int	my_version(unsigned int x)
{
	return ((x & 0xff) | ((~x) & (~0xff)));
}

void	show_int_as_bytes(unsigned int x)
{
	unsigned char	*byte_pointer;
	size_t			i;

	byte_pointer = (unsigned char *) &x;
	i = 0;
	while (i < sizeof (unsigned int))
	{
		printf(" %.2x", *byte_pointer);
		++i;
		++byte_pointer;
	}
	return ;
}