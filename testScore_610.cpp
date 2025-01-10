#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int number_of_problems;
        int marks_each_question;
        int marks_needed_to_pass;

        cin >> number_of_problems;
        cin >> marks_each_question;
        cin >> marks_needed_to_pass;

        if (marks_needed_to_pass % marks_each_question == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
