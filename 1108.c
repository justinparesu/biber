#include <stdio.h>

int main()
{
    int k;
    printf("何歳ですか？");
    scanf("%d" , &k);
    
    if(k >= 15)
    {
        printf("大人料金になります。");
    }
    
    else
    {
        printf("子供料金になります。");
    }

    return 0;
}
