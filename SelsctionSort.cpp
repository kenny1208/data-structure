#include <iostream>
#include <algorithm> 
using namespace std;
//��ܱƧ�:�q�٨S�ƧǪ���Ƥ���X�̤p�ơA�M��N����b�ƧǦn���ƦC���U�@�Ӧ�m�C 
void selsctionsort (int *a,const int n)//const:�Щ��Ӥ޼Ƥ���A�禡���Q�ק� 
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
