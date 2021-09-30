#include<stdio.h>

int main()
{
    int intwalls,extwalls,i=0;
    float intp=18,extp=12,cost=0,temp;
    scanf("%d%d",&intwalls,&extwalls);
    
    if(intwalls<0 || extwalls<0)
    {
        printf("\n Invalid Input");
    }
    else if(intwalls==0 && extwalls==0)
    {
        printf("\n Total Estimated Cost:0.0 INR");
    }
    
    else
    {
        for(i=0;i<intwalls;i++)
        {
            scanf("%f",&temp);
            cost=cost+intp*temp;
        }
        
        for(i=0;i<extwalls;i++)
        {
            scanf("%f",&temp);
            cost=cost+extp*temp;
        }
        
        printf("\n Total Estimated Cost:%.1f INR",cost);
        
    }
    return 0;
}
