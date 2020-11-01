# hello-world
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 int x,i,j,n; //定义十进制整型x,i,j,n
 scanf("%d",&x);//输入整数x


 for(j=0;j<x;j++) //j的初始值为0，当j<x时，j加一，不断循环至j=x
 { 
 scanf("%d",&n);
 int s=0,a[n]; //输入n,并定义n个变量的数组


 for(i=1;i<=n;i++) //循环条件一位i=1,当满足i<=n时，i 加一
 scanf("%d",&a[i]); //输入所有符合条件二的i的元素


 for(i=1;i<=n;i++) 
 s=s+a[i];    //s位所有输出的i 的求和
 printf("%d\n",s); //打印最后s的结果
 if (j != x-1)printf("\n"); 
 } 
 return 0; 
}