# Lab_3_dz
Домашняя работа к лабораторной работе №5

# Условия задачи

<img width="858" height="97" alt="image" src="https://github.com/user-attachments/assets/81961bb1-59e4-4bf6-b185-0ac36c924cee" />

# Блоксхема

![Блок-схема](https://github.com/user-attachments/assets/c2630854-fafd-4e1d-b716-b22457920c06)


# Реализация программы

```
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	double x, y, F;

	setlocale(LC_ALL, "RUS");
	puts("Введите число x");
	scanf("%lf", &x);
	puts("Введите число y");
	scanf("%lf", &y);

	F = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;

	printf("F(%lf, %lf) = %lf", x, y, F);

	return 0;

}
```

# Результат программы

<img width="1101" height="637" alt="image" src="https://github.com/user-attachments/assets/f51ac380-0442-49e4-8551-3ef8c182b3fc" />


