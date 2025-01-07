#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int number;
        cin >> number;

        int reverse_number = 0;
        while (number > 0)
        {
            int remainder;
            remainder = number % 10;
            number = number / 10;
            reverse_number = reverse_number * 10 + remainder;
        }
        cout << reverse_number << endl;
    }
}
