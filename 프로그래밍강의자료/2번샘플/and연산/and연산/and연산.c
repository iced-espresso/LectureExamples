#include <stdio.h>

main()
{
	int x;
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &x);

	if ((x % 2 == 0) && (x % 3 == 0))
		printf("�Է��Ͻ� ���� 6�� ����Դϴ�.");
	else if (x % 2 == 0)
		printf("�Է��Ͻ� ���ڴ� 2�� ����Դϴ�.");
	else if (x % 3 == 0)
		printf("�Է��Ͻ� ���ڴ� 3�� ����Դϴ�.");

	
	printf("\n");
	system("pause");

}