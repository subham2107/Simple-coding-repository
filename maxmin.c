#include <stdio.h>
int max,min,max1,min1,a[100];
void part(int i,int j)
{
int mid;
if(i==j)
max=min=a[i];
else 
{
if(i==j-1)
{
if(a[i]>a[j])
{
max=a[i];
min=a[j];
}
else
{
max=a[j];
min=a[i];
}
}
else
{
mid=(i+j)/2;
part(i,mid);
max1=max;
min1=min;
part(mid+1,j);
if(max1>max)
max=max1;
if(min1<min)
min=min1;


}



}
}






int main()
{int i,n;
printf("Enter number of elements:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
min=a[0];
part(0,n-1);
printf("Maximum is:%d Minimum is:%d",max,min);

}
