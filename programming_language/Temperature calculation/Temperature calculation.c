/*
����һ���й��¶ȼ����С���ӣ������¶�ת���ɻ����¶�
��дһ�����Գ���Ȼ���ɿ���̨����
*/

#include <stdio.h>
#include <stdlib.h>

/*
�������ϼ��㹫ʽ����:
c = (5 / 9)*(F - 32)

*/
void Caculate_Temperater(int _floor, int _upper,int _step);

int main(int argc,char **argv)
{

	if (argc < 4)
	{
		printf("��������λ��Ч����");

	}
	else
	{
		
		Caculate_Temperater(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

		
	}

	system("pause");
}


//���ȹ涨�����¶������ޣ������ǲ��Գ��������ں�����

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
�������ܽ��֪ʶ�㣬
1�����ȣ��������¶����������centigrade = (5.0 / 9.0) * (num - 32);�������ʵ������д�ܲ��淶
�����о��飬��������������λ��Ҳ���� 5 / 9�����0���õ�д��Ӧ����(5 * (num - 32) / 9),�����ͱ�������λ

2���������У���ʹ�õ��ǿ���̨������ͨ�������������������̨�������������Զ���һ���������ļ�


*/