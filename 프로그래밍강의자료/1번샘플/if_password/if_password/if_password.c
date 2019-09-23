#include <stdio.h>
main()
{
	int pw;
	printf("패스워드를 입력하세요:");
	scanf_s("%d", &pw);
	if (pw == 15)
	{
		printf("패스워드가 맞았습니다!");
	}
	else
	{
		printf("패스워드가 틀렸습니다!");
	}
	printf("\n");
	system("pause");
}
