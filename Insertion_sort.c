#include<stdio.h>
int main()
{
  int n,i;
  printf("enter a value\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the values \n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
   Insertion_sort(a,n);
}
 void Insertion_sort(int *a,int n)
 {
  int j,k,temp;
  for(j=1;j<n;j++)
  {
   temp=a[j];
   k=j-1;
  while(k>=0 && a[k]>temp)
   {
     a[k+1]=a[k];
	 k--;
   }  
    a[k+1]=temp;   
  }
  for(j=0;j<n;j++)
   printf("%d ",a[j]);
 }