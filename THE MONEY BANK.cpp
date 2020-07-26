#include <stdio.h>
#include <stdlib.h>

void BankTranaction(int wth,float ava){
	
	float bal;
    if((ava-wth)<0.5)
        printf("%.2f",ava);
    else 												
    {
        if(((wth%5)==0))   //if(((x%5)==0) && ((y-x)>0.5))                                                                                                                                                                                                                                                                                                                                                                                                                     
        {
            bal=(ava-wth-0.5);
            printf("%.2f",bal);
        }
         else
            printf("%.2f",(ava));
    }
} 


int main()
{
    BankTranaction(30,120.00);
	printf("\n");
	BankTranaction(42,120.00);
	printf("\n");
	BankTranaction(300,120.00);

    return 0;
}

                                                                                                                   


