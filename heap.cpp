#include "heap.h"

heap::heap(){
  buffer.push_back(0);
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
  if(index > 1){
    if(buffer[index] > buffer[index/2]){ //buffer[index] > than its parent
      temp = buffer[index];
      buffer[index] = buffer[index/2];
      buffer[index/2] = temp;
      insert_helper(index/2);
    }
  }
}

void heap::remove_max(){
  int temp;
  temp = buffer[1];
  buffer[1] = buffer[size()];
  buffer[size()] = temp;
  buffer.pop_back();
  remove_helper(1);
}

void heap::remove_helper(int index){
  int temp;
  if(index > size()){
    return;
  }
  else{
    if(buffer[index] < buffer[index*2] && buffer[index] > buffer[index*2+1]){
      temp = buffer[index];
      buffer[index] = buffer[index*2];
      buffer[index*2] = temp;
      remove_helper(index+1);
      insert_helper(index);
    }
    else if(buffer[index] < buffer[index*2+1] && buffer[index] > buffer[index*2]){
      temp = buffer[index];
      buffer[index] = buffer[index*2+1];
      buffer[index*2+1] = temp;
      remove_helper(index+1);
      insert_helper(index);
    }
    else if(buffer[index] < buffer[index*2+1
  }
  
}

int heap::max(){
  return buffer[1];
}

void heap::print(){
  for(unsigned int i = 1; i < buffer.size(); i++){
    cout << buffer[i] << endl;
  }
}
