/* Group: Charles Clayton and Amie Newman
 * Date Last Modified: 12/2/16
 * File: heap.h
 * Desc: Header file for custom heap class using a vector as the
 *       underlying container.
 */

#ifndef HEAP_H
#define HEAP_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class heap{
 private:
  vector<int> buffer;
  /*
   * Description:
   *    Container for the heap.
   */
  
 public:
  heap();
  /* Description:
   *    Default constructor.  Initializes first position
   *    to 0.
   *
   * Post-conditions:
   *    buffer[0] = 0
   */
  
  int size();
  /* Description:
   *    Returns the current number of elements in the heap.
   *
   * Return:
   *    Current size of heap
   */
  
  void insert(int value);
  /* Description:
   *    Use buffer.push_back() to insert new element to the end of
   *    the heap. Then calls insert_helper() on the size of the heap
   *    to resort the heap.
   *
   * Parameters:
   *    value - The item to be inserted into the heap.
   *
   * Postconditions:
   *    The element to be inserted is inserted and the heap is resorted.
   *
   * Notes:
   *    Calls a helper function.
   */

  void insert_helper(int index);
  /* Description:
   *    Recursively sorts the heap after inserting a new element to ensure
   *    that all children are less than their ancestors.
   *
   * Parameters:
   *    index - the location from which to begin sorting.
   *
   * Postconditions:
   *    Heap is sorted correctly.
   *
   * Notes:
   *    The recursive helper for insert().
   */

  void remove_helper(int index);
  /* Description:
   *    Recursively sorts the heap after removing the max element in the heap.
   *
   * Parameters:
   *    index - the location from which to sort the heap.
   *
   * Postconditions:
   *    Heap is sorted correctly.
   *
   * Notes:
   *    The recursive helper to remove_max().
   */
 
  void remove_max();
  /* Description:
   *    Remove the max element from the heap by swapping the first and last
   *    items in the buffer and using buffer.pop_back() to remove the last
   *    element. Then calls remove_helper() to sort the heap.
   *
   * Postconditions:
   *    Max element was removed and heap sorted correctly.
   *
   */

  int max();
  /* Description:
   *    Returns the current maximum element of the heap.
   *
   * Return:
   *    Current max of the heap
   */

  void print();
  /* Description:
   *    Print the current heap to the screen.
   *
   * Postconditions:
   *    Heap is printed.
   *
   */

};

#endif //heap.h
