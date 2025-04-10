#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int T;

typedef struct node
{
    T value;
    struct node *next;
} Node, *TList;

TList createList(T value)
{
    TList result = malloc(sizeof(struct node));
    if (result == NULL)
    {
        return result;
    }
    result->value = value;
    result->next = NULL;
    return result;
}

int deleteFirstDoubleElementRecursive(TList list)
{
    if (list == NULL)
    {
        return 0;
    }

    if (list->next == NULL)
    {
        return 0;
    }

    TList current = list->next;
    while (current != NULL)
    {
        if (list->value == current->value)
        {
            list->value = list->next->value;
            TList temp = list->next;
            list->next = list->next->next;
            free(temp);
            return 1;
        }
        current = current->next;
    }

    return deleteFirstDoubleElementRecursive(list->next);
}

int main(void)
{
    TList list = createList(1);
    list->next = createList(2);
    list->next->next = createList(3);
    list->next->next->next = createList(2);
    list->next->next->next->next = createList(4);
    list->next->next->next->next->next = createList(5);

    printf("Inainte:\n");
    TList current = list;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    int result = deleteFirstDoubleElementRecursive(list);
    if (result)
    {
        printf("Dupa:\n");
        current = list;
        while (current != NULL)
        {
            printf("%d ", current->value);
            current = current->next;
        }
        printf("\n");
    }
    return 0;
}
