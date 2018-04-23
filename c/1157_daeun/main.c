#include <stdio.h>

int main(void) {
	int num[26] = { 0 }, max = 0, same = 0, data;
	char c;
	while ((c = getchar()) != EOF && c != '\n') {
		if (c <= 'Z') {
			num[c - 65]++;
		}
		else {
			num[c - 97]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max < num[i]) {
			max = num[i];
			data = i;
			same = 0;
		}
		else if (max == num[i]) {
			same = 1;
		}
	}
	if (same == 1) {
		printf("?");
	}
	else {
		printf("%c", data + 65);
	}
}