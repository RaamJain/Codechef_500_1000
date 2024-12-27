#include <iostream>

using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int schools;
        int students_per_school;
        int number_of_passed;
        int total_students;

        cin >> schools;
        cin >> students_per_school;
        cin >> number_of_passed;

        total_students = schools * students_per_school;

        if (number_of_passed > (total_students / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
