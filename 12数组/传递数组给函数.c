#include <stdio.h>

double getAverage(int arr[], int size);

int main(int argc, char const *argv[])
{
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(balance, 5);

	printf("平均值是：%f\n", avg);

	return 0;
}

double getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = sum / size;
	return avg;
}
