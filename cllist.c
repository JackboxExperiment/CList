#include <stdio.h>
#include <stdlib.h>

#include "cllist.h"


void print_list(struct node * list) {
  struct node * curr = list;
  printf( "[ " );
  while (curr) { //while current node is not NULL
    printf("Node data: %d ", curr -> i); //print value
    curr = curr ->next; //print next node value
  }
  printf( "]\n" );
}
struct node * insert_front(struct node * list, int val) {
  struct node * new = malloc( sizeof( struct node ) ); //allocate a temp node

  //assign each value of node
  new->i = val;
  new->next = list;

  return new;
}
struct node * free_list(struct node * list) {
  struct node * curr = list;

  //as long as not NULL
  while (list) {
    curr = curr->next;
    free(curr);

    list = curr;
  }

  return list;
}
