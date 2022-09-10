#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include"func.h"
#define COUNT 3

typedef struct node {
    uint64_t data;
    struct node* next;
} node_t;

int main()
{
    node_t n1;
    node_t n2;
    node_t n3;

    n1.data = rand();
    n2.data = rand();
    n3.data = rand();
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    return 0;
}