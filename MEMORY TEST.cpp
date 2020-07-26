#include<stdio.h>
#include<math.h>
int mx(int a,int b)
{
	return ((a>b)?a:b);
}                                                                                                                                         
int main()											
{
	int t;
	scanf("%d",&t);                                                                                                            
	while(t--)
	{
		int n,m,i;
		scanf("%d%d",&n,&m);
		int a[m],j;
		int max=0,min=n-1;
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		for(i=0;i<n;i++)
		printf("%d ",mx(abs(i-max),abs(i-min)));
		printf("\n");
	}
return 0;
}   


                                                                                                                   


