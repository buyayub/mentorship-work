#include <stdlib.h>
#include <stdio.h>
#include "binary_search_tree.h"

struct Node* bst_createNode(int key)
{
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}

void bst_inorderTreeWalk(struct Node *node)
{
	if (node != NULL)
	{
		bst_inorderTreeWalk(node->left);
		printf("%d ", node->key);
		bst_inorderTreeWalk(node->right);
	}
}

//O(log(n))
struct Node* bst_search(struct Node *root, int key)
{
	struct Node *node = root;
	if (node == NULL || key == node->key)
		return node;
	if (key < node->key)
		return bst_search(node->left, key);
	else
		return bst_search(node->right, key);
}

//still O(log(n))
struct Node* bst_searchIterative(struct Node *root, int key)
{
	struct Node *node = root;
	while (node != NULL && key != node->key)
	{
		if (key < node -> key)
			node = node -> left;
		else
			node = node -> right;
	}
	return node;

}

void bst_insert(struct Node *root, struct Node *node)
{
	struct Node *y = NULL;
	struct Node *x = root;
	while (x != NULL)
	{
		y = x;
		if ( node -> key < x -> key ) 
			x = x -> left;
		else 
			x = x -> right;
	}
	node->parent = y;
	if (y == NULL)
		root = node;
	else
	{
		if ( node -> key < y -> key ) 
			y -> left = node;
		else 
			y -> right = node;
	}
}

struct Node* bst_minimum(struct Node *root)
{
	struct Node *traverse = root;
	while (traverse -> left != NULL)
		traverse = traverse -> left;
	return traverse;
}

struct Node* bst_maximum(struct Node *root)
{
	struct Node *traverse = root;
	while (traverse->right != NULL)
		traverse = traverse->right;
	return traverse;
}

struct Node* bst_successor(struct Node *node)
{
	if (node -> right != NULL)
		return bst_minimum(node -> right);
	struct Node *y = node -> parent;
	while (y != NULL && node == y->right)
	{
		node = y;
		y = y -> parent;
	}
	return y;
}


struct Node* bst_predecessor(struct Node *node)
{
	if (node -> left != NULL)
		return bst_maximum(node -> left);
	struct Node *y = node -> parent;
	while (y != NULL && node == y -> left)
	{
		node = y;
		y = y -> parent;
	}
	return y;
}

struct Node* bst_delete(struct Node *root, struct Node *node)
{
	struct Node *y = NULL;
	struct Node *x = NULL;

	if (node -> left == NULL || node -> right == NULL)
		y = node;
	else
		y = bst_successor(node);

	if (y -> left != NULL)
		x = y -> left;
	else
		x = y -> right;
	
	if (x != NULL)
		x -> parent = y -> parent;

	if (y -> parent ==  NULL)
		root = node;
	else
	{
		if (y == y -> parent -> left)
			y -> parent -> left = x;
		else
			y -> parent -> right = x;
	}

	if (y != node)
		node -> key = y -> key;

	return y;
}
