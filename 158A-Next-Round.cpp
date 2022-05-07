#include<iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>
 
using namespace std;
 
int main()
{
    int i,n,x,k, a[100],b=0;
    cin >> n >> k;
    for (i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for (int j=1; j<=n; j++){
        if (a[j]>=a[k] && a[j]>0)
        {
            b=b+1;
        }
    }
 
    cout << b;
}
