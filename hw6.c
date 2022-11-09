#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

void main()
{
	int arr[5] = { 0, };
	int odd[5] = { 0, };
	int even[5] = { 0, };

	int te = 0, mp = 0, p = 0;

	printf("Please input five integers : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);

	}

	while (p < 5)
	{
		if ((arr[p] % 2) == 1)
		{
			odd[te] = arr[p];
			te++;
		}
		else
		{
			even[mp] = arr[p];
			mp++;
		}
		p++;
	}
	printf("\n \n Odd Numbers : ");
	for (int i = 0; i < 5; i++)
	{
		if (odd[i] != 0)
			printf("%d", odd[i]);
	}

	printf("\n Even Numbers : ");
	for(int i =0; i<5; i++)
	{
		if (even[i] != 0)
			printf("%d", even[i]);
	}
	return 0;
}