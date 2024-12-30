#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int ref1;
        int ref2;
        int ref3;
        int ref4;

        cin >> ref1;
        cin >> ref2;
        cin >> ref3;
        cin >> ref4;

        int decision = ref1 + ref2 + ref3 + ref4;
        if (decision == 0)
            cout << "IN" << endl;
        else
            cout << "OUT" << endl;
    }
}
