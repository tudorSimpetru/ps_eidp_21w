#include <stdlib.h>

struct list_node {
    int value;
    struct list_node *next;
};

struct linked_list {
    int size;
    struct list_node *head;
};

void free_linked_list(struct linked_list *list) {
    struct list_node *node = list->head;
    while (node) {
        struct list_node *next_node = node->next;
        free(node);
        node = next_node;
    }
    free(list);
}

struct linked_list *int_to_linked_list(int number) {
    if (number < 0) {
        return NULL;
    }
    struct linked_list *list = malloc(sizeof(*list));
    if (!list) {
        return NULL;
    }
    list->size = 0;
    struct list_node **last_node = &list->head;
    while (number || !list->size) {
        struct list_node *current_node = malloc(sizeof(*list));
        if (!current_node) {
            free_linked_list(list);
            return NULL;
        }
        current_node->next = NULL;
        current_node->value = number % 10;
        number /= 10;
        *last_node = current_node;
        last_node = &current_node->next;
        ++list->size;
    }
    return list;
}

void print_linked_list(struct linked_list *list) {
    
}

void print_number_rec(struct linked_list *list) {
    if (list->head == NULL) {
        return;
    }
    int arr[100];
    int i=0;
    while (list->head != NULL) {
        arr[i] = list->head->value;
        list->head = list->list->head->next;
        i++;
    }
    for (int i = (list->size)-1; i>=0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
    print_number_rec(list);
}

void print_number_iter(struct linked_list *list) {
    int arr[100];
    int i=0;
    while (list->head !=NULL) {
        arr[i] = list->head->value;
        list->head = list->head->next;
        i++;
    }
    for (int i = (list->size)-1; i>=0; i--)
        printf("%d",arr[i]);
    printf("\n");
}

int main(void) {
    /* TODO: Implement Tests */
    return EXIT_SUCCESS;
}
