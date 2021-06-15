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
   newElement->next = inputList;
   inputList = newElement;
   return inputList;
}
struct LinkedList* insertInListOnTail(struct LinkedList* inputList, int entry)
{
    struct LinkedList* newElement;
    newElement = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    newElement->value = entry;
    newElement->next = NULL;
    struct LinkedList* auxiliary;
    auxiliary = inputList;
    if(auxiliary != NULL){
            while(auxiliary->next != NULL)
            {
                auxiliary = auxiliary->next;
            }
            auxiliary->next = newElement;
            return inputList;
            }
    else{
            inputList = newElement;
            return inputList;
    }
}
int main()
{
    struct LinkedList* myList;
    myList = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    myList = NULL;
    myList = insertInListOnHead(myList, 5);
    myList = insertInListOnHead(myList, 7);
    myList = insertInListOnHead(myList, 8);
    myList = insertInListOnHead(myList, 21);
    myList = insertInListOnHead(myList, 10);
    while(true)
    {
        printf("%d\n", myList->value);
        myList = myList->next;
        if(myList == NULL)
            {
                break;
            }
    }
    printf("Now, another order:\n");
    struct LinkedList* mySecondList;
    mySecondList = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    mySecondList = NULL;
    mySecondList = insertInListOnTail(mySecondList, 5);
    mySecondList = insertInListOnTail(mySecondList, 7);
    mySecondList = insertInListOnTail(mySecondList, 8);
    mySecondList = insertInListOnTail(mySecondList, 21);
    mySecondList = insertInListOnTail(mySecondList, 10);
    while(true)
    {
        printf("%d\n", mySecondList->value);
        mySecondList = mySecondList->next;
        if(mySecondList == NULL)
            {
                break;
            }
    }
    return 0;
}
