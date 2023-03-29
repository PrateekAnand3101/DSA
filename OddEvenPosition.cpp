#include<bits/stdc++.h>
using namespace std;

void position(int a[], int n)
{
    sort(a,a+n);
    int ans[n],i;
    int p=0,q=n-1;
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0)
            ans[i]=a[q--];
        else
            ans[i]=a[p++];
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int a[100],n,i;
    cout<<"Enter the value of n:\n";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    position(a,n);
    return 0;
}
