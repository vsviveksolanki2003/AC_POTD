#include<stdio.h>
int BorrowMoney(int, int, int);
int main()
{   int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int result=BorrowMoney(k,n,w);
    printf("%d",result);


    return 0;
}
int BorrowMoney(int k, int n, int w)
{  int totalcost=0;
    for(int i=1;i<=w;i++)
    { totalcost=totalcost + (k*i);
    }
    if(totalcost>n)
    { return  (totalcost-n);
    }
    else 
    { 
        return 0;
    }

} 