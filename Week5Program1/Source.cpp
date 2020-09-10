#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
bool a[32],pre[32];
int main()
{
	int sum = 0, n, k;
	scanf("%d %d", &k, &n);
	for(int i = 1; i <= n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (!a[j])
			{
				a[j] = 1;
				break;
			}
			else
			{
				a[j] = 0;
			}
		}
		for (int j = 0; j < k; j++)
		{
			if (a[j] != pre[j])
			{
				pre[j] = a[j];
				sum++;
			}
		}
	}
	printf("%d", sum);
}