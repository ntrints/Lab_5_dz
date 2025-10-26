#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	double x, y, F;

	setlocale(LC_ALL, "RUS");
	puts("¬ведите число x");
	scanf("%lf", &x);
	puts("¬ведите число y");
	scanf("%lf", &y);

	F = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;

	printf("F(%lf, %lf) = %lf", x, y, F);

	return 0;

}