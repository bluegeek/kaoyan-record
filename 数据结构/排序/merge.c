/**
 * 二路归并排序
 **/
 #include <stdio.h>
 #include "header/common.h"
 void merge(int * a, int * b,int an,int bn);
 void sort(int * a, int n);
 int main(int argc, char const *argv[]) {
     //接收输入
     int n;
     scanf("%d", &n);
     int a[n];
     int b[n];
     int i;
     for(i=0;i<n;i++)
     {
         scanf("%d", &a[i]);
     }
     for(i=0;i<n;i++)
     {
         scanf("%d", &b[i]);
     }
     visit("开始a",a,n);
     visit("开始b",b,n);
     merge(a,b,an,bn);
     // 排序
     // sort(a,n);
     // 测试排序结果
     visit("结果a",a,n);
     visit("结果b",b,n);
     return 0;
 }
 // 将两个数组合并成一个数组;
 void merge(int * a, int * b,int an,int bn)
 {
     int c[an+bn];
     int i;
     for (i = 0; i < an; i++) {

     }
 }
 // 归并
 void mergeIt(int *a,int start,int end)
 {
     int len = end-start;
     if (end-start == 1) {

     }else{
         int mid = len/2;
         mergeIt(a,start,start+mid);
         mergeIt(a,end-mid,end);
         merge(a,start,mid,end);
     }
 }
 //  排序
 void sort(int * a, int n)
 {
     mergeIt(a,0,n);
 }
