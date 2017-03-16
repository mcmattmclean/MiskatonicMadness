#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include <string>

using std::string;
using std::vector;

class Player{
private:
  vector<string> bag {"Science Textbook", "Lucky Penny"};
  int sanity = 10;
  int health = 100;
  unsigned int maxBagSize = 5;
  bool tome = false;
  bool monster = false;
  bool papers = false;
  bool professor = false;
public:
  Player();
  void setHealth(int);
  void setSanity(int);
  int getHealth();
  int getSanity();

  vector<string>* getBag();
  bool addItem(string);
  void removeItem(string);

  void setTome(bool);
  void setMonster(bool);
  void setPapers(bool);
  void setProfessor(bool);
  bool hasTome();
  bool hasMonster();
  bool hasPapers();
  bool hasProfessor();
};

#endif
