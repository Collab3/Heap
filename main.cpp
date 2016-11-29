#include "heap.h"

int main() {
  heap h;

  for(int i = 0; i < 10; i++){
    h.insert(rand()%100);
  }

  h.print();

return 0; 
}
