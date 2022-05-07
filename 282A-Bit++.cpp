#include<iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, a=0;
    string x;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> x;
        if(x[1]=='+')
        {
            a=a+1;
        }
        else if(x[1]=='-')
        {
            a=a-1;
        }
    }
    cout << a;
 
}
