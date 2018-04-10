#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
  int periods;
  int teams;
  vector <vector <int> > scoreboard;
  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
   //make scoreboard and fill it with zeros
    
    
    scoreboard.resize(teams);
    cout<<"SCOREBOARD"<<endl;
   for(int rows = 0; rows < scoreboard.size(); rows++)
   {
      scoreboard[rows].resize(periods);
      cout<<"Player "<<rows + 1<<":";

     for(int columns = 0; columns < scoreboard[rows].size(); columns++)
     {
         scoreboard[rows][columns] = 0;
         cout<<scoreboard[rows][columns];
         cout<<"|";
     }
       cout<<" "<<endl;     

   }

  
   //once created, display the scoreboard
  }
  return 0;
}
