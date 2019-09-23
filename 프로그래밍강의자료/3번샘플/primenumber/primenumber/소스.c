#include <stdio.h>

main()
{

	int num = 1;
	
	while (num)
	{
		int isprime = 1;
		printf("자연수를 입력하세요:");
		scanf_s("%d", &num);
		
		if (num <= 1)
		{
			printf("1보다 큰 수를 입력하여합니다.\n\n");
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
			printf("소수가 아닙니다.\n\n");
			printf("다시 ");
		}

	}
	

	system("pause");
}