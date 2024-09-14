#include <iostream>
using namespace std;
int main()
{
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        cout << &b[i] << endl;
    }
    cout << &b << endl;
    return 0;
}
