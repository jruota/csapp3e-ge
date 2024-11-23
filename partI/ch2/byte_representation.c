#include <stdio.h>

typedef unsigned char *byte_pointer;

void	test_show_bytes(int val);
void	show_bytes(byte_pointer start, size_t len);
void	show_int(int x);
void	show_float(float x);
void	show_pointer(void *x);
void	show_string(char *x, size_t len);

int	main(void)
{
	int	val = 12345;

	printf(" %d\n", val);
	printf(" %.1f\n", (float) val);
	printf(" %p\n", &val);
	test_show_bytes(val);
	putchar('\n');
	printf(" %s\n", "12345");;
	show_string("12345", 6);
	return (0);
}

void	test_show_bytes(int val)
{
	int		ival = val;
	float	fval = (float) ival;
	int		*pval = &ival;

	show_int(ival);
	show_float(fval);
	show_pointer(pval);
	return ;
}

void	show_bytes(byte_pointer start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		printf(" %.2x", start[i]);
		++i;
	}
	putchar('\n');
	return ;
}

void	show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof (int));
	return ;
}

void	show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof (float));
	return ;
}

void	show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof (void *));
	return ;
}

void	show_string(char *x, size_t len)
{
	show_bytes((byte_pointer) x, len);
	return ;
}