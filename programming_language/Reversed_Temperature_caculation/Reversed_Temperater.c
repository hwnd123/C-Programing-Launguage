#include <stdlib.h>
#include <stdio.h>
/*

������������¶Ȼ����¶ȶ��ձ�,����forѭ���ķ�ʽ

*/
#define  FLOOR 0
#define  UPPER 300
#define  STEP 20



void Reversed_Caculate_Temperater(int _floor, int _upper, int _step);



int main()
{
	Reversed_Caculate_Temperater(FLOOR,UPPER,STEP);


}
/*
c = (5 / 9)*(F - 32)
*/

void Reversed_Caculate_Temperater(int _floor, int _upper, int _step)
{
	float floor = _floor;
	for (floor = _upper; floor >= _floor; floor -= _step)
	{
		printf("%3f\t%6.2f\n", floor, (5.0 / 9.0) * (floor - 32.0));

	}

}

