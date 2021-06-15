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
   //newElement->next = NULL;
   newElement->next = inputList;
   inputList = newElement;
   return inputList;
   /*if(inputList == NULL)
   {
       inputList = newElement;
       return inputList;
   }
   else
   {
       newElement->next = inputList;
       inputList = newElement;
       return inputList;
   }*/
}
struct LinkedList* insertInListOnTail(struct LinkedList* inputList, int entry)
{

}
int main()
{
    struct LinkedList* myList;
    myList = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    myList = NULL;
    //printf("%d\n", myList->value);
    myList = insertInListOnHead(myList, 5);
    //printf("%d\n", myList->value);
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
    /*printf("%d\n", myList->value);
    myList = myList->next;
    printf("%d\n", myList->value);
    myList = myList->next;
    if(myList == NULL)
    {
        printf("YES");
    }*/

    return 0;
}
