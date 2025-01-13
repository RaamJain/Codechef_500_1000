#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int ingredient_A;
        int ingredient_B;
        int ingredient_C;
        int ingredient_D;

        cin >> ingredient_A;
        cin >> ingredient_B;
        cin >> ingredient_C;
        cin >> ingredient_D;

        int ingredient1 = max(ingredient_A, ingredient_B);
        int ingredient2 = max(ingredient_C, ingredient_D);

        cout << ingredient1 + ingredient2 << endl;
    }
}
