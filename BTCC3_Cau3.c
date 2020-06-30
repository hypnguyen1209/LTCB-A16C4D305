#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, cv, p;
	float s;
	scanf("%d%d%d", &a, &b, &c);
	if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
		return 0;
	}
	cv = a + b + c;
	p = cv/2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("%d %.3f", cv, s);
	return 0;
}
