#include <stdio.h>

int main(void)
{
    int Takehiro, Hinata, General;
    
    Takehiro = 180.0;
    Hinata =170.0;
    General = 171.2;
    
    if (Takehiro == 180.0)
       printf("岳大は身長が180cmあります\n");
    if (Hinata != 180.0)
       printf("飛向は身長が180cmありません\n");
    if (General == 171.2)
       printf("一般成人男性の平均身長は171.2cmです\n");
    if (Hinata < General)
       printf("飛向は一般成人男性の平均身長よりも低いです\n");
    if(Takehiro > General)
       printf("岳大は一般成人男性の平均身長よりも高く、スタイルが良い\n");
    
    return 0;
}
