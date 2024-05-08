#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1w-03
int main()
{
    char A[100];
    int cnt=1,n;
    scanf("%s",A);

    n=strlen(A);
    for(int i=0; i<n/2; i++)
    {
        if(A[i]!=A[n-i-1])
        {
            cnt=0;
            break;
        }
    }
    printf("%d",cnt);
}
