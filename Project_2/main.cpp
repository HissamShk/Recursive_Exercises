//CSCI 301
//PROJECT 2
//2nd Recursive Function: Determine if a Value is Present in an Array
//Hissamuddin Shaikh
//This program prompts the user to enter in the name of the file, which is then read
//into an array. The User is then prompted to enter a value to look for in the array,
//which is searched for through a recursive function that returns true if the value is present
//or false if absent. This continues until the user enters 0 to terminate the program.
//and writes it out backwards.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void openArray (ifstream&, string);
//Pre-Condition: Takes in the object, through which the data in the file will be accessed.
//               Takes in the name of the file to be opened.
//Post-Condition: Opens the file.
bool Present(int [10], int, int);
//Pre-Condition: Takes in an array containing values, and the value to search for.
//               Moreover, also takes in the number of values in the array.
//Post-Condition: Returns True or Fall, based on the presence or absence of the value requested by the user.
int main()
{
    //Declaration of Variables
    ifstream File;
    string FileName;
    int N=10;
    int A[10];
    int K;
    //Opening and Reading in the Datafile from User
    cout << endl;
    cout << " |Presence Checker|" << endl;
    do{cout << endl;
    cout << " Enter the Name of an Existing Input File" << endl;
    cout << endl;
    cout << " (Note: that only 10 values will be read in): ";
    getline (cin, FileName);
    openArray(File, FileName);}while(File.fail());
    for (int B=0; B<10; B++)
    {
        File >> A[B];
    }
    //Prompting the user for the value to search from the file, until the user enters 0
    do{ cout<<endl;
    cout<<" Enter the Value to look for in the File (to terminate, enter 0): ";
    cin >> K;
         if (Present(A,N,K)==true)
            {
                cout<<endl;
                cout<<" Value is Present. "<<endl;
            }
            else
                {
                    if (K!=0){
                    cout<<endl;
                    cout<< " Value is Absent. "<<endl;
                    }
                }
        }while(K!=0);

}
bool Present(int A[10], int N, int K)
{
    if (N<0) {
        return false;
    }
    if (A[N]==K) {
        return true;
    }
    else {
        return Present(A, N-1, K);
    }
}
void openArray(ifstream &File, string FileName)
{
    File.open(FileName.c_str());
}
