/* Group: Charles Clayton and Amie Newman
 * Date Last Modified: 12/2/16
 * File: main.cpp
 * Desc: Driver for testing the functionality of the custom
 *       heap class.
 */

#include "heap.h"
#include <stdlib.h>
#include <time.h>

int main() {
  heap h;

  for(int i=0; i<10; i++)
    h.insert(rand()%100);
  //populate the heap with ten random digits less than 100

  cout << "Size: " << h.size() << endl;
  //print size of current heap
  
  h.print();
  //print current heap
  
  cout << "\n\n\n" << endl;
  
  while(h.size() > 0) {
    cout << h.max() << endl;
    h.remove_max();
  }
  //print the the max and then remove until size is 0
  //should print the elements in order from greatest
  //to least
  
return 0; 
}
