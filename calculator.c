#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, const char * argv[])
{
	int a, b, r;
	scanf("%d", &a);
	scanf("%d", &b);

	if (0 < a && 0 < b && a < 10001 && b < 10001) {
		printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a*b, a / b, a%b);
	}

}

