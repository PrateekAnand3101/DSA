#include<bits/stdc++.h>
using namespace std;

void maxMin(int a[], int n)
{
    int i,temp[n];
    int small=0,large=n-1;
    int flag =true;
    for(i=0;i<n;i++){
        if(flag)
            temp[i]=a[large--];
        else
            temp[i]=a[small++];
        flag=!flag;
    }
    cout<<"The array after arranging is:\n";
    for(i=0;i<n;i++){
        cout<<temp[i]<<" ";
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
    cout<<"The original array is:\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    maxMin(a,n);

    return 0;
}
