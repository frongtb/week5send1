#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void calculateP(int, int);
void calculateM(int, int);
int main()
{
	int input_1, input_2;
	scanf("%d\n%d", &input_1, &input_2);
	while (input_1 > 0 && input_2 > 0)
	{
		if (input_1 >= input_2)
		{
			calculateM(input_1, input_2);
			return 0;
		}
		else {
			calculateP(input_1, input_2);
			return 0;
		}

	}

	return 0;
}
void calculateP(int input_1, int input_2)
{
	int ans;
	ans = input_1 + input_2;
	printf("%d", ans);
}
void calculateM(int input_1, int input_2)
{
	int ans;
	ans = input_1 - input_2;
	printf("%d", ans);
}