#include<iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int x=0,b;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> x;
            if(x==1)
                {
                    b=abs(i-3)+abs(j-3);
                }
        }
    }
    cout << b;
}
