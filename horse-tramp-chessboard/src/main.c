/*���㷨��ȡ̰���㷨����̤�����㷨�����Ż����Լ��ٻ��ݴ���*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "StackandChess.h"

//HTry�����Դ˴洢�˰˸���������ÿ�������е�����Ԫ�ء�0��ֻ���ڴճ�chess�ṹ�Ҳ�����getPath�����еķ�����
chess HTry[8] = {
    {-2,1,0}, {-1,2,0}, {1,2,0}, {2,1,0},
    {2,-1,0}, {1,-2,0}, {-1,-2,0}, {-2,-1,0}
};

int main()
{
	int x,y,z;

	weight();
	weight_sort();

	while(1){
		printf("������ʼ�����꣺\n");
		scanf("%d %d",&x,&y);
		if(x>=0 && x<=7 && y>=0 && y<=7){
			//��ʼ������
			for (int i = 0; i < BOARDSIZE; i++){
				for (int j = 0; j < BOARDSIZE; j++){
					ChessBoard[i][j] = 0;
				}
			}
			getPath(x,y);//�Թ�Ѱ·�����㷨
			printf("�Ƿ�����������������1����������0\n");
			scanf("%d",&z);
			if(z)
				continue;
			else 
				break;
		}
		else
			printf("���겻��Ҫ������������\n");
	}

	

	return 0;
}











