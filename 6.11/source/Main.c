#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37},b=0;

	puts("Data items in original order");

	for (size_t i = 0;i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	for (unsigned int pass = 1;pass < SIZE; ++pass)
	{
		for (size_t i = 0;i < (SIZE - pass);++i)
		{
			if (a[i]>a[i+1])
			{
				int hold = a[i];
				a[i]=a[i + 1];
				a[i + 1] = hold;
			}
		
		}		
		for (size_t j=SIZE-1;j > 0 ;--j)
		{
			if (a[j] > a[j - 1])
			{
				b ++;
			}
			else
			{
				b = 0;
				break;
			}
		}
		if (b == 9)
			break;
	}



	puts("\nData items in ascending order");
	for (size_t i = 0;i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	puts("");

	system("pause");
	return 0;
}