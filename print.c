#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	FILE *numbers = fopen("numbers.txt", "r");
	int i = 0;
	fscanf(numbers, "%d", &i);
	int sum = 0, counter = 0;
	float arr[i], average = 0, standard = 0;
	for(int j = 0; j < i; j++)
	{
		fscanf(numbers, "%f", &arr[j]);
		average += arr[j];
		counter++;
		
	}
	for (int j = 0; j < i; j++)
	{
		standard += (arr[j] - (average / counter))*(arr[j] - (average / counter));
	}
	standard /= (counter-1);
	standard = sqrt(standard);
	printf("The average of the numbers was %.2f\n", (average / counter));
	printf("The standard deviation is %.2f\n", standard);
	return 0;
}
