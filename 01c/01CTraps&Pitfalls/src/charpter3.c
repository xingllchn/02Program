//========================================================================
//��������
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
//��дһ����������һ���������������ִ�ж��ֲ��ҡ�
//�������������һ��ָ���ͷ��ָ�룬���е�Ԫ�ظ������Լ������ҵ���ֵ��
//�����������һ���������Ҫ���Ԫ�ص�ָ�룬��δ���ҵ�����Ҫ�����ֵʱ�����һ��NULLָ�롣
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