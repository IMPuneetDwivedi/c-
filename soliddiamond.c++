#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col + row < n - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        // for spaces
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout << " ";
        }
        for (int star = 0; star < n - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}