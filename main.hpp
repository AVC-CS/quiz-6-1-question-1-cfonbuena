#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);

// ******************************
// Implement all your functions here
// ******************************
void getTwoValues(int &begin, int &end){
    while (true){
    cout << "Please enter begin and end values: ";
    cin >> begin >> end;
    if (begin < end)
        break;
    }
}

int getNextPrime(int &begin){
    int prime1;
    int n = begin++;    // Automatically add 1 to the beginning value

    while (true){
        bool prime = true;  // Assume true unless otherwise
        for (int i = 2, i < n, i++){ // skip 0, 1, and start dividing by 2, 3, etc
            if (n % i == 0)     // no remainder, therefore not prime
            prime = false;
            break;
        }
        if (prime)
            break;  // found prime number, exit loop 
        else n++;
    }
    prime1 = n;
    return prime1;
}