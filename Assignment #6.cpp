/*Ezigbo Ugochukwu, 10/1/2020, This program computes the quotient and remainder of two positive integers*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
	int a,b,q,r;
	float ratio;
	
	/*Get input data*/
	printf("Enter two positive integers");
	scanf("%d %d",&a,&b);
	
	/*Error Checking*/
	if(!(a>0 && b>0))
	{
		printf("Inalid input. ");
		system("pause");
		exit(1);
	}
	
	/*Calculate*/
	q=a/b;
	ratio=1.0*a/b;
	r=a%b;
	
	/*Display results*/
	printf("The integer quotient of %d divided by %d is %d. The remainder is %d. The ratio is %f. /n", a, b, q, r, ratio);
	
	/*exit program*/
	return 0;
}

/*Enter two positive integers12 8
The integer quotient of 12 divided by 8 is 1. The remainder is 4. The ratio is 1.500000. /n
Enter two positive integers-3 1
Inalid input. Press any key to continue . . .*/
