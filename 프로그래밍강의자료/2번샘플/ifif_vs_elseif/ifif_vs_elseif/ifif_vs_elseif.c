#include <stdio.h>


main()
{
	int version = 0;

	int age;
	scanf_s("%d", &age);

	if (version == 0)
	{
		if (age < 15)
		{
			printf("15�� �̸��Դϴ�.");
		}
		if (age < 19)
		{
			printf("19�� �̸��Դϴ�.");
		}
	}
	else
	{
		if (age < 15)
		{
			printf("15�� �̸��Դϴ�.");
		}
		else if (age < 19)
		{
			printf("19�� �̸��Դϴ�.");
		}
	}
	
	printf("\n");
	system("pause");
}