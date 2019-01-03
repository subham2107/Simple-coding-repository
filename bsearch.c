#include <stdio.h>
int bsearch(int a[],int l,int r,int n)
{int mid;
while(l<=r)
{mid=l+(r-l)/2;
if(a[mid]>n)
r=mid-1;
else if(a[mid]==n)
return mid;
else if(a[mid]<n)
l=mid+1;
}
return -1;
}
int main()
{int num,a[10],item,i,val;
printf("Enter number of elements\n");
scanf("%d",&num);
printf("Enter the elements\n");
for (i=0;i<num;i++)
scanf("%d",&a[i]);
printf("Enter the element to search:\n");
scanf("%d",&item);
val=bsearch(a,0,num-1,item);
if(val==-1)
printf("The element not found!\n");
else
printf("The elemebnt Found at position %d",val+1);
}

