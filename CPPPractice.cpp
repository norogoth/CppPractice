#include <iostream>
using namespace std;

int main()
{

    for (int i = 10; i > 0; i--) {
        cout << "bomb timer is set to " << i;
        if (i == 1) {
            cout << "!!!!!!!!";
        }
        cout << endl;
    }
    cout << "bomb has exploded.";
}