#include <stdio.h>

int main() {
	char input[13];
	int result = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%s", &input);
		for (int j = 0; j < 8; j++)
		{	
			if (input[j] == 'F') {
				if ((i % 2) == (j % 2)) result++;
			}
		}
	}
	printf("%d", result);

	return 0;
}