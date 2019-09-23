#include <stdio.h>

main()
{
	int score[5] = { 5, 5, 10, 20, 30 };
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + score[i];
	}

	printf("총 점수합은 %d 입니다.", total);

	printf("\n");
	system("pause");
}