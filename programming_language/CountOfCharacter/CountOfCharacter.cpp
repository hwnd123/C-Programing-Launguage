/*

写一个统计空格，制表符，换行符的程序
*/


#include <stdio.h>
#include <stdlib.h>


/*

思路：不断输入字符，循环终止条件是输入-1，然后打印出空格的数量，制表符的数量，和换行符的数量
	 用三个int(或者double)类型的变量表示空格、制表符，和换行符的数量.

	 
*/



int main()
{
	//定义计数变量
	int _SpaceCount = 0;
	int _TabCount = 0;
	int _LineBreakCount = 0;

	//定义字符变量
	char _characters;

	//良好的输入提示
	printf("请输入字符：\t\n");
	
	
	while ((_characters = getchar()) != '-')
	{
		
		switch (_characters)
		{
			case  ' ':
				_SpaceCount++;
			break;
			
			case  '\t':
				_TabCount++;
			break;

			case  '\n':
				_LineBreakCount++;
			break;

		default:
			break;
		}
		getchar();
	}

	//输出计数
	printf("\tThe SpaceNum is %d \n \
			The TabNum is %d \n  \
			The LineBreakNum is %d \n", _SpaceCount, _TabCount,_LineBreakCount);
	getchar();
	getchar();
	return 0;

}