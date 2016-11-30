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
  int temp;
  if(buffer[index] == 0 || buffer[index] == 1){
    return;
  }
  if(buffer[index] >= buffer[index/2]){ //buffer[index] > than its parent
    temp = buffer[index];
    buffer[index] = buffer[index/2];
    buffer[index/2] = temp;
    cout << "swap " << temp << " with " << buffer[index] << endl;
    insert_helper(buffer[index]);
  }
}

void heap::remove_max(){

}

int heap::max(){
  return buffer[1];
}

void heap::print(){
  for(unsigned int i = 1; i < buffer.size(); i++){
    cout << buffer[i] << endl;
  }
}
