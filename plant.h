#include <iostream>
#include <string>
using namespace std;

 class Plant
 {
  int m_waterLevel;
  string m_name;
  string m_type;
  int tick;
  bool m_living;
  void useWater();
  
  public:
  Plant(int waterLevel, string name, string type, bool living);
  void waterPlant();

  //getters and setters 
  string getName();
  void setName(string name);

  bool getLiving();
  void setLiving(bool living);

  int getWaterLevel();
  void setWaterLevel(int waterLevel);

  void printName();
 };

