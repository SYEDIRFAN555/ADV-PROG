#include <stdio.h>

void RobotDirection(int x1,int y1,int x2,int y2 ){
	if(x1==x2)
        {
            if(y1>y2)
printf("down\n");
            else											
printf("up\n");
        }
        else if(y1==y2)                                                                                                                     
        {
            if(x1>x2)
printf("left\n");
            else
printf("right\n");
        }
        else
printf("sad\n");
}

int main()
{
RobotDirection(0,0,1,0);
printf("\n");
RobotDirection(0,0,0,1);
printf("\n");
RobotDirection(0,0,1,1);
    return 0;

}
	                                                                                                                        

