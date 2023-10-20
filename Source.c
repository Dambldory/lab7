#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	/*char c;
	printf("¬ведите символ: ");
	scanf("%c", &c);//считывание с консоли
	switch ((c >= 'a' && c <= 'z') || (c >= 'а' && c <= '€'))
	{
	case 1:
		printf("¬ведена буква.\n");
		break;
	default:
		printf("¬ведено число\n");
	}
	return 0;*/
	/*char c;
	float x, y;
	printf("¬ведите арифметический пример: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("%.2f+%.2f = %.2f\n",x,y, x+y);
		break;
	case '-':
		printf("%.2f-%.2f = %.2f\n", x, y, x - y);
		break;
	case '/':
		printf("%.2f/%.2f = %.2f\n", x, y, x / y);
		break;
	case '*':
		printf("%.2f*%.2f = %.2f\n", x, y, x * y);
		break;
	case '^':
		printf("%.2f^%.2f = %.2f\n", x, y, pow(x,y));
		break;
	}
	*/
	int x,years, month;
	printf("¬ведите количество мес€цев: ");
	scanf("%d", &x);
	years = x / 12;
	month = x - years*12;
	printf("%d", years);
	switch (years%10)
	{
	case 1:
		puts(" год ");
		break;
	case 2:
		puts(" года ");
		break;
	case 3:
		puts(" года ");
		break;
	case 4:
		puts(" года ");
		break;
	case 5:
		puts(" лет ");
		break;
	case 6:
		puts(" лет ");
		break;
	case 7:
		puts(" лет ");
		break;
	case 8:
		puts(" лет ");
		break;
	case 9:
		puts(" лет ");
		break;
	case 0:
		puts(" лет ");
		break;
	}
	printf("\r%d", month);
	switch (month%10)
	{
	case 1:
		puts(" мес€ц ");
		break;
	case 2:
		puts(" мес€ца ");
		break;
	case 3:
		puts(" мес€ца ");
		break;
	case 4:
		puts(" мес€ца ");
		break;
	case 5:
		puts(" мес€цев ");
		break;
	case 6:
		puts(" мес€цев ");
		break;
	case 7:
		puts(" мес€цев ");
		break;
	case 8:
		puts(" мес€цев ");
		break;
	case 9:
		puts(" мес€цев ");
		break;
	case 0:
		puts(" мес€цев ");
		break;
	}
}