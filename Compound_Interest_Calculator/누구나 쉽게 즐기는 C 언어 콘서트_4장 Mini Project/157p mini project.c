#include <stdio.h>
#include <math.h>	//pow() �Լ��� ����ϱ� ���� �ۼ�

int main()
{
	double initial_savings = 24.0;
	double interest_rate = 0.06;
	double year = 382;
	double total = initial_savings * (pow((1.0 + interest_rate), year));

	printf("�ʱ����ݾ�: %lf\n", initial_savings);
	printf("����: %lf\n", interest_rate);
	printf("���� �Ⱓ: %lf\n", year);
	printf("%.2lf�� ���� ������: %lf", year, total);		//�Ҽ��� �Ʒ� 2�ڸ����� ��� <-- %.2lf

	return 0;
}