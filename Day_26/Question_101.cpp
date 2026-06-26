//Write a program to Create number guessing game.

#include<iostream>
#include<cstdlib>  // for rand() and srand() function
#include<ctime>  // for time(0) function
using namespace std;

int main() {
    // Seed and generate a random number between 1 and 100
    srand(time(0));
    int number=rand() % 100 + 1;
    
    int guess;
    cout<<"Guess a number between 1 and 100: ";

    while(true) {
        cin>>guess;

        if(guess<number) {
            cout<<"Too low! Try again: ";
        } else if(guess>number) {
            cout<<"Too high! Try again: ";
        } else{
            cout<<"Correct! You win." << endl;
            break;
        }
    }

    return 0;
}
