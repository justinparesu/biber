#include <stdio.h>

#include <stdio.h>

int main()
{
    int k, t;
    printf("二つの数字を書いてください");
    scanf("%d" , &k);
    scanf("%d" , &t);
    
    if(k * t >= 30)
    {
        printf("２つの数字の積が30以上になります");
    }
    
    else
    {
        printf("２つの数字の積が30未満になります");
    }

    return 0;
}