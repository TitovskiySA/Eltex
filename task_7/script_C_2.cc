#include <stdio.h>

#ifndef num
#define num 2
#endif

/*define func*/
int* countp(int a, int *p_b)
{	
        int res, b;
	res = 1;
	
        /*cycle for exponentation a b times*/
        for ( int i = 0; i < *p_b; i++ )
        {
        res = res * a;
        }
	int *p_res;
	p_res = &res;
        return p_res;
}

int main()
{
	/*read some number from console*/
	printf("Enter some number, not very big, please\n");
	int arg, *parg; //arg, *parg declaration
	scanf("%d", &arg);
	parg = &arg;
	printf("*parg(pointer on arg) = %p\n", parg);

	/*counting result*/
	int *result = countp(num, parg);

	/*printing result*/
	printf("contf(pointer on result of function) = %p\n", result);
	printf("And result is...");
	printf("%d  %d  times =   %d  \nEnd of script...\n\n", num, arg, *result);
	return 0;
}
