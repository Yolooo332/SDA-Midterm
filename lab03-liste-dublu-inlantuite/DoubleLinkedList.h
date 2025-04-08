#ifndef _DOUBLE_LINKED_LIST_H_
#define _DOUBLE_LINKED_LIST_H_
#include <stdlib.h>
/*
  IMPORTANT!

  As we stick to pure C, we cannot use templates. We will just asume
  some type T was previously defined.
*/

// -----------------------------------------------------------------------------
/**
 *  Linked list representation -- R2 Curs2 (Slide 8)
 */
typedef struct ListNode
{
    Item elem;             // Stored node value
    struct ListNode *next; // link to next node
    struct ListNode *prev; // link to prev node
} ListNode;

/**
 *  Double linked list representation -- desen Curs 3 (Slide 19)
 */
typedef struct List
{
    ListNode *first; // link to the first node
    ListNode *last;  // link to the last node
} List;
// -----------------------------------------------------------------------------

/**
 * Create a new node
 *  [input]: Item
 *  [output]: List*
 */
ListNode *createNode(Item elem)
{
    // TODO: Cerinta 1a

    return NULL;
}

/**
 * Create a new (empty)  list  -- Silde-urile 13/14 Curs 2
 *  [input]: None
 *  [output]: List*
 */
List *createList(void)
{
    // TODO: Cerinta 1a

    return NULL;
}
// -----------------------------------------------------------------------------

/**
 * Determines if the list is empty
 *  [input]: List*
 *  [output]: 1 - empty/ 0 - not empty
 */
int isEmpty(List *list)
{
    // TODO: Cerinta 1b
    return 0;
}
// -----------------------------------------------------------------------------

/**
 * Determines if a list contains a specified element
 *  [input]: List*, Item
 *  [output]: int (1 - contains/ 0 - not contains)
 */
int contains(List *list, Item elem)
{
    // TDOO: Cerinta 1c

    return 0;
}
// -----------------------------------------------------------------------------

/**
 * Insert a new element in the list at the specified position.
 * Note: Position numbering starts with the position at index zero
 *  [input]: List*, Item, int
 *  [output]: void
 */
void insertAt(List *list, Item elem, int pos)
{

    // Guard against young player errors
    if (list == NULL)
        return;

    // TODO: Cerinta 1d
}
// -----------------------------------------------------------------------------

/**
 * Delete the first element instance form a list.
 *  [input]: List*, Item
 *  [output]: void
 */
void deleteOnce(List *list, Item elem)
{
    // Guard against young player errors
    if (list == NULL)
        return;

    // TODO: Cerinta 1e
}
// -----------------------------------------------------------------------------

/**
 * Compute list length
 *  [input]: List*
 *  [output]: int
 */
int length(List *list)
{
    // Guard against young player errors
    if (list == NULL)
        return 0;

    // TODO: Cerinta 1f
    return 0;
}
// -----------------------------------------------------------------------------

/**
 * Destroy a list.
 *  [input]: List*
 *  [output]: void
 */
List *destroyList(List *list)
{
    // Guard against young player errors
    if (list == NULL)
        return NULL;

    // TODO: Cerinta 1g
    return NULL;
}
// -----------------------------------------------------------------------------

#endif //_DOUBLE_LINKED_LIST_H_
