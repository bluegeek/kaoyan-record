/**
 * 折半插入排序
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
 折半比较
 */
 void  sort(int * a,int n)
 {
     int i;
     for(i=1;i<n;i++)
     {
         int j;
         int tmp = a[i];
         int start = i-1;
         int end = 0;
         while(a[(start+end)/2]<tmp){
             end = (start+end)/2;
             swap();
         }
     }
 }
