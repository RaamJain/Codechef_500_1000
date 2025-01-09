#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int number_of_people;
        int valid_age;
        int number_of_eligible_people = 0;

        cin >> number_of_people;
        cin >> valid_age;

        for (int j = 0; j < number_of_people; j++)
        {
            int person_age;
            cin >> person_age;

            if (person_age >= valid_age)
            {
                number_of_eligible_people++;
            }
        }
        cout << number_of_eligible_people << endl;
    }
}
