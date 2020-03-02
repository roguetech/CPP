#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
  string name;
  int xp;

  void performance();
};

int main(){
  Player patrick;

  vector <Player> player_vec {patrick};

  cout << player_vec << endl;
  cout << "finished" << endl;

  return 0;
}
