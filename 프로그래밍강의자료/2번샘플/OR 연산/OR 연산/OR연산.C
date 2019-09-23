#include <stdio.h>

main()
{
	printf("당신의 나이를 입력하세요: ");

	int age;
	scanf_s("%d", &age);

	if (age < 20)
	{
		printf("미성년자 입니다.");
	}
	else
	{
		printf("성인입니다.");
	}

}