#include <stdio.h>
#include <stdlib.h>

struct LinkedList
{
    int value;
    struct LinkedList* next;
};
struct LinkedList* insertInListOnHead(struct LinkedList* inputList, int entry)
{
   struct LinkedList* newElement;
   newElement->value = entry;
   newElement->next = NULL;
}
struct LinkedList* insertInListOnTail(struct LinkedList* inputList, int entry)
{

}
int main()
{
    printf("Hello world!\n");
    return 0;
}
