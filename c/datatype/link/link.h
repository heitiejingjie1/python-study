#ifndef _LINK_H
  struct Node;
  typedef struct Node *ptrToNode;
  typedef struct Node *list;
  typedef struct Node *position;

  list makeEmpty(list l);
  int isEmpty(list l);
  int isLast(position p, list l);
  position find(int data, list l);
  void deleteData(int data, list l);
  position findPrevious(int data, list l);
  void insert(int data, list l, position p);
  void deleteList(list l);
  position header(list l);
  position first(list l);
  position advance(position l);
  int retrieve(position p);
#endif /*_LINK_H*/

struct Node{
  int data;
  position next;
};

