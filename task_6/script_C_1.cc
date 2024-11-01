#include <stdio.h>

#ifndef num
#define num 2
#endif

/*define func*/
int count(int a, int b)
{
	int result;
	result = 1;
	/*cycle for exponentation a b times*/
	for ( int i = 0; i < b; i++ )
	{
	result = result*a;
	}
	return result;
}

int main()
{
	/*read some number from console*/
	printf("Enter some number, not very big, please\n");
	int arg; //arg declaration
	scanf("%d", &arg);

	/*printing result*/
	printf("And result is...\n");
	printf("%d  %d  times =   %d  \nEnd of script\n\n", num, arg, count(num, arg));
	return 0;
}
