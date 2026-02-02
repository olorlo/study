#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//H시 M분
	int h;
	int m;
	scanf("%d%d", &h, &m);

	
	if (m < 45) {
		m = 60 - (45 - m);
		if (h > 0)
			h = h-1;
		else
			h = 23;
		printf("%d %d", h, m);

	}
	else if (m >= 45) {
		m = m - 45;
		printf("%d %d", h, m);

	}
	return 0;
}