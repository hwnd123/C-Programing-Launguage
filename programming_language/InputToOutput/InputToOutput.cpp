#include <stdio.h>
#include <stdlib.h>

/*
*��дһ�������븴�Ƶ�����ĳ��򣬲��ҽ����еĶ���ո���һ���ո����
*
*/

int main()
{
	/*
	Input
	*/
	char Charactor;
	int inspace = 0;
	while ((Charactor = getchar()) != -1)
	{
		if (Charactor == ' ')
		{
			
			if (inspace == 0)
			{
				putchar('x');
				inspace = 1;

			}
		}
		if (Charactor != ' ')
		{
			putchar(Charactor);
			inspace = 0;
		}

	}


	return 0;
}