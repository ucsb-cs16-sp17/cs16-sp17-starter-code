#ifndef LINKEDLISTFUNCS_H 
#define  LINKEDLISTFUNCS_H
#include "linkedList.h"
#include <algorithm>
#include <climits>
#include <string>
#include <string>
using std::string;

// the new list is new storage allocated on the heap
// it is the responsibility of the caller to eventually free that storage

LinkedList * arrayToLinkedList(int array[], int size); 

// free up every node on this linked list

void freeLinkedList(LinkedList * list);

string linkedListToString(LinkedList * list);

void addIntToEndOfList(LinkedList *list, int value);

void addIntToStartOfList(LinkedList *list, int value);

//Precondition: A pointer to a LinkedList object created on the heap
//Postcondition: Delete all occurrences of nodes with the given value
//Use an iterative solution (loops)
void deleteNodeIteratively(LinkedList *list, int value);

//Precondition: A pointer to a LinkedList object created on the heap
//Postcondition: Delete all occurrences of nodes with the given value by
//calling the helper function deleteNodeRecursivelyHelper
void deleteNodeRecursively(LinkedList *list, int value);

//Precondition: A pointer to the first node in the LinkedList
//Postcondition: Delete all occurrences of nodes with the given value
//using a recursive solution and returns the new "head" of the linked-list
Node* deleteNodeRecursivelyHelper(Node *head, int value);

//Precondition: A pointer to a LinkedList object created on the heap that
//contains all nodes in sorted (ascending) order. The list may be empty. 
//The list may have multiple copies of the same element
//Postcondition: Insert a node with the given value at the appropriate
//location in the list, so that the new list also contains nodes in sorted
//(ascending) order. The list may have multiple copies of the same element 
void insertNodeToSortedList(LinkedList *list, int value);
#endif //  LINKEDLISTFUNCS_H
