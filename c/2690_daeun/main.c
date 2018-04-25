#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	int j = (a > b) ? a : b;
	int lcm;

	for (int i = j;;i++)
	{
		if (i%a == 0 && i%b == 0) {
			lcm = i;
			break;
		}
	}

	j = (a < b) ? a : b;
	int gdc = 1;
	for (int i = 1; i <= j; i++)
	{
		if (a%i == 0 && b%i == 0)
			gdc = i;
	}

	printf("%d\n%d", gdc, lcm);

	return 0;
}