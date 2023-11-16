#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void gamelogic(string s)
{

    int target=40 + (rand()%20)+1;
    string name=s;
    cout<<s<<" Your Target is "<<target<<endl;

  

    int run;

    int sum=0,wicket=0;
    cout<<"PUT number between 1-6\n\nYou will be given 3 wickets and 20 balls to complete the target\n\nIf your number and computer generated number is same then one wicket falls otherwise run will be added\n\nGiving invalid input will result in wicket fall\n"<<endl;
   
    for(int i=1;i<=20;i++){
        
        int number=(rand()%6)+1;
        cin>>run;
      
        if(run<1 || run>6){
            wicket++;
        }
        else if(run!=number){
            sum+=run;
        }
        else{
            wicket++;
        }
        
        cout<<sum<<" runs for "<<wicket<<" wickets"<<" after "<<i<<" balls\n\n";
        if(wicket==3||sum>=target){
            break;
        }
    }
    cout<<sum<<" runs for "<<wicket<<" wickets\n\n";
    if(sum>=target){
        cout<<"Congratulations! "<<s<<" You Win!!! Its been a brilliant run chase\n\n press 1 to play again or 0 to exit now\n\n";
    }
    else{
        cout<<"oops you lost!\n\n Please try again\n\n press 1 to play again or 0 to exit now\n\n";
    }

}
int main()
{
    srand((unsigned int) time(0));
   

    string name;

    cout<<"Player name: ";
    getline(cin,name);

    gamelogic(name);

    while(true)
    {
        int k;
        cin>>k;
           
            if(k==1)
            {
                gamelogic(name);
            }
            else
            {
                cout<<"The moon is beautiful isn't it?";
                break;
            }
    }

}
