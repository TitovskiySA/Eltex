#include <stdio.h>
#include <ctype.h>
#include "Libs/add.h"
#include "Libs/subtraction.h"
#include "Libs/multiply.h"
#include "Libs/divide.h"

int main()
{
int exitcode;
exitcode = 1;
while (exitcode != 0)
{
        /*read numbers from colsole*/
	printf("Enter to numbers for calculate\n");
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	/*ask user what action user wants*/
	int chosen;
	printf("Choose action:\n1. add\n2. subtraction\n3. multiply\n4. divide\n0. Exit\n");
	scanf("%d", &chosen);
        switch (chosen)
        {
        case 1:
              printf("%d + %d = %d\n", num1, num2, add(num1, num2));
              break;
        case 2:
              printf("%d - %d = %d\n", num1, num2, subtraction(num1, num2));
              break;
        case 3:
              printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
              break;
        case 4:
              printf("%d / %d = %f\n", num1, num2, divide(num1, num2));
              break;
	case 0:
	      exitcode = 0;
	      break;
        default:
              printf("Entered something another, not 1-4\n");
              break;
	}
}
	printf("End of script\n");
	return 0;
}
