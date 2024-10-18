#include<stdio.h>

int main()
{
    int k;
    printf("How many students?");
    scanf("%d" , &k);
    
    int t;
    printf("How many teachers?");
    scanf("%d" , &t);
    
    printf("The numbr of people is %d" , k + t);
    
    return 0;
    

}