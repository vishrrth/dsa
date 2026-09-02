#include <iostream>
using namespace std;
void pattern(int n)
{

    // Upper half
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
int main()
{
    pattern(5);
}