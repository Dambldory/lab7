#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	/*char c;
	printf("������� ������: ");
	scanf("%c", &c);//���������� � �������
	switch ((c >= 'a' && c <= 'z') || (c >= '�' && c <= '�'))
	{
	case 1:
		printf("������� �����.\n");
		break;
	default:
		printf("������� �����\n");
	}
	return 0;*/
	/*char c;
	float x, y;
	printf("������� �������������� ������: ");
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
	printf("������� ���������� �������: ");
	scanf("%d", &x);
	years = x / 12;
	month = x - years*12;
	printf("%d", years);
	switch (years%10)
	{
	case 1:
		puts(" ��� ");
		break;
	case 2:
		puts(" ���� ");
		break;
	case 3:
		puts(" ���� ");
		break;
	case 4:
		puts(" ���� ");
		break;
	case 5:
		puts(" ��� ");
		break;
	case 6:
		puts(" ��� ");
		break;
	case 7:
		puts(" ��� ");
		break;
	case 8:
		puts(" ��� ");
		break;
	case 9:
		puts(" ��� ");
		break;
	case 0:
		puts(" ��� ");
		break;
	}
	printf("\r%d", month);
	switch (month%10)
	{
	case 1:
		puts(" ����� ");
		break;
	case 2:
		puts(" ������ ");
		break;
	case 3:
		puts(" ������ ");
		break;
	case 4:
		puts(" ������ ");
		break;
	case 5:
		puts(" ������� ");
		break;
	case 6:
		puts(" ������� ");
		break;
	case 7:
		puts(" ������� ");
		break;
	case 8:
		puts(" ������� ");
		break;
	case 9:
		puts(" ������� ");
		break;
	case 0:
		puts(" ������� ");
		break;
	}
}