#include <iostream>
using namespace std;

int main()
{
    int movie_length;
    int forwarded_length;

    cin >> movie_length;
    cin >> forwarded_length;

    int length_watched;
    length_watched = movie_length - forwarded_length / 2;

    cout << length_watched;
}
