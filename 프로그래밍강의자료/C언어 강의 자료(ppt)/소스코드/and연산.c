#include <stdio.h>

main()
{
	int x;
	printf("숫자 하나를 입력하세요: ");
	scanf_s("%d", &x);

	if (3 <= x && x <= 8)
		printf("입력하신 숫자는 3이상 8이하입니다.");
	else
		printf("입력하신 숫자는 3~8 사이 숫자가 아닙니다.");

	
	printf("\n");
	system("pause");

}