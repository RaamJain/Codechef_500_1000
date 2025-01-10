#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int people_playing;
        int no_of_jenga_tiles;

        cin >> people_playing;
        cin >> no_of_jenga_tiles;

        if (no_of_jenga_tiles % people_playing == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
