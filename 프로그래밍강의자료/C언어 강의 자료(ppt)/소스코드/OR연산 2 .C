#include <stdio.h>

main()
{
	int rn;
	printf("지역번호를 입력하세요:");
	scanf_s("%d", &rn);

	if (rn == 53 || rn == 55)
		printf("경상도입니다.");
	else if (rn == 42 || rn == 43)
		printf("충청도입니다.");
	else
		printf("등록되지 않는 지역입니다.");

	printf("\n");
	system("pause");

}