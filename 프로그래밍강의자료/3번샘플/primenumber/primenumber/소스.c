#include <stdio.h>

main()
{

	int num = 1;
	
	while (num)
	{
		int isprime = 1;
		printf("�ڿ����� �Է��ϼ���:");
		scanf_s("%d", &num);
		
		if (num <= 1)
		{
			printf("1���� ū ���� �Է��Ͽ��մϴ�.\n\n");
			num = 1;
			continue;
		}

		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isprime = 0;
				break;
			}
		}

		if (isprime)
		{
			printf("prime number");
			num = 0;
		}
		else
		{
			printf("�Ҽ��� �ƴմϴ�.\n\n");
			printf("�ٽ� ");
		}

	}
	

	system("pause");
}