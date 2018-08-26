//========================================================================
//语法陷阱
//========================================================================
#include<stdio.h>
#include"charpter.h"

typedef void (*funcptr)();

void (*signal(int,void(*)(int)))(int);

typedef void (*HANDLER)(int);
HANDLER signal(int,HANDLER);

int charpter2_test()
{
	float a;			//单个浮点变量a
	float ((b));		//浮点变量b
	float c();			//返回值为浮点类型的函数
	float *pf;			//pf是一个指向浮点数的指针
	float *g();			//()优先级高,故g()是一个函数；表示返回值类型为指向浮点类型的指针。
	float (*h)();		//h为函数指针；指向函数的返回值为浮点类型。
	//(float(*)());		//同上，表示指向返回值为浮点类型的函数的指针。
	(*(void(*)())0)();	
	//上式简写为(*0)();大概知道这是一个类似函数指针的类型,但是0不是函数
	//对0作前值类型转换，(void(*)())0,指向返回值为void的函数的指针。
	
	(*(funcptr)0)();

	return 0;
}