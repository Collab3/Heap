#include "heap.h"

int main() {
  heap h;

  h.insert(6);
  h.insert(3);
  h.insert(24);
  h.insert(5);
  h.insert(33);

  // for(int i=0; i<10; i++)
  //   h.insert(rand()%100);

  h.print();
  
  // while(h.size() > 0) {
  //   cout << h.max() << endl;
  //   h.remove_max();
  // }
  
    //  h.print();

return 0; 
}
