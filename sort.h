#include <stdio.h>
#include <stdlib.h>

/* STRUCTURES & ENUMS*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* PROTOTYPES */
/* General used functions */
void print_array(const int *array, size_t size);
void swap(int *num1, int *num2);
void print_list(const listint_t *list);

/* Bubble sort functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

/* Selection sort functions */
void selection_sort(int *array, size_t size);

/* Quick sort functions */
void quick_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_recursion(int *array, int low, int high);
int partition(int *array, int low, int high, size_t size);


/* => Advance <=*/
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
