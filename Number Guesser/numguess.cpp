#include<iostream>
#include<conio.h>
using namespace std;


class NumberGuess{

    public:
    void guessNumber(){

        
        int number = rand()%100;
        int guess;

        do{
            cout << "\n\nGuess a number : ";
            cin >> guess;

            if(guess<number){

                cout << "\n\nYour guess is too small" <<endl;
            }
            else if(guess>number){

                cout << "\n\nYour guess is too high" << endl;
            }
            else if(guess == number){
                
                cout << "\n\n\n\t\tCongratulations....!You guessed the correct answer.\n\n\n" << endl;
                getch();
                break;
            }

            
        }while(guess!=number);
    }
};
int main(){

    cout << "---------------------------------------------------------------------------------------------------" <<endl;
    
    cout << "\n\t\t\t Welcome to number guessing game\n" <<endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\n Press enter to play"<<endl;
    getch();
    system("cls");

    NumberGuess obj;
    obj.guessNumber();

    return 0;
}