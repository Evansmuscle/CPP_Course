#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int favouriteNumber;
    
    cout << "Enter your favourite number:" << endl;
    cin >> favouriteNumber;
    cout << "Your favourite number is: " + to_string(favouriteNumber) << endl;

    return 0;
}
