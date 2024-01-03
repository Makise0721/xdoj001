#include <stdio.h>
int main() {
	int m, n, a, b[100] = {0}, i, j, p;
	scanf("%d %d %d", &m, &n, &a);
	b[0] = m;
	b[1] = n;
	for (i = 2, j = 2; i < a; i++, j++) {
		p = b[i - 2] * b[i - 1];
		if (p < 10) {
			b[j] = p;
		} else {
			b[j + 1] = p % 10;
			b[j] = p / 10;
			j++;
		}
	}
	for (i = 0; i < a; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}
