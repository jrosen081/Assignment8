#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("How many integers would you want in the array?\n");
	int input = 0;
	scanf("%d", &input);
	int *array1 = (int *)malloc(sizeof(input) * input);
	int *array2 = (int *)malloc(sizeof(input + 1) * input);
	int *array3 = (int *) malloc(sizeof(input + 1) * input);
	srand(time(NULL));
	for (int i = 0; i < input; i++)
	{
		array1[i] = rand() % 999 + 1;
		array2[i] = array1[i];
	}
	for (int i = 0; i < input; i++)
	{
		for (int j = i + 1; j < input; j++)
		{
			if (array2[i] > array2[j])
			{
				int tmp = array2[j];
				array2[j] = array2[i];
				array2[i] = tmp;
			}
		}
	}
	for ( int i = input - 1; i >= 0; i--)
	{
		array3[input - 1 - i] = array2[i];
	} 
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", array1[i]);
	}
	printf("\n");
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", array2[i]);
	}
	printf("\n");
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", array3[i]);
	}
	free(array1);
	free(array2);
	free(array3);
}
