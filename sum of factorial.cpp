#include <iostream>
using namespace std;
 

int main()
{
    
    int f = 1, Sum = 0,n;
    cout<<"enter the number";
    cin>>n;
 
    
    for (int i = 1; i <= n; i++) {
 
        f = f * i;
        Sum += f;
    }
 cout<<"sum="<<Sum<<endl;
    return Sum;
}
 

