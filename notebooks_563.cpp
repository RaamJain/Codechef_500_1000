#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int kg_of_pulp;
        cin >> kg_of_pulp;

        int no_of_pages;
        no_of_pages = kg_of_pulp * 1000;

        int no_of_notebooks;
        no_of_notebooks = no_of_pages / 100;

        cout << no_of_notebooks << endl;
    }
}
