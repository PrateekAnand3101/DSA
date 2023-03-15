#include<iostream>
using namespace std;

void sort(int a[1000], int n)
{
    int temp,i,j;
    for(i=0;i<j;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Largest 3 elements is:\n";
    for(int i=n-1;i>=n-3;i--)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,a[100],i;
    cout<<"Enter the no. of elements in the array: \n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
}
