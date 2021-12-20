//this program works well but.. if you give some gaps it wont work properly
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string str;
    getline(cin,str);
    n=str.length();
    for(int i=0; i<=n/2; i++)
    {
        char s;
        s=str[i];
        str[i]=str[n-1];
        str[n-1]=s;
        n--;
    }
    cout<<str<<endl;
    return 0;
}