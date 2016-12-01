
#ifndef HEAP_H
#define HEAP_H

#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<time.h>

using namespace std;

class heap{
 private:
    vector<int> buffer;
 public:
  heap();
  int size();
  void insert(int value);
  void insert_helper(int index);
  void remove_helper(int index);
  void remove_max();
  int max();
  void print();
};

#endif //heap.h
