#include <stdio.h>

main()
{
	int x;
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &x);

	if (3 <= x && x <= 8)
		printf("�Է��Ͻ� ���ڴ� 3�̻� 8�����Դϴ�.");
	else
		printf("�Է��Ͻ� ���ڴ� 3~8 ���� ���ڰ� �ƴմϴ�.");

	
	printf("\n");
	system("pause");

}