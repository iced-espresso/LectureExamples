#include <stdio.h>

main()
{
	int x;
	printf("숫자 하나를 입력하세요: ");
	scanf_s("%d", &x);

	if ((x % 2 == 0) && (x % 3 == 0))
		printf("입력하신 숫자 6의 배수입니다.");
	else if (x % 2 == 0)
		printf("입력하신 숫자는 2의 배수입니다.");
	else if (x % 3 == 0)
		printf("입력하신 숫자는 3의 배수입니다.");

	
	printf("\n");
	system("pause");

}