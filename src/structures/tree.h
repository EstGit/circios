/**
 * @file tree.h
 * @author arisien (arisien@vivaldi.net)
 * @brief Structures and function definitions for Tree.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CIRCIOS_TREE_H
#define CIRCIOS_TREE_H

#include <stdlib.h>

#include "../utils/bytes.h"

/**
 * @brief Node of Tree data structure
 * 
 */
typedef struct _TreeNode {
    struct _TreeNode* left;
    struct _TreeNode* right;
    void* data;
    size_t size;
} TreeNode;

/**
 * @brief Tree Node initialization function.
 * 
 * @param data Node's data.
 * @param size size of data.
 * @return TreeNode* created node
 */
TreeNode* treenode_construct (void* data, size_t size);

/**
 * @brief Insert an element into the Binary tree
 * 
 * @param head Head Node of the tree.
 * @param data Data to insert.
 * @param size Size of element.
 */
void tree_add (TreeNode* head, void* data, size_t size);

/**
 * @brief Recursive function which wipes out all Nodes in tree.
 * 
 * 
 * @param head Head of the tree
 */
void tree_free (TreeNode* head);

/**
 * @brief Find element you are looking for or NULL
 * 
 * @param head Head of the tree.
 * @param data Data you are searching.
 * @param size Size of data.
 * @return TreeNode* Node with data you were searching.
 */
TreeNode* tree_search (TreeNode* head, void* data, size_t size);

#endif