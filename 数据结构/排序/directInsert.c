/**
 * 直接插入排序
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
     visit("开始",a,n);
     // 排序
     sort(a,n);
     // 测试排序结果
     visit("结果",a,n);
     return 0;
 }
 /**
  * 直接插入排序
  取出第二个元素，和第一个比较，如果小于第一个则交换，
  取出第三个元素，和第二个比较，如果小于第二个，则交换，和第一个比较，大于第一个，则交换
  。。。
  取出第n个元素，和第n-1个比较，如果小于第n-1个，则交换
  * 每一趟都会变更起点，结束点不发生变化
  * 像扑克牌一样，后面的牌插入到已有的有序的牌里面。
  * 由于已有的牌是有序的，所以可以使用折半插入法，直接插入就是正常比较有序数据
  * 如果n+1小于n就需要交换位置
  **/
 void  sort(int * a,int n)
 {
     int i;
     for(i=1;i<n;i++)
     {
         int j;
         int tmp = a[i];
         // 已排序，从大端
         for(j=i-1;j>=0;j--)
         {
            if (tmp<a[j]) {
                swap(&a[j+1],&a[j]);
            }
         }
     }
 }
