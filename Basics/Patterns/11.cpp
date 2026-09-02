#include <iostream>
using namespace std;
void pattern(int n)
{for(int i=0;i<5;i++){
    int start=0;
    if(i%2==0)
    start=1;
    else
    start=0;
    for(int j=0;j<=i;j++){
        cout<<start<<" ";
        start=1-start;
    }
    cout<<endl;
}

    // Upper half
}
int main()
{
    pattern(5);
}