#include<stdio.h>

//1w-02(1)
int main()
{
    int a=0,b=1,cnt=0,n;
    scanf("%d",&n);
    if(n==1) printf("%d",a);
    else if(n==2) printf("%d",b);
    else
    {
        for(int i=3; i<=n; i++)
        {
            cnt=a+b;
            a=b;
            b=cnt;
        }
        printf("%d",cnt);
    }
}

//1w-02(2)
/*int main()
{
    int A[31],n;
    A[1]=0;
    A[2]=1;
    scanf("%d",&n);
    for(int i=3; i<=n; i++)
        A[i]=A[i-1]+A[i-2];
    printf("%d",A[n]);
}*/

//1w-02(3)
/*int fibo(int n)
{
    if(n==1) return 0;
    else if(n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
}*/
