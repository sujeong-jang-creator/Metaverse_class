#include <stdio.h>

void main(void)
{
	// �ΰ� ������ �̿��� ��Ģ���� ���α׷�
	int a, b;

	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf("%d", &b);

	printf("�� ������ ���� %d �Դϴ�.\n", a + b);
	printf("�� ������ ���� %d �Դϴ�.\n", a - b);
	printf("�� ������ ���� %d �Դϴ�.\n", a * b);
	printf("�� ������ ���� ���� %.2f �Դϴ�. (��, �Ҽ��� 2°�ڸ� ���� ���ɴϴ�)", (double)a / b);

	// ��� ������ ����, %�� ����ϰ� ������ %% �ι���� ����Ҷ� �ùٸ��� ���´�.
	printf("�� ������ ���� ���� ���� %d �Դϴ�.", a / b);
	printf("�� ������ ���� ���� �������� %d �Դϴ�.", a % b);
}