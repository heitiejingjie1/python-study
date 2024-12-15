#include "link.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int isEmpty(list l)
{
  return l->next == NULL;
}

int isLast(position p, list l)
{
  return l->next == NULL;
}

position find(int data, list l)
{
  position p;

  p = l->next;
  while (p!= NULL&& p->data != data) {
    p = p->next;
  }
  return p;
}

position findPrevious(int data, list l)
{
  position p;

  p = l;
  while (p->next != NULL && p->next->data != data) {
    p = p->next;
  }
  return p;
}

void deleteData(int data, list l)
{
  position p;
  position temp;

  p = findPrevious(data, l);

  if (!isLast(p, l)) {
    temp = p->next;
    p->next = p->next->next;
    free(temp);
  }
}

void insert(int data, list l, position p)
{
  position temp;

  temp = malloc(sizeof(struct Node));
  
  if (temp == NULL) {
    printf("out of space");
  }

  temp->data = data;
  temp->next = p->next;
  p->next = temp;

}
