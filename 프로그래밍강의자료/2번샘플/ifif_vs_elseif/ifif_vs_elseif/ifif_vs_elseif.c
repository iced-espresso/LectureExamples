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
			printf("15세 미만입니다.");
		}
		if (age < 19)
		{
			printf("19세 미만입니다.");
		}
	}
	else
	{
		if (age < 15)
		{
			printf("15세 미만입니다.");
		}
		else if (age < 19)
		{
			printf("19세 미만입니다.");
		}
	}
	
	printf("\n");
	system("pause");
}