#include <stdio.h>

main()
{
	int age;
	printf("����� ���̸� �Է��ϼ���:");
	scanf_s("%d", &age);

	if (age < 15)
	{
		printf("15�� �̿밡�� ��û�Ͻ� �� �����ϴ�.");
	}
	else if (age < 19)
	{
		printf("19�� �̿밡�� ��û�Ͻ� �� �����ϴ�.");
	}
	else
	{
		printf("��� ��ȭ�� �����Ͻ� �� �ֽ��ϴ�.");
	}


	printf("\n");
	system("pause");
}