#include "libft.h"
// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*lst2;
// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 	}
// 	else
// 	{
// 		lst2 = ft_lstlast(*lst);
// 		lst2 ->next = new;
// 	}
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Node {
//     int x;
//     struct Node* next;
// } Node;
// void    ft_lstadd_front(Node **root, Node *new)
// {
//     if (root && new)
//     {
//         new -> next = *root;
//         *root = new;
//     }
// }
// void insert_end(Node** root, int value) {
//     Node* new_node = malloc(sizeof(Node));
//     if (new_node == NULL) {
//         exit(1);
//     }
//     new_node->next = NULL;
//     new_node->x = value;
    
//     if (*root == NULL) {
//         *root = new_node;
//         return;
//     }
    
//     Node* curr = *root;
//     while (curr->next != NULL) {
//         curr = curr->next;
//     }
//     curr->next = new_node;
// }

// int main() {
//     Node* root = NULL;
//     Node  *new_node = malloc(sizeof(Node));
//     new_node -> x = -3;
//     insert_end(&root, -2);
//     insert_end(&root, 11);
//     insert_end(&root, 22);
//     ft_lstadd_front(&root,new_node);
//     for (Node* curr = root; curr != NULL; curr = curr->next) {
//         printf("%d\n", curr->x);
//     }
//     deallocate(&root);
//     return 0;
// }
# include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *ptr = malloc(10);
    ptr = "hello";
    while (1);
    return 0;
}
