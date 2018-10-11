#include <stdio.h>
#include <stdlib.h>
#include "cllist.h"

int main() {

  struct node * head = malloc(sizeof(struct node));
  struct node * n1 = malloc(sizeof(struct node));
  struct node * tail = malloc(sizeof(struct node));
  print_list(head);
  print_list(tail);

  head -> i = 2;
  tail -> i = 7;
  head -> next = tail;
  tail -> next = NULL;
  
  print_list(head);
  print_list(tail);

  n1 = insert_front(n1, 20);
  print_list(n1);

  print_list(free_list(n1));
  return 0;
}
