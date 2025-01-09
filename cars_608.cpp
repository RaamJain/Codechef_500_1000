#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int number_of_friends;
        cin >> number_of_friends;

        cout << ceil(float(number_of_friends) / float(4)) << endl;
    }
}
