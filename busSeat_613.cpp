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

        if (seat_number <= 15)
        {
            if (seat_number < 11)
            {
                cout << "Lower" << " Double" << endl;
            }
            else
            {
                cout << "Lower" << " single" << endl;
            }
        }
        else
        {
            if (seat_number < 26)
            {
                cout << "Upper" << " Double" << endl;
            }
            else
            {
                cout << "Upper" << " single" << endl;
            }
        }
    }
}
