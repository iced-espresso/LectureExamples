#include <stdio.h>

main()
{
	
	int season; //1일때 봄, 2일때 여름, 3일때 가을, 4일때 겨울
	int temperature;

	printf("계절을 입력하세요: ");
	scanf_s("%d", season);

	printf("온도를 입력하세요: ");
	scanf_s("%d", temperature);

	if (season == 1)
	{
		if (temperature > 30)
		{
			printf("에어컨을 틉니다.");
		}
		else
		{
			printf("전기를 절약하겠습니다.");
		}
	}

	
}