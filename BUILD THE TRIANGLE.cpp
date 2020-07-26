#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void quicksort(int *arr,int start ,int end)
{
 int i, j,key;
 key = arr[(start + end)/2];
i = start;
 j = end;
 do
 {
while( arr[i] < key )
i++;
  while(arr[j] > key)
   j--;
  if(i<=j)                                                                                                                                  
  {																									
   int temp = arr[i];
arr[i] = arr[j];                                                                                                                          
arr[j] = temp;
i++;
   j--;
  }
}while(i<=j);
if(start < j)
  quicksort(arr,start,j);
 if(i<end)
  quicksort(arr,i,end);
}
void chances_winning( int L[],int N)
{
int W,i,j,k;
 quicksort(L,1,N);
  W=0;
  for(i=N;i>=3;i--)
  {
   j=1;
   k=i-1;
   while(j<k)                                                                                                                              
    if(L[j]+L[k]<L[i])
    {												
     W+=k-j; 
j++;
    }                                                                                                                                         
    else
     k--;
   }
printf("%d",W);
}


int main()
{
	int A[]={1,2,3};
	int M[]={2,3,10};
	int N[]={1,2,1};
	int O[]={5,6,2,7};
	int B[]={1,5,6,9,10,15};
	int C[]={1,2,3,4,5,6,7,8,9,10};
	int D[]={15,19,29,39,48,49,59,58,68,69,25};

	chances_winning(A,3);
	printf("\n");                                                                                                                        
	chances_winning(M,3);
	printf("\n");										
	chances_winning(N,3);
	printf("\n");
	chances_winning(O,4);
	printf("\n");                                                                                                              
	chances_winning(B,6);
	printf("\n");
	chances_winning(C,10);
	printf("\n");
	chances_winning(D,11);
	printf("\n");
	

 return 0;
}

