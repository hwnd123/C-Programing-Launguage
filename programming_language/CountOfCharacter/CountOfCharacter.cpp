/*

дһ��ͳ�ƿո��Ʊ�������з��ĳ���
*/


#include <stdio.h>
#include <stdlib.h>


/*

˼·�����������ַ���ѭ����ֹ����������-1��Ȼ���ӡ���ո���������Ʊ�����������ͻ��з�������
	 ������int(����double)���͵ı�����ʾ�ո��Ʊ�����ͻ��з�������.

	 
*/



int main()
{
	//�����������
	int _SpaceCount = 0;
	int _TabCount = 0;
	int _LineBreakCount = 0;

	//�����ַ�����
	char _characters;

	//���õ�������ʾ
	printf("�������ַ���\t\n");
	
	
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

	//�������
	printf("\tThe SpaceNum is %d \n \
			The TabNum is %d \n  \
			The LineBreakNum is %d \n", _SpaceCount, _TabCount,_LineBreakCount);
	getchar();
	getchar();
	return 0;

}