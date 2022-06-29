/**
 * @file list.h
 * @author arisien (arisien@vivaldi.net)
 * @brief Structures and function definitions for a Linked List.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CIRCIOS_LIST_H
#define CIRCIOS_LIST_H

#include <stdlib.h>

/**
 * @brief Element of List structure.
 * 
 */
typedef struct _ListNode {
    struct _ListNode* prev;
    struct _ListNode* next;
    void* data;
} ListNode;

/**
 * @brief Data structure for unknown amount of elements.
 * 
 * Access to head, tail, and size of list.
 */
typedef struct _List {
    ListNode* head;
    ListNode* tail;
    size_t size;
} List;

/**
 * @brief Constructs a new Node from data.
 * 
 * @param data Data that will be stored.
 * @return ListNode* Pointer to the node.
 */
ListNode* listnode_construct (void* data);


/**
 * @brief Constructs a new List
 * 
 * @return List* Pointer to list.
 */
List* list_construct ();

/**
 * @brief Frees all Nodes and the List
 * 
 * @param list The list to destroy.
 */
void list_destroy (List* list);

/**
 * @brief Appends data to the tail of a List.
 * 
 * @param list The list to append to.
 * @param data Data to append.
 */
void list_add (List* list, void* data);

/**
 * @brief Gets data at a specific position from a List.
 * 
 * @param list List to search.
 * @param pos Position of data.
 * @return void* Requested data.
 */
void* list_get (List* list, size_t pos);

/**
 * @brief Removes data from a specific position of a List.
 * 
 * @param list The list to remove from.
 * @param pos The position to remove at.
 * @return void* Removed data.
 */
void* list_remove (List* list, size_t pos);

#endif