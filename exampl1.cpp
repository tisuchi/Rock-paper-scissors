#include<iostream>
#include <cstdlib>  //to use rand function
#include <ctime>  // to use time as the seed for rand
using namespace std;
 
 
int main(){
    int number,usernumber;
    char repeat,userpick;
    int userscore,compscore,value;
    value=0;
    userscore=0;
    compscore=0;
     
     
 
    do{
         
         
        srand(time(0));
        number = 1 + (rand() % 3) ;
         
        userscore=userscore+value;
        compscore=compscore+value;
        cout<<"\nYour Score: "<<userscore<<endl;
        cout<<"Computers Score: "<<compscore<<endl;
         
        cout<<"Pick either (R)ock,(P)aper, or (S)cissors. \n";
        cin>>userpick;
 
        if(userpick=='r'|| userpick=='R'){
            usernumber=1;
            cout<<"so you picked rock";}
        if(userpick=='p'|| userpick=='P'){
            usernumber=2;
            cout<<"so you picked paper";}
        if(userpick=='s'|| userpick=='S'){
            usernumber=3;
            cout<<"so you picked scissors";}
     
 
        if(usernumber==number){
            cout<<"\nuser picked "<<userpick<<" and the computer picked the same thing, so it is a draw";
            userscore++;
            compscore++;}
        if(usernumber==1 && number==2){
            cout<<"\npaper covers rock, you lose";
            compscore++;}
        if(usernumber==1 && number==3){
            cout<<"\nrock beats scissors, you win";
            userscore++;}
        if(usernumber==2 && number==1){
            cout<<"\npaper covers rock, you win";
            userscore++;}
        if(usernumber==2 && number==3){
            cout<<"\nscissors cuts paper, you lose";
            compscore++;}
        if(usernumber==3 && number==1){
            cout<<"\nrock beats scissors, you lose";
            compscore++;}
        if(usernumber==3 && number==2){
            cout<<"\nscissors cut paper, you win";
            userscore++;}
 
        cout<<"\nYour Score: "<<userscore<<endl;
        cout<<"Computers Score: "<<compscore<<endl;
 
         if (userscore==3 )
         {
        	cout<<"USER WINS"<<endl ;
        	exit(0);
         }
         if(compscore==3)
         {
        	cout<<"COMPUTER WINS"<<endl ;
        	exit(0);
         }
        if(userscore==compscore==3)
        {
            cout<<"GAME DRAWS"<<endl ;
            exit(0);
        }
                 
        cout<<"\ndo you want to repeat<y or n>?\n";
        cin>>repeat;
 
 
        system("cls");
                    
                    
     }while(repeat=='y'|| repeat=='Y');
     
    if(repeat=='n'|| repeat=='N'){
        if(userscore>compscore)
            cout<<"you win"<<endl;
        if(userscore<compscore)
            cout<<"you lose"<<endl;
    }
     
 
     system("pause");
     return 0;
}
