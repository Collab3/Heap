#include "heap.h"

int main() {
  heap h;

  // h.insert(8);
  // h.insert(3);
  // h.insert(24);
  // h.insert(5);
  // h.insert(33);

  // cout <<"size: " <<  h.size() << endl;

  for(int i=0; i<10; i++)
    h.insert(rand()%100);

  h.print();


  // h.remove_max();
  cout << "\n\n\n" << endl;
  while(h.size() > 0) {
    cout << "size(): " << h.size() << endl;
    cout << h.max() << endl;
    h.remove_max();
  }

  cout << "\n\n\n" << endl;
  h.print();
  

return 0; 
}
