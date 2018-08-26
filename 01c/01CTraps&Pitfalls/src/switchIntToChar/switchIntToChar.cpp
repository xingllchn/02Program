// switchIntToChar.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h> 
#define SPC_VERSION_NO 7901   //主版本号
#define SPC_SUB_VERSION_NO 119  //子版本号
#define SPC_DEV_VERSION_NO 2  //开发版本号,BUILD不显示

int _tmain(int argc, _TCHAR* argv[])
{
#if 1
	char *slash = "/";//'/'不是一个字符指针，错误的
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