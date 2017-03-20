#include "Quick.h"
static void func_left(int *array,int head, int tail);
static void func_right(int *array,int head, int tail);
int Quick::sort(int *array, int size)
{
	int i=0,j=size-1;
	while(i<size )
	{
		func(array,i,j);
		i++;
	}

}
void Quick::func(int *array, int head, int tail)
{
	func_left(array,head,tail);	
}

static void func_left(int *array,int head, int tail)
{
	if(head < tail)
	{
		if(array[head] > array[tail])
		{
			array[head] ^= array[tail] ^= array[head] ^= array[tail];
			func_right(array,head+1,tail);
		}
		func_left(array,head,--tail);
	}
	else
	{
		return;	
	}
}
static void func_right(int *array,int head,int tail)
{
	if(head < tail)
	{
		if(array[head] > array[tail])
		{
			array[head] ^= array[tail] ^= array[head] ^= array[tail];
			func_left(array,head,tail-1);
		}
		func_right(array,++head,tail);
	}
	else
	{
		return;
	}
	
}
