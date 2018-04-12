#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

void printScoreboard(vector < vector <int> >);
int randomBetween(int, int);


int main()
{
  srand((int) time(0));

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
   for(int rows = 0; rows < scoreboard.size(); rows++)
   {
      scoreboard[rows].resize(periods);
    

     for(int columns = 0; columns < scoreboard[rows].size(); columns++)
     {
         scoreboard[rows][columns] = 0;
         
        
       
     }

   }

  
   //once created, display the scoreboard
   printScoreboard(scoreboard);
  }
  
  for(int rows = 0; rows < scoreboard.size(); rows++)
  {
    for(int columns = 0; columns < scoreboard[rows].size(); columns++)
    {
     
      scoreboard[rows][columns] = randomBetween(5,5);

    }

  }

   printScoreboard(scoreboard);

  return 0;
}

//definitions

void printScoreboard(vector < vector <int> > grid)
{

  cout<<"SCOREBOARD"<<endl;

  for(int rows = 0; rows < grid.size(); rows++)
  {
    cout<<"Player "<<rows + 1<<": ";

    for(int columns = 0; columns < grid[rows].size(); columns++)
    {
      
      cout<<grid[rows][columns];
      cout<<"|";
    }
    cout<<endl;

  }

}

int randomBetween(int first, int second)
{
 
 if (first > second)
 {
   return second + rand()%(first-second+1);

 }

 else if (first < second)
 {
   return first + rand()%(second-first+1);
 
 }

}

