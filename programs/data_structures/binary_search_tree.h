// BINARY SEARCH TREE

#ifndef BINARY_SEARCH_TREE_H_ 
#define BINARY_SEARCH_TREE_H_ 

struct Node 
{
	int key;			
	struct Node *left;
	struct Node *right;
	struct Node *parent;	
};

struct Node* bst_createNode(int key);
void bst_insert(struct Node *root, struct Node *node);
struct Node* bst_delete(struct Node *root, struct Node *node);

void bst_inorderTreeWalk(struct Node *node);

struct Node* bst_search(struct Node *node, int key);
struct Node* bst_searchIterative(struct Node *root, int key);

struct Node* bst_minimum(struct Node *root);
struct Node* bst_maximum(struct Node *root);

struct Node* bst_successor(struct Node *node);
struct Node* bst_predecessor(struct Node *node);

#endif
