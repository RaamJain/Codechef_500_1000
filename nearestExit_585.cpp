#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int seat_number;
        cin >> seat_number;

        if (seat_number > 50)
        {
            cout << "RIGHT" << endl;
        }
        else
        {
            cout << "LEFT" << endl;
        }
    }
}
