#include <stdio.h>

main()
{
	while (1)
	{
		char a[10][100] = { "갑","을","병","정","무","기","경","신","임","계" };
		char b[12][100] = { "자","축","인","묘","진","사","오","미","신","유","술","해" };

		int year;
		printf("연도 입력:");
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
