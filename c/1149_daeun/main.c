#include <stdio.h>

int get_min(int a, int b) {
	return (a < b) ? a : b;
}

int main(void) {
	int dis[1000][3];
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &dis[i][0], &dis[i][1], &dis[i][2]);
	}

	for (int i = 1; i < N;i++) {
		dis[i][0] += get_min(dis[i - 1][1], dis[i - 1][2]);
		dis[i][1] += get_min(dis[i - 1][0], dis[i - 1][2]);
		dis[i][2] += get_min(dis[i - 1][0], dis[i - 1][1]);
	}
	int result = get_min(dis[N-1][0], dis[N-1][1]);
	result = get_min(result, dis[N-1][2]);

	printf("%d", result);
	return 0;
}