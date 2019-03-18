
#include<stdio.h>
int Not_common (int *arr1, int *arr2, int l1, int l2)
{
 int c=0,f,i,j,new[100];
  for(i=0;i<l1;i++)
  {
    f=0;
    for(j=0;j<l2;j++)
    {
      if(arr1[i]==arr2[j])
         {
           f=1;
           break;
         }
    }
         if(f==0)
         {
           new[c]=arr1[i];
           c++;
         }
         }
  for(i=0;i<l2;i++)
  {
    f=0;
    for(j=0;j<l1;j++)
    {
      if(arr2[i]==arr1[j])
      {
        f=1;
        break;
      }
    }
      if(f==0)
      {
        new[c]=arr2[i];
        c++;
       
      }
    
  }
  for(i=0;i<c;i++)
      {
        if(i!=c-1)
          printf("%d,",new[i]);
        else
          printf("%d",new[i]);
  }
      printf("\n%d",c);
  }
int main()
{
  int a[100],b[100],l1,l2,i,j;
  scanf("%d%d",&l1,&l2);
  for(i=0;i<l1;i++)
    scanf("%d",&a[i]);
  for(j=0;j<l2;j++)
    scanf("%d",&b[j]);
  	Not_common(a,b,l1,l2);
  	return 0;
}