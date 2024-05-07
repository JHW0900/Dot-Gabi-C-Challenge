#include <stdio.h>

int main()
{
    printf("\"Hello, World!\\n\"");
}

#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; ++i)
        //i=1부터 1씩 상수값 상승
        for (int j = 1; j <= i; ++j)
            printf("*");
    printf("\n");
    {
        return 0;
    }
}
//출력 안
