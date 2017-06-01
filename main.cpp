#include "plant.h"

 int main()
 {

  Plant a (100,"Carrot","Root", true);

  cout << a.getName() << endl;

  a.setName("potato");

  cout << a.getName() << endl;

  return 0;
 }

