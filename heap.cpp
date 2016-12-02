/* Group: Charles Clayton and Amie Newman
 * Date Last Modified: 12/2/16
 * File: heap.cpp
 * Desc: Implementation of the custom heap class using a vector
 *       as the underlying container.
 */

#include "heap.h"

heap::heap(){
  buffer.push_back(0);
  //insert a zero into the first position because
  //our heap begins at buffer[i]
}

int heap::size(){
  return buffer.size()-1;
  //returns buffer.size()-1 because the actual size of
  //the heap is one less than the buffer because of the
  //leading zero in the buffer
}

void heap::insert(int value){
  buffer.push_back(value);
  //push new value to the back of the array to maintain
  //shape of the heap
  insert_helper(size());
  //resorts the heap by comparing children and parents
}

void heap::insert_helper(int index){
  int temp;
  //temporary variable for swapping
  if(index > 1){
    //nothing meaningful to sort at 1 or 0
    if(buffer[index] > buffer[index/2]){
      //buffer[index] > than its parent
      temp = buffer[index];
      buffer[index] = buffer[index/2];
      buffer[index/2] = temp;
      insert_helper(index/2);
      //recursive to call to the parent
    }
  }
}

void heap::remove_max(){
  int temp;
  //temporary variable for swapping
  temp = buffer[1];
  buffer[1] = buffer[size()];
  buffer[size()] = temp;
  buffer.pop_back();
  //pop last element in buffer to remove it and
  //decrement size of the buffer
  remove_helper(1);
  //resorts heap beginning at the top
}

void heap::remove_helper(int index){
  int temp;
  //temporary variable for swapping
  if(index > size()){
    //exit case for recursion
    return;
  }
  else{
    if(buffer[index] < buffer[index*2] && buffer[index] > buffer[index*2+1]){
      //less than left child and greater than right
      if(index*2 <= size()){
	//ensure location to swap is valid
	temp = buffer[index];
	buffer[index] = buffer[index*2];
	buffer[index*2] = temp;
	remove_helper(index+1);
	//recursive call to sort element at index+1
      }
    }
    else if(buffer[index] < buffer[index*2+1] && buffer[index] > buffer[index*2]){
      //less than right child and greater then left
      if(index*2+1 <= size()){
	//ensure location to swap is valid
	temp = buffer[index];
	buffer[index] = buffer[index*2+1];
	buffer[index*2+1] = temp;
	remove_helper(index+1);
	//recursive call to sort element at index+1
      }
    }
    else if(buffer[index] < buffer[index*2+1] && buffer[index] < buffer[index*2]){
      //less than both children
      if(buffer[index*2] > buffer[index*2+1]){
	//left child greater than right
	if(index*2 <= size()){
	  //ensure location to swap is valid
	  temp = buffer[index];
	  buffer[index] = buffer[index*2];
	  buffer[index*2] = temp;
	  remove_helper(index+1);
	  //recursive call to sort element at index+1
	}
      }
      else if(buffer[index*2] < buffer[index*2+1]){
	//right greater than left
	if(index*2+1 <= size()){
	  //ensure location to swap is valid
	  temp = buffer[index];
	  buffer[index] = buffer[index*2+1];
	  buffer[index*2+1] = temp;
	  remove_helper(index+1);
	  //recursive call to sort element at index+1
	}
      }
      else{
	//left == right
	if(index*2+1 <= size()){
	  //ensure location to swap is valid
	  temp = buffer[index];
	  buffer[index] = buffer[index*2+1];
	  buffer[index*2+1] = temp;
	  remove_helper(index+1);
	  //recursive call to sort element at index+1
	}
      }
    }
  }
}

int heap::max(){
  return buffer[1];
  //maximal element is at position 1
}

void heap::print(){
  for(unsigned int i = 1; i < buffer.size(); i++){
    cout << buffer[i] << endl;
  }
  //iteratively print the contents of the heap
}
