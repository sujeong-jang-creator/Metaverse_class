#include <stdio.h>

void main(void)
{
	// �Ž������� 1000��, 500��, 100��, 50��, 10���� ���� ���
	int goods, money, change, r_1000, r_500, r_100, r_50, r_10;

	printf("���ǰ��� �Է��� �ּ��� : ");
	scanf("%d", &goods);

	printf("������ �׼��� �Է��� �ּ��� : ");
	scanf("%d", &money);

	change = money - goods;
	r_1000 = change / 1000;
	r_500 = (change - r_1000 * 1000) / 500;
	r_100 = (change - r_1000 * 1000 - r_500 * 500) / 100;
	r_50 = (change - r_1000 * 1000 - r_500 * 500 - r_100 * 100) / 50;
	r_10 = (change - r_1000 * 1000 - r_500 * 500 - r_100 * 100 - r_50 * 50) / 10;

	/*
	����� ��
	int total = 2530;
	int money = 10000;

	int change = money - total;
	printf("�Ž����� : %d��\n", change);
	printf("1000�� : %d��\n", change / 1000);
	printf("500�� : %d��\n", change % 1000 / 500);
	printf("100�� : %d��\n", change % 1000 % 500 / 100);
	printf("50�� : %d��\n", change % 1000 % 500 % 100 / 50);
	printf("10�� : %d��\n", change % 1000 % 500 % 100 % 50 / 10);
	*/

	printf("���ǰ� : %d��, ���ұݾ� : %d��, �Ž����� : %d�� \n 1000�� : %d��, 500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��", goods, money, change, r_1000, r_500, r_100, r_50, r_10);
}