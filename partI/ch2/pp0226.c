#include <string.h>

/* Determine whether string s is longer than string t */
/* WARNING: This function is buggy */
int	strlonger(char *s, char *t)
{
	return strlen(s) - strlen(t) > 0;
}

int	strlonger_corrected(char *s, char *t)
{
	/* if (strlen(s) > strlen(t))
		return (1);
	return (0); */
	return (strlen(s) > strlen(t));
}

// #############################################################################

#include <stdio.h>

void	test0(void);
void	test1(void);
void	test2(void);
void	test3(void);

int	main(void)
{
	test0();
	test1();
	test2();
	test3();

	return (0);
}

void	test0(void)
{
	char	*s1 = "";
	char	*s2 = "";

	puts("### TEST 0 ###");
	printf("s1\t->\t'%s'\n", s1);
	printf("s2\t->\t'%s'\n", s2);
	printf("res1\t->\t%d\n", strlonger(s1, s2));
	printf("res2\t->\t%d\n", strlonger_corrected(s1, s2));
	putchar('\n');

	return ;
}

void	test1(void)
{
	char	*s1 = "out of the night that covers me";
	char	*s2 = "";

	puts("### TEST 1 ###");
	printf("s1\t->\t'%s'\n", s1);
	printf("s2\t->\t'%s'\n", s2);
	printf("res1\t->\t%d\n", strlonger(s1, s2));
	printf("res2\t->\t%d\n", strlonger_corrected(s1, s2));
	putchar('\n');

	return ;
}

void	test2(void)
{
	char	*s1 = "";
	char	*s2 = "black as the pitch from pole to pole";

	puts("### TEST 2 ###");
	printf("s1\t->\t'%s'\n", s1);
	printf("s2\t->\t'%s'\n", s2);
	printf("res1\t->\t%d\n", strlonger(s1, s2));
	printf("res2\t->\t%d\n", strlonger_corrected(s1, s2));
	putchar('\n');

	return ;
}

void	test3(void)
{
	char	*s1 = "out of the night that covers me";
	char	*s2 = "black as the pitch from pole to pole";

	puts("### TEST 3 ###");
	printf("s1\t->\t'%s'\n", s1);
	printf("s2\t->\t'%s'\n", s2);
	printf("res1\t->\t%d\n", strlonger(s1, s2));
	printf("res2\t->\t%d\n", strlonger_corrected(s1, s2));
	putchar('\n');

	return ;
}