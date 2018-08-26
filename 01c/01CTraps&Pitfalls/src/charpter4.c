//========================================================================
//连接
//========================================================================
#include<stdio.h>
#include "charpter.h"
//报错Run-Time Check Failure #2 - Stack around the variable 'c' was corrupted.
//
int charpter4_test()
{
	int i;
	//char c;//内存中，|____（i）|_(c)|,每次对c写值，都会覆盖i的低端部分.
	int c;
	for(i = 0;i<5;i++)
	{
		scanf("%d",&c);
		printf("%d ",i);
		
	}
	printf("\n");
	return 0;
}
