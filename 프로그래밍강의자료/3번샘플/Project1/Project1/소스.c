#include <stdio.h>

main()
{
	while (1)
	{
		char a[10][100] = { "��","��","��","��","��","��","��","��","��","��" };
		char b[12][100] = { "��","��","��","��","��","��","��","��","��","��","��","��" };

		int year;
		printf("���� �Է�:");
		scanf_s("%d", &year);
		if (year < 0)
			year += 1;
		int gab = (year - 4) % 10;
		int ja = (year - 4) % 12;
		if (gab < 0)
			gab = 10 + gab;
		if (ja < 0)
			ja = 12 + ja;
		printf("%s", a[gab]);
		printf("%s", b[ja]);
		printf("\n");
	}
	printf("\n");
	system("pause");
}
