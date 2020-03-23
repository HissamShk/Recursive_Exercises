//CSCI 301
//PROJECT 2
//1st Recursive Function: Write an Integer Backwards
//Hissamuddin Shaikh
//This program prompts the user to enter in a positive integer of any number of digits,
//and writes it out backwards.
#include <iostream>
using namespace std;
void Backwards(int);
//Pre-Condition: Takes in the value stored in the variable "N", as long as it is a positive integer.
//Post-Condition: Writes out he value of "N" backwards.
int main()
{
    //Declaration of Variables
    int N;
    //Prompt for the User to enter a positive integer of any number of digits.
    //Continuous prompts until user enters a positive integer.
    cout << endl;
    cout << " |Backward Integer Writer|" << endl;
    cout << endl;
    //While function for error control
    do
    { cout << " Enter a Positive Integer (Max: 10 Digits): ";
      cin >> N;
      cout << endl;} while (N<10);
    //Passing "N" to the function "Backwards()"
    cout << " The Integer you entered, put backwards is: ";
    Backwards(N);
    return 0;
}
void Backwards(int N)
{
    if (N<10)
        cout << N << endl;
    else
    {
        cout <<N%10;
        Backwards(N/10);
    }
}

