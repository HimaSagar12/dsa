#include <bits/stdc++.h> // .h must be included
using namespace std;
int main()
{
    int n,num=0;
    n=4;
    int arr[] = {2,4,3,5};
    for(int i=0;i<n;i++)  // int i
    {
        if(i==0)
        {
            if(arr[0]>arr[1])
            {
                num++;
            }
        }
        else if(i==n)
        {
            if(arr[n]>arr[n-1])
            {
                num++;
            }
        }
        else
        {
            if(arr[i]>arr[i-1])
                if((arr[i]>arr[i+1]))
                    {
                        num++;
                    }
        }
    }
            cout<<"number : "<<num<<endl;

    return 0;
}