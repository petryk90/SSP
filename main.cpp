#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    string str[3]= {"Stone", "Scissors", "Paper"};
    string a;
    string choice;
    cout << "Please enter the Stone, Scissors or Paper" << endl;
    cin >> choice;
    cout << "Your choice: ";
    cout << choice << endl;
    cout << "Computer choice: ";
    srand(time(0));
    a =  str[rand() %3];
    cout << a << endl;


    return 0;
}

