#include <stdio.h>
int get_max(int a, int b) {
	return (a > b) ? a : b;
}
int main(void) {
	int n;
	
	scanf("%d", &n);
	int Data[500][500];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) {
			scanf("%d", &Data[i][j]);
		}
	}
	for (int i = n-2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			Data[i][j] += get_max(Data[i + 1][j], Data[i + 1][j + 1]);
		}
	}
	printf("%d", Data[0][0]);

	return 0;
}
