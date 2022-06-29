/**
 * @file tree.c
 * @author arisien (arisien@vivaldi.net)
 * @brief Function implementations for Tree.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "tree.h"

TreeNode* treenode_construct (void* data, size_t size) {
    TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));

    node->data = data;
    node->size = size;

    node->left = NULL;
    node->right = NULL;

    return node;
}

void tree_add (TreeNode* head, void* data, size_t size) {

    TreeNode* inserted = treenode_construct(data, size);
    TreeNode* current = head;

    while (1) {
        char cmp = bytes_compare(data, current->data, size);

        if (cmp == 1) {
            if (current->right == NULL) {
                current->right = inserted;
                return;
            }
            else current = current->right;
        }

        else if (cmp == -1) {
            if (current->left == NULL) {
                current->left = inserted;
                return;
            }
            else current = current->left;
        }

        else return;
    }

}

void tree_free (TreeNode* head) {
    if (head->left != NULL) tree_free(head->left);
    if (head->right != NULL) tree_free(head->right);
    free(head);
}

TreeNode* tree_search (TreeNode* head, void* data, size_t size) {
    TreeNode* current = head;

    while (1) {
        char cmp = bytes_compare(data, current->data, size);

        if (cmp == 1) {
            if (current->right == NULL) {
                return NULL;
            }
            else current = current->right;
        }

        else if (cmp == -1) {
            if (current->left == NULL) {
                return NULL;
            }
            else current = current->left;
        }

        else return current;
    }
}