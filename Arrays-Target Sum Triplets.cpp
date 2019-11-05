#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
   int pos;
    for(int i=0;i<n-1;i++)
    {
        pos=i+1;
        for(int j=i+2;j<n;j++)
            if(a[pos]>a[j])pos=j;
        if(a[i]>a[pos])swap(a[i],a[pos]);
    }
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  int target;cin>>target;
  selection_sort(a,n);
  for(int i=0;i<n-2;i++)
  {for(int j=i+1;j<n-1;j++)
  {for(int k=j+1;k<n;k++)
  if(a[i]+a[j]+a[k]==target)cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
  }
  }

	return 0;
}
