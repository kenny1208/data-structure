#include <iostream>
#include <algorithm> 
using namespace std;
//選擇排序:從還沒排序的整數中選出最小數，然後將它放在排序好的數列的下一個位置。 
void selsctionsort (int *a,const int n)//const:標明該引數不能再函式內被修改 
{
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			if(a[k]<a[i]) swap(a[i],a[k]);
		}
	}	
}
int main()
{
	int arr[9]={2,8,5,7,3,6,1,9,4};
	selsctionsort(arr,9);
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
 } 
