//CSCI 301
//PROJECT 2
//3rd Recursive Function: Prime Factorization
//Hissamuddin Shaikh
//This program prompts the user to enter in a positive integer of any size,
//and factorizes from the smallest prime number to the largest.
#include <iostream>
using namespace std;
//primeFactorAsc() function prints the prime number of which they
//Factorize a number in Ascending order.
void PrimeFactorization(int N);
//Pre-Condition: Takes in an integer values, and factorizes it from the smallest to the largest prime number.
//Post-Condition: Returns all the prime factors possible for the value entered, other than 1 and the number itself.
//void primeFactorDesc(int n);
//primeFactorDesc() function prints the prime number of which they
//Factorize a number in Descending order.
int main()
{
    //Declaration of Variables
     int N;
     //Prompt for the User to enter a positive integer of any number of digits.
     //Continuous prompts until user enters a positive integer.
     cout << endl;
     cout << " |Prime Factor Calculator|" << endl;
     do{cout << endl;
     cout << " Enter a Positive Integer: ";
     cin >> N;} while(N<0);
     cout << endl;
     //Calculate Factors
     cout << " The Prime Factors of " << N << " are ";
     PrimeFactorization(N);
     cout << endl;;
     return 0;
}
void PrimeFactorization(int N)
{
     int A = 2;
     while(N % A != 0 && A < N)
     {
          A++;
     }
     N = N / A;
     if(N >= 1)
     {
          //PrimeFactorization(N);
          cout << A;
          if(N != 1)
              cout << ", ";
          PrimeFactorization(N);
          //cout << A;
    }
}
