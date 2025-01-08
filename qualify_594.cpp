#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int points_for_qualification;
        int easy_solved;
        int hard_solved;

        cin >> points_for_qualification;
        cin >> easy_solved;
        cin >> hard_solved;

        int points_achieved;
        points_achieved = easy_solved + (2 * hard_solved);

        if (points_achieved >= points_for_qualification)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }
}
