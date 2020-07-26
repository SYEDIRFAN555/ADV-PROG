#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void  Nearestpalindrome( char a[])
{
	    int i,flag,check,l,m,k;

        flag=1;
        l=strlen(a);
        k=l>>1;
        check=0;
        for(i=0;i<l;i++)
        {
            if(a[i]!='9')
            {
                flag=0;
                break;										
            }
        }
        if(flag==1)                                                                                                                           
        {
a[0]='1';
            for(i=1;i<l;i++)
            a[i]='0';
            a[l]='1';
            a[l+1]='\0';
            check=1;
        }
        flag=0;
        if(check!=1)
        {
            for(i=0;i<k;i++)
            {
                if(a[i]<a[l-1-i])
                flag=-1;
                else if(a[i]>a[l-1-i])
                flag=1;
                a[l-1-i]=a[i];
            }
                                                                                                                                               
            if(!(l&1))																							
            m=k-1;
            else m=k;
            if(flag==0||flag==-1)
            {                                                                                                                                          
i=0;
                while(a[m-i]=='9')
                {
                    a[m-i]='0';
                    a[l-1-m+i]='0';
i++;
                }
				a[m-i]++;
                a[l-1-m+i]=a[m-i];
	}
    }
printf("%s",a);

}
int main()
{
	char a[100]="909";
	Nearestpalindrome(a);                                                                                                    
	printf("\n");
	char b[]="999";									
	Nearestpalindrome(b);
	printf("\n");
	char c[]="2133";
	Nearestpalindrome(c);
	printf("\n");                                                                                                                        	char d[]="1000";
	Nearestpalindrome(d);
	printf("\n");
	char e[]="2432";
	Nearestpalindrome(e);
	printf("\n");
	char a1[]="2569";
	Nearestpalindrome(a1);
	printf("\n");
	char b1[]="1999";
	Nearestpalindrome(b1);
	printf("\n");
	char c1[]="1889";
	Nearestpalindrome(c1);
	printf("\n");                                                                                                                        
return 0;
}

