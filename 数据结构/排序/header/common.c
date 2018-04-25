#include <stdio.h>
void visit(char * name,int * a,int len){
    printf("%s",name);
    int i;
    // 遍历，验证排序结果
    for(i=0;i<len;i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");
}
void swap(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
