#include<bits/stdc++.h>
using namespace std;

int PossibleTriangle(int a[], int n)
{
    int i,j,k,count=0;
    sort(a,a+n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[k]+a[i]>a[j])
                {
                    count++;
                }
            }
        }
    }
    return count;

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
    cout<<"No.of possible triangles is;\n"<<PossibleTriangle(a,n);


    return 0;
}
