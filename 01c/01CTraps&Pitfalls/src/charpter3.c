//========================================================================
//语义陷阱
//========================================================================
#include<stdio.h>
#include"charpter.h"
int *FindNum(int *pTab,int TolNum,int FindNum);
#define N 10
int a = 0;
int charpter3_test()
{
	int y[N]={0},x[N]={0};
	int i =0;
	while(i <N)
		y[i]=x[i++]=i;
	//3.8 &&/||/!
	a = 10&12;
	a = 10|12;
	a = ~11;
	///////////////////////////////////////

	return 0;
}
//编写一个函数，对一个已排序的整数表执行二分查找。
//函数的输入包括一个指向表头的指针，表中的元素个数，以及待查找的数值。
//函数的输出是一个满足查找要求的元素的指针，当未查找到满足要求的数值时，输出一个NULL指针。
int *FindNum(int *pTab,int TolNum,int FindNum)
{
	int low=0,high =TolNum-1,mid=0;
	if(pTab[low]==FindNum)
		return pTab;
	if(pTab[high]==FindNum){
		pTab+=high;
		return pTab;
	}
	while(low<=high){
		mid = ((high - low)/2)+low;
		if(pTab[mid]==FindNum){
			pTab+=mid;
			return pTab;
		}
		else
		{
			if(pTab[mid]>FindNum)
				high= mid-1;
			else
				low=mid+1;
		}
	}
	return NULL;
}