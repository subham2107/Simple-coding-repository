#include<bits/stdc++.h>
using namespace std;
void mymerge(int *ar,int p,int q,int r)
{
int n1=q-p+1;
   int n2=r-q;
   int L[n1+1];int R[n2+1];int i,j;
   for(i=0;i<n1;i++)
   {
       L[i]=ar[p+i];
   }
   for(j=0;j<n2;j++)
   {
       R[j]=ar[q+j+1];
   }
   L[n1]=INT_MAX,R[n2]=INT_MAX,i=0,j=0;int k;
        for(k=p;k<=r;k++)
        {
            if(L[i]<=R[j]){
                ar[k]=L[i];
                i++;}
            else{
                ar[k]=R[j];
                j++;}
        }



}
void merge_sort(int *ar,int p,int r)
{
    int q;
    if(p<r)
{
        q=(p+r)/2;
        merge_sort(ar,p,q);
        merge_sort(ar,q+1,r);
        mymerge(ar,p,q,r);
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
    merge_sort(ar,0,n-1);

     for(int xx=0;xx<n;xx++)
        {
            cout<<ar[xx]<<" ";
        }
        return 0;
}
