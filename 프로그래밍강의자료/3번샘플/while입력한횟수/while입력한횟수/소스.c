#include <stdio.h>

main()
{
	int score[5] = { 5, 5, 10, 20, 30 };
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + score[i];
	}

	printf("�� �������� %d �Դϴ�.", total);

	printf("\n");
	system("pause");
}