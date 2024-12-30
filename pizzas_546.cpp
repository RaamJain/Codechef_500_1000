#include <iostream>
using namespace std;

int main()
{
    int number_of_test;
    cin >> number_of_test;

    for (int i = 0; i < number_of_test; i++)
    {
        int no_of_friends;
        int no_of_slices;

        cin >> no_of_friends;
        cin >> no_of_slices;

        int total_slices;
        total_slices = no_of_friends * no_of_slices;

        int pizzas;
        pizzas = ceil(float(total_slices) / float(4));
        cout << pizzas << endl;
    }
}
