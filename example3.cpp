#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>


using namespace std;
// starting main function


int main(){
    
    
    // set up my variables for scores
    int win = 0;
    int tie = 0;
    int lose = 0;
    
    
    
    // start of game loop, this loop will continue until finish 3 games as a tournament
    for(int i=0; i<3; i++){
    
            int choice;
            
            
            //separator
            cout <<"====================================================== \n";
            
            
            // Ask the player to choose Rock, Paper, Scissors
            cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
            cin >> choice;
            
            
            // gets a random number between 1 and 3 and tell the player what was chosen
            int ai = rand() % 3 + 1;
            cout <<  "The computer chose: " << ai << endl;
            
            
            // There are 9 possible out comes 3 wins 3 ties and 3 losses.
            /*
            |----------------------------------------------------------------
            | USING SWITCH STATEMENT
            |----------------------------------------------------------------
            | in switch statement, I am passing USER CHOICE 
            */
            
            switch(choice){
                  
                   case 1:
                        {
                                   
                          //using if-else condition
                           if(ai == 1){
                                 cout << "Rock meets Rock its a tie!" << endl;
                                 tie++;
                                 }
                            else if(ai== 2){
                                 cout << "Rock is covered by Paper the computer wins!." << endl;
                                 lose++;
                                 }
                            else if(ai == 3){
                                 cout << "Rock crushes Scissors you win!" << endl;
                                 win++;
                                 }
                        }
                        break;
                        
                   case 2:
                        {
                            //using if-else condition
                            if(ai == 1){
                                 cout << "Paper covers Rock you win!" << endl;
                                 win++;
                                 }
                            else if(ai == 2){
                                 cout << "Paper meets Paper its a tie!" << endl;
                                 tie++;
                                 }
                            else if(ai == 3){
                                 cout << "Paper is cut by Scissors the computer wins!" << endl;
                                 lose++;
                                 }
                        }
                        break;
                        
                        
                    case 3:
                        {
                            //using if-else condition
                            if(ai == 1){
                                 cout << "Scissors are crushed by Rock computer wins!" << endl;
                                 lose++;
                                 }
                            else if(ai == 2){
                                 cout << "Scissors cuts Paper you win!" << endl;
                                 win++;
                                 }
                            else if(ai == 3){
                                 cout << "Scissors meet Scissors its a tie!" << endl;
                                 tie++;
                            }
                        }
                        break;
                        
                        
                    //if any undected input has been provide, then following code will prevent that.
                    default:
                         cout << "You didn't select 1, 2, or 3" << endl; 
                           
            } //end switch
            
            
            
            
            
            
             // displays your score so far and asks if you want to play again then clears screen
             cout << "Wins: " << win << endl;
             cout << "Ties:" << tie << endl;
             cout << "Losses:" << lose << endl;
             
             
             
             
        
  
                 
    } //end for loop

    
    system("pause");
    return 0; 
}
