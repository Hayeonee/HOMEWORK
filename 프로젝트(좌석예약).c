/*컴퓨터학과 20170982 조하연*/
#define SIZE 10
#include <stdio.h>

int main(void)
{
	int seatChoice;
	char choice;
	int i;
	int seats[SIZE] = { 0 };

	printf("******좌석 예약 시스템******\n");

	printf("\n좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &choice);
	while (choice == 'y')
	{
		printf("--------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("--------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%d ", seats[i]);
		printf("\n");

		printf("몇번째 좌석? ");
		scanf("%d", &seatChoice);

		if (seats[seatChoice - 1] == 1)
			printf("이미 예약된 자리입니다.\n");
		else
			printf("예약되었습니다.\n");

		for (i = 0; i < SIZE; i++)
		{
			if (i + 1 == seatChoice)
				seats[i] = 1;
		}

		fflush(stdin);

		printf("\n좌석을 예약하시겠습니까?(y/n) ");
		scanf("%c", &choice);
	}

	return 0;
}