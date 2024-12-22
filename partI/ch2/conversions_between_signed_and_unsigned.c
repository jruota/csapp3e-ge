#include <stdio.h>

int	main(void)
{
	unsigned	u = 4294967295;	/* UMax_32 */
	int			tu = (int) u;

	printf("u = %u, tu = %d\n", u, tu);
	return (0);
}