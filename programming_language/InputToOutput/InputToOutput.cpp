#include <stdio.h>
#include <stdlib.h>

/*
*编写一个将输入复制到输出的程序，并且将其中的多个空格用一个空格代替
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
				putchar(' ');
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
