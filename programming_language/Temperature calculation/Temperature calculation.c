/*
这是一个有关温度计算的小例子，摄氏温度转化成华氏温度
先写一个测试程序，然后变成控制台启动
*/

#include <stdio.h>
#include <stdlib.h>

/*
华氏摄氏计算公式如下:
c = (5 / 9)*(F - 32)

*/
void Caculate_Temperater(int _floor, int _upper,int _step);

int main(int argc,char **argv)
{

	if (argc < 4)
	{
		printf("请输入三位有效参数");

	}
	else
	{
		
		Caculate_Temperater(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

		
	}

	system("pause");
}


//首先规定摄氏温度上下限（由于是测试程序，所以在函数）

void Caculate_Temperater(int _floor,int _upper,int _step)
{
	int num = _floor;
	
	int centigrade;

	
	while (num <= _upper)
	{
		centigrade = (5.0 / 9.0) * (num - 32);

		printf("%3d\t%6d\n", num, centigrade);
		num += _step;
	}
}

/*
本程序总结和知识点，
1、首先，看计算温度这个函数，centigrade = (5.0 / 9.0) * (num - 32);这条语句实际上书写很不规范
由于有经验，浮点数除法会舍位，也就是 5 / 9会等于0，好的写法应该是(5 * (num - 32) / 9),这样就避免了舍位

2、主函数中，我使用的是控制台启动，通过传入参数来启动控制台程序，甚至可以自定义一个批处理文件


*/