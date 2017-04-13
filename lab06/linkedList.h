#ifndef NODE_H
#define NODE_H

struct Node {
  int data;
  Node *next;
};

typedef struct Node Node;

struct LinkedList {
  Node *head;
  Node *tail;
};

typedef struct LinkedList LinkedList;
#endif // NODE_H
