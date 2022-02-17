//SHIVANSH MISHRA
//BINARY SEARCH TREE OPERATIONS

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* l;
	struct node* r;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->l = NULL;
	node->r = NULL;

	return (node);
}

void printPostorder(struct node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->l);

	printPostorder(node->r);

	printf("%d\n", node->data);
}

void printInorder(struct node* node)
{
	if (node == NULL)
		return;

	printInorder(node->l);

	printf("%d\n", node->data);

	printInorder(node->r);
}

void printPreorder(struct node* node)
{
	if (node == NULL)
		return;

	printf("%d\n", node->data);

	printPreorder(node->l);

	printPreorder(node->r);
}

int main()
{
    int k=5,o;
	printf("Welcome!!!\nEnter Elements\n");
	int a[k];
	for(int i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}

	struct node* root = newNode(a[0]);
	root->l = newNode(a[1]);
	root->r = newNode(a[2]);
	root->l->l = newNode(a[3]);
	root->l->r = newNode(a[4]);

	printf("Preorder traversal --->>\n");
	printPreorder(root);

	printf("Inorder traversal --->>\n");
	printInorder(root);

	printf("Postorder traversal  --->>\n");
	printPostorder(root);

	return 0;
}
