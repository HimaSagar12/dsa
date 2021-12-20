#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[]={12,23,45,65,33,23,423,123,1};
    int min=arr[0],max=arr[0];
    for(int i=0;i<9;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    cout<<"max "<<max<<"  min "<<min<<endl;
    return 0;
}