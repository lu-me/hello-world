#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 int x,i,j,n; 
 scanf("%d",&x); 


 for(j=0;j<x;j++) 
 { 
 scanf("%d",&n);
 int s=0,a[n]; 


 for(i=1;i<=n;i++) 
 scanf("%d",&a[i]); 


 for(i=1;i<=n;i++) 
 s=s+a[i]; 
 printf("%d\n",s); 
 if (j != x-1)printf("\n"); 
 } 
 return 0; 
}