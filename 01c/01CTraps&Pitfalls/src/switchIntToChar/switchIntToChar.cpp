// switchIntToChar.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h> 
#define SPC_VERSION_NO 7901   //���汾��
#define SPC_SUB_VERSION_NO 119  //�Ӱ汾��
#define SPC_DEV_VERSION_NO 2  //�����汾��,BUILD����ʾ

int _tmain(int argc, _TCHAR* argv[])
{
#if 1
	char *slash = "/";//'/'����һ���ַ�ָ�룬�����
#elif
	char lbl[40];
	//_itoa(SPC_VERSION_NO,lbl,10);
	sprintf(lbl, "%d.%d.%d", SPC_VERSION_NO,SPC_SUB_VERSION_NO,SPC_DEV_VERSION_NO);
#elif 0
	int a =3;
	int b =4;
	int c = a---b;
	a = 3;b =4;
	int d = a- --b;
	printf("%d\n",c);
	printf("%d\n",d);
#endif
	getchar();
	return 0;
}