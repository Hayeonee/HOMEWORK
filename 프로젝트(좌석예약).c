/*��ǻ���а� 20170982 ���Ͽ�*/
#define SIZE 10
#include <stdio.h>

int main(void)
{
	int seatChoice;
	char choice;
	int i;
	int seats[SIZE] = { 0 };

	printf("******�¼� ���� �ý���******\n");

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &choice);
	while (choice == 'y')
	{
		printf("--------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("--------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%d ", seats[i]);
		printf("\n");

		printf("���° �¼�? ");
		scanf("%d", &seatChoice);

		if (seats[seatChoice - 1] == 1)
			printf("�̹� ����� �ڸ��Դϴ�.\n");
		else
			printf("����Ǿ����ϴ�.\n");

		for (i = 0; i < SIZE; i++)
		{
			if (i + 1 == seatChoice)
				seats[i] = 1;
		}

		fflush(stdin);

		printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
		scanf("%c", &choice);
	}

	return 0;
}