#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    int nibble = 4;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int bits;
        cin >> bits;

        int result;
        result = bits % nibble;
        if (result == 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Not Good" << endl;
        }
    }
}
