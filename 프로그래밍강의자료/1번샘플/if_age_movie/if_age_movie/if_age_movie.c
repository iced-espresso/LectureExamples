#include <stdio.h>

main()
{
	int age;
	printf("당신의 나이를 입력하세요:");
	scanf_s("%d", &age);

	if (age < 15)
	{
		printf("15세 이용가를 시청하실 수 없습니다.");
	}
	else if (age < 19)
	{
		printf("19세 이용가를 시청하실 수 없습니다.");
	}
	else
	{
		printf("모든 영화를 관람하실 수 있습니다.");
	}


	printf("\n");
	system("pause");
}