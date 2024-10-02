#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {

assert(l != NULL);
int length = 0;
node *current = l;

while(current != NULL)
{
  length++;
  current = current->next;
}

return length-1; 

}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  assert(l != NULL);
  node *p = l;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
  assert(l !=NULL);
  node *p = l;
  int max_val = p->next->data; // Initialise the largest value as the value in the first element

  while (p != NULL) // Iterate as long as p != NULL. means to the last node included
  {
    if (p->data > max_val) // if the value of the current element is greater than max_val. Opdate it
    {
      max_val = p->data;
    }
    p = p->next; // Move to the next node
  }
  
  return max_val; // Return largest value
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  return 0;
}

#endif