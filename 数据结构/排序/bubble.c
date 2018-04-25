/**
 * 起泡排序
 * 每一趟不需要变更起点，变更结束点
 * 外层循环是第几趟，内层循环是每趟进行的操作，每一趟都会减少一个需要排序的元素
 * 基本属于最暴力的方法，用第一个元素依次和后面的元素比较，大于相邻的元素则交换，每一趟都能找出一个最大值
 **/
 #include <stdio.h>
 #include "header/common.h"
int main(int argc, char const *argv[]) {
    //接收输入
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    // 排序
    sort(a,n);
    // 测试排序结果
    visit("bubble:",a,n);
    return 0;
}
void  sort(int * a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=1;j<n-i;j++)
        {
           if (a[j-1]>a[j]) {
               swap(&a[j],&a[j-1]);
           }
        }
        visit("插入",a,n);
    }
}
