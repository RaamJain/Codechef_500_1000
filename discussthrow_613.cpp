#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int first_throw;
        int second_throw;
        int third_throw;

        cin >> first_throw;
        int longest_throw = first_throw;
        cin >> second_throw;

        longest_throw = max(longest_throw, second_throw);
        cin >> third_throw;
        longest_throw = max(longest_throw, third_throw);
        cout << longest_throw << endl;
    }
}
