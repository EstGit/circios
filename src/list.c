/**
 * @file list.c
 * @author arisien (arisien@vivaldi.net)
 * @brief Function implementations for a Linked List.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "list.h"

ListNode* listnode_construct (void* data) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

List* list_construct () {
    List* list = (List*) malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

void list_destroy (List* list) {
    ListNode* node = list->head;

    while (node != list->tail) {
        node = node->next;
        free(node->prev);
    }

    free(list->tail);
    free(list);
}

void list_add (List* list, void* data) {
    ListNode* node = listnode_construct(data);

    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    }

    else {
        list->tail->next = node;
        node->prev = list->tail;

        list->tail = node;    
    }
    
    list->size++;
}

void* list_get (List* list, size_t pos) {
    ListNode* node = list->head;
    for (int i = 0; i < pos; i++) {
        if (node->next == NULL) return NULL;
        node = node->next;
    }
    return node->data;
}

void* list_remove (List* list, size_t pos) {
    ListNode* node = list->head;
        for (int i = 0; i < pos; i++) {
        if (node->next == NULL) return NULL;
    }

    node->prev->next = node->next;
    node->next->prev = node->prev;

    void* data = node->data;
    free(node);

    return data;
}