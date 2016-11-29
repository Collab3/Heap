#ifndef HEAP_H
#define HEAP_H

#include<iostream>
#include<string>


class heap{
 private:
  const static int root = 1;
  int k; //match class definitions
  vector<int> buffer;
 public:
  heap();
  int size();
  void insert(int value);
  void insert_helper(int value);
  void remove_max();
  int max();
  void print();
};

#endif //heap.h
