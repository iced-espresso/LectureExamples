#include <stdio.h>

main()
{
	int height;
	printf("신장을 입력하세요:");
	scanf_s("%d", &height);

	if (height < 150 || height > 230)
		printf("놀이기구를 탈 수 없습니다.");


}