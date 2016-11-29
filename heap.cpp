#include "heap.h"

heap::heap(){
  buffer.reserve(2);
  buffer[0] = 0;
}

int heap::size(){
  return buffer.size()-1;
}

void heap::insert(int value){
  buffer.push_back(value);
  insert_helper(size());
}

void heap::insert_helper(int index){
  int parent = buffer[index/2];
  int temp;
  if(buffer[index] == 0 ||buffer[index] == 1){
    return;
  }
  if(parent < buffer[index]){ //parent is less than inserted value
    temp = parent;
    parent = buffer[index];
    buffer[index] = temp;
    insert_helper(index/2);
  }
}

void heap::remove_max(){

}

int heap::max(){
  return 0;
}

void heap::print(){
  for(unsigned int i = 1; i < buffer.size(); i++){
    cout << buffer[i] << endl;
  }
}
