#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct LinkedList
{
    int value;
    struct LinkedList* next;
};
struct LinkedList* insertInListOnHead(struct LinkedList* inputList, int entry)
{
   struct LinkedList* newElement;
   newElement = (struct LinkedList*) malloc(sizeof(struct LinkedList));
   newElement->value = entry;
   newElement->next = NULL;
   if(inputList == NULL)
   {
       inputList = newElement;
       return inputList;
   }
   else
   {
       newElement->next = inputList;
       inputList = newElement;
       return inputList;
   }
}
struct LinkedList* insertInListOnTail(struct LinkedList* inputList, int entry)
{

}
int main()
{
    struct LinkedList* myList;
    myList = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    myList = insertInListOnHead(myList, 5);
    myList = insertInListOnHead(myList, 7);
    myList = insertInListOnHead(myList, 8);

    printf("%d\n", myList->value);
    myList = myList->next;
    printf("%d\n", myList->value);
    myList = myList->next;
    printf("%d\n", myList->value);
    myList = myList->next;
    if (myList == NULL){
    printf("%d\n", myList->value);}

    return 0;
}
