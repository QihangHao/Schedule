#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);
	return 0;
	//此题犯错没仔细看题，没发现int已经无法满足要求
}
