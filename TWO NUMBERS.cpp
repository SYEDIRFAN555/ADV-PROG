#include<stdio.h>
/* Consider Size value always 10 */
void ModofTwoNumbers(int a[],int Size)							
{
	
		int i,count[10],c,j,temp;
	c=0;
        for(i=0;i<Size;i++){
	a[i]=a[i]%42;	
		}                                                                                                                            
        for(i=0;i<Size;i++){
	count[i]=1;
		}
        for(i=0;i<Size;i++)
        {   
			for(j=0;j<Size-1;j++)
            {
                if(a[j]>=a[j+1])
                { 
					temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
		}
            }
        }
        for(i=0;i<Size;i++)
        {      											
			for(j=i+1;j<Size;j++)
            {
			    if(a[i]==a[j])
                {
					count[i]--;
                    break;
				}
            }                                                                                                                              
        }
        for(i=0;i<Size;i++)
        {
		    if(count[i]==1)
	c++;
       }
printf("%d\n",c);
}



int main()
{   
	int a[10]={39,40,41,42,43,44,82,83,84,85};
ModofTwoNumbers(a,10);
printf("\n");											
    int b[10]={29,58,59,60,72,73,75,83,84,85};
ModofTwoNumbers(b,10);
printf("\n");
	int c[10]={225,226,227,335,251,337,447,448,489,555};
ModofTwoNumbers(c,10);
printf("\n");
    int c1[10]={191,20,21,292,65,66,67,99,98,97};
ModofTwoNumbers(c1,10);
printf("\n");                                                                                                                            
    int c2[10]={115,116,117,120,130,140,150,160,170,180};
ModofTwoNumbers(c2,10);
printf("\n");
    return 0;
}

