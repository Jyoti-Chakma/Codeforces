#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int n, petya, vasya, tonya, count=0;
  cin >> n;
  for(int i=0; i<n; i++)
  {
      cin >> petya >> vasya >> tonya;
      if((petya+vasya+tonya)>=2)
      {
          count=count+1;
      }
  }
  cout << count << endl;
}
