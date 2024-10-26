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