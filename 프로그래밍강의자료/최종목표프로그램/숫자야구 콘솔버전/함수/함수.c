#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int AllPrimeNumberPrint(int n);
int isprime(int n);
int randomNumber(int a, int b);
 main()
{
	 while (1)
	 {
		 int count = 0;
		 srand(time(NULL));
		 int rnd = randomNumber(10,99);
		 int a = rnd / 10;
		 int b = rnd % 10;
		 while (a == b)
		 {
			 rnd = randomNumber;
			  a = rnd / 10;
			  b = rnd % 10;
		 }
		 int n = -1;
		 int strike = 0;
		 while (strike < 2)
		 {
			 printf("숫자를 입력하세요:");

			 scanf_s("%d", &n);
			 
			 int aa = n / 10;
			 int bb = n % 10;

			 strike = 0;
			 int ball = 0;
			 if (a == aa)
				 strike++;
			 else if (a == bb)
				 ball++;

			 if (b == bb)
				 strike++;
			 else if (b == aa)
				 ball++;
				
			 int out = 2 - ball - strike;

			 printf("%d strike %d ball  %d out\n", strike, ball, out);
			 count++;
		 }
		 printf("맞췄습니다.");
		 printf(" count: %d", count);
		 printf("\n 다시 하세요\n");
	 }
	
	system("pause");
}
 int UPorDown(int input_number, int refernce_number)
 {
	 if (input_number < refernce_number)
		 printf("up");
	 else if (input_number > refernce_number)
		 printf("down");
	 else
		 return 0;
	 printf("\n");
	 return 1;
 }
 int randomNumber(int a, int b)
 {
	
	 int randomN = rand() % (b + 1 - a) + a;
	 return randomN;
 }