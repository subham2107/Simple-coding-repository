#include<bits/stdc++.h>
using namespace std;
int mypartition(int *ar,int p,int r)
{
   int  pivot=ar[r];
    int i=p-1;
    int j;
    for(j=p;j<r;j++)
    {
        if(ar[j]<=pivot)
        {
            swap(ar[++i],ar[j]);
        }

    }
    swap(ar[i+1],ar[r]);
    return i+1;

}
void quick_sort(int *ar,int p,int r)
{
    int q;
    if(p<r)
{
        q=mypartition(ar,p,r);
        quick_sort(ar,p,q-1);
        quick_sort(ar,q+1,r);

}
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    quick_sort(ar,0,n-1);

     for(int xx=0;xx<n;xx++)
        {
            cout<<ar[xx]<<" ";
        }
        return 0;
}
