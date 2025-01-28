/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include <iostream>
#include "split.h"

void printList(Node* head) {
  while (head != nullptr) {
    std::cout << head->value << " -> ";
    head = head->next;
  }

  std::cout << "nullptr" << std::endl;
}

int main(int argc, char* argv[])
{
  Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};

  Node* odds = nullptr;
  Node* evens = nullptr;

  split(head, odds, evens);

  std::cout << "Odds: ";
  printList(odds);

  std::cout << "Evens: ";
  printList(evens);

  delete odds->next->next;
  delete odds ->next;
  delete odds;
  delete evens ->next;
  delete evens;
  
  return 0;
}
