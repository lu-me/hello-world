# hello-world
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 int x,i,j,n; //����ʮ��������x,i,j,n
 scanf("%d",&x);//��������x


 for(j=0;j<x;j++) //j�ĳ�ʼֵΪ0����j<xʱ��j��һ������ѭ����j=x
 { 
 scanf("%d",&n);
 int s=0,a[n]; //����n,������n������������


 for(i=1;i<=n;i++) //ѭ������һλi=1,������i<=nʱ��i ��һ
 scanf("%d",&a[i]); //�������з�����������i��Ԫ��


 for(i=1;i<=n;i++) 
 s=s+a[i];    //sλ���������i �����
 printf("%d\n",s); //��ӡ���s�Ľ��
 if (j != x-1)printf("\n"); 
 } 
 return 0; 
}