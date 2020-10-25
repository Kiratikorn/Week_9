#include<stdio.h>
int main()
{
	int x[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &x[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		if (x[i] % 2 == 0 && x[i + 2] % 2 == 0)
		{
			printf("%d ", x[i + 1]);
		}
	}
	return 0;
}