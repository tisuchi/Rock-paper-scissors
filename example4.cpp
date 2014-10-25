#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
    
    
    // set up my variables for scores
    int randVal;
	int userChoice, compChoice;
    
    
    int win = 0;
    int tie = 0;
    int lose = 0;
    
    
    
    // start of game loop, this loop will continue until finish 3 games as a tournament
    for(int i=0; i<3; i++){
    
            int choice;
            
            
            //separator
            cout <<"====================================================== \n";
            
            
            // IMPORTANT*** I had to change the order Step 1 and 2 because of if I show computer choise first, meanting, user can easily win the match. The it will looks like a flat game where user will always will
            
            //Step 1. Prompt user to enter his choice (rock, paper or scissors)
            cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
            cin >> userChoice;
            
            
            
            
            // Step 2. Generate random number in the range of 1 through 3
        	srand(time(0));
        	randVal=rand()%3+1; // this expression generates a random number from 1 to 3 (1 for rock, 2 for scissors, 3 for paper)
                    
            cout << "The computer chose: " << randVal << endl;
            
            
            
            
            
            //Step 3. Assign the value of computer's choice based on randVal (see Step 1 above). Use the switch statement
	        //Step 4. Display both choices
	        

            /*
            |----------------------------------------------------------------
            | USING SWITCH STATEMENT
            |----------------------------------------------------------------
            | in switch statement, I am passing USER CHOICE
            | here are 9 possible out comes 3 wins 3 ties and 3 losses.
            */
            
            switch(userChoice){
                  
                   case 1:
                        {
                                   
                          //using if-else condition
                           if(randVal == 1){
                                 cout << "Rock meets Rock its a tie!" << endl;
                                 tie++;
                                 }
                            else if(randVal== 2){
                                 cout << "Rock is covered by Paper the computer wins!." << endl;
                                 lose++;
                                 }
                            else if(randVal == 3){
                                 cout << "Rock crushes Scissors you win!" << endl;
                                 win++;
                                 }
                        }
                        break;
                        
                   case 2:
                        {
                            //using if-else condition
                            if(randVal == 1){
                                 cout << "Paper covers Rock you win!" << endl;
                                 win++;
                                 }
                            else if(randVal == 2){
                                 cout << "Paper meets Paper its a tie!" << endl;
                                 tie++;
                                 }
                            else if(randVal == 3){
                                 cout << "Paper is cut by Scissors the computer wins!" << endl;
                                 lose++;
                                 }
                        }
                        break;
                        
                        
                    case 3:
                        {
                            //using if-else condition
                            if(randVal == 1){
                                 cout << "Scissors are crushed by Rock computer wins!" << endl;
                                 lose++;
                                 }
                            else if(randVal == 2){
                                 cout << "Scissors cuts Paper you win!" << endl;
                                 win++;
                                 }
                            else if(randVal == 3){
                                 cout << "Scissors meet Scissors its a tie!" << endl;
                                 tie++;
                            }
                        }
                        break;
                        
                        
                    //if any undected input has been provide, then following code will prevent that.
                    default:
                         cout << "You didn't select 1, 2, or 3" << endl; 
                           
            } //end switch
            
            
            
            
            
            
             //Step 5. Determine the winner and siplay the result 
             cout << "Wins: " << win << endl;
             cout << "Ties:" << tie << endl;
             cout << "Losses:" << lose << endl;
             
             
             
             
        
  
                 
    } //end for loop

    
    system("pause");
    return 0; 
}
