//========================================================================
//����
//========================================================================
#include<stdio.h>
#include "charpter.h"
//����Run-Time Check Failure #2 - Stack around the variable 'c' was corrupted.
//
int charpter4_test()
{
	int i;
	//char c;//�ڴ��У�|____��i��|_(c)|,ÿ�ζ�cдֵ�����Ḳ��i�ĵͶ˲���.
	int c;
	for(i = 0;i<5;i++)
	{
		scanf("%d",&c);
		printf("%d ",i);
		
	}
	printf("\n");
	return 0;
}
