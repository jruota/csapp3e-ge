int	bis(int x, int m)
{
	return (x | m);
}

int	bic(int x, int m)
{
	return (x & (~m));
}

int or(int x, int y)
{
	return (bis(x, y));
}

int xor(int x, int y)
{
	return (bis(bic(x, y), bic(y, x)));
}

// #############################################################################

#include <stdio.h>

void	test0(void);
void	test1(void);
void	test2(void);
void	test3(void);
void	test4(void);
void	test5(void);
void	test6(void);
void	test7(void);
void	test8(void);
void	test9(void);
void	test10(void);
void	test11(void);
void	test12(void);
void	test13(void);
void	test14(void);
void	test15(void);

int	main(void)
{
	test0();
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	return (0);
}

void	test0(void)
{
	int	x = 0x00;
	int y = 0x00;

	puts("### TEST 0 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test1(void)
{
	int	x = 0x00;
	int y = 0x0F;

	puts("### TEST 1 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test2(void)
{
	int	x = 0x00;
	int y = 0xF0;

	puts("### TEST 2 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test3(void)
{
	int	x = 0x00;
	int y = 0xFF;

	puts("### TEST 3 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test4(void)
{
	int	x = 0x0F;
	int y = 0x00;

	puts("### TEST 4 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test5(void)
{
	int	x = 0x0F;
	int y = 0x0F;

	puts("### TEST 5 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test6(void)
{
	int	x = 0x0F;
	int y = 0xF0;

	puts("### TEST 6 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test7(void)
{
	int	x = 0x0F;
	int y = 0xFF;

	puts("### TEST 7 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test8(void)
{
	int	x = 0xF0;
	int y = 0x00;

	puts("### TEST 8 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test9(void)
{
	int	x = 0xF0;
	int y = 0x0F;

	puts("### TEST 9 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test10(void)
{
	int	x = 0xF0;
	int y = 0xF0;

	puts("### TEST 10 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test11(void)
{
	int	x = 0xF0;
	int y = 0xFF;

	puts("### TEST 11 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test12(void)
{
	int	x = 0xFF;
	int y = 0x00;

	puts("### TEST 12 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test13(void)
{
	int	x = 0xFF;
	int y = 0x0F;

	puts("### TEST 13 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test14(void)
{
	int	x = 0xFF;
	int y = 0xF0;

	puts("### TEST 14 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}

void	test15(void)
{
	int	x = 0xFF;
	int y = 0xFF;

	puts("### TEST 15 ###");
	printf("x\t->\t0x%.2x\ny\t->\t0x%.2x\n", x, y);
	printf("or(x, y)\t->\t0x%.2x\n", or(x, y));
	printf("xor(x, y)\t->\t0x%.2x\n", xor(x, y));
	putchar('\n');

	return ;
}