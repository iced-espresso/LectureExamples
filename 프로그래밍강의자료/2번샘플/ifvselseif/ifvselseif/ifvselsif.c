#include <stdio.h>

main()
{
	
	int season; //1�϶� ��, 2�϶� ����, 3�϶� ����, 4�϶� �ܿ�
	int temperature;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", season);

	printf("�µ��� �Է��ϼ���: ");
	scanf_s("%d", temperature);

	if (season == 1)
	{
		if (temperature > 30)
		{
			printf("�������� Ƶ�ϴ�.");
		}
		else
		{
			printf("���⸦ �����ϰڽ��ϴ�.");
		}
	}

	
}