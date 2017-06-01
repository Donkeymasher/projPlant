
#include "plant.h"

 Plant::Plant(int waterLevel, string name, string type, bool living)
 {
  m_waterLevel = waterLevel;
  m_name = name;
  m_type = type;
  m_living = living;
 }

 void Plant::waterPlant()
 {
  m_waterLevel = 100;
 }

 string Plant::getName()
 {
  return m_name;
 }

 void Plant::setName(string name)
 {
  m_name = name;
 }

 bool Plant::getLiving()
 {
  return m_living;
 }

 void Plant::setLiving(bool living)
 {
  m_living = living;
 }

 int Plant::getWaterLevel()
 {
  return m_waterLevel;
 }

 void Plant::setWaterLevel(int waterLevel) 
 {
  m_waterLevel = waterLevel;
 }

 void Plant::printName()
 {
  cout << m_name << endl;
 }

