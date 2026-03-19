#include <stdio.h>
#include <stdlib.h> // required for malloc,, calloc, relloc, free
int main(){
    /*
    =============================================
    INTRODUCTION TO DYNAMIC MEMORY ALLOCATION
    =============================================
    In C, memory can be allocated in two ways:
    1. Static (compile-time)
    Example: int a[5];
    2. Dynamic (run-time) - using heap memory
    Functions:
    -malloc()
    -calloc(
    -realloc()
    -free()
    Heap = large memory area used for dynamic memory allocation
    */
    printf("===== DYNAMIC MEMORY ALLOCATION =====\n");
    int * p;
    // allocate memory for ONE integer
    p = (int*) malloc(sizeof(int));
    // Always check if allocation succeeded
    if(p == NULL){
        printf("Memory allocation failed\n");
        return 1; 
    }
    /*
    At this point:
    p points to memory, but value is garbage.
    Example (random):
    p - 10101010 (unknown value)
    */
   printf("Before assigning value (garbage): %d\n", *p);
   // assign value
   *p = 10;
   printf("After assigning value: %d\n", *p);
   /*
   ===================================================
   2. CALLOC() - Allocate memory (INITIALIZED TO Zero)
   ===================================================
   Syntax:
   pointer = (type*) calloc(n, size);
   Keyy points:
   -Alloocate memory for multiple elements
   - Initialize ALL valuesto 0
   - Safer than malloc when default values are needed
   */
  printf("2. CALLOC DEMO\n");
  int *arr;
  //allocate memory for 5 integers
  arr = (int*) calloc(5, sizeof(int));
  if(arr == NULL)
  {
    printf("Memory allocation failed!\n");
    return 1;
  }
  /*
  At this point
  arr = [0 0 0 0 0]
  */
 printf("values after calloc (all zeros):\n");
 for (int i = 0; i <5; i++)
 {
    printf("%d", arr[i]);
 }
    printf("\n\n");
    /*
    ==========================================
    3. REALLOC() - Resize existing memory*
    ==========================================
    Syntax:
    pointer = realloc(pointer, new_size);
    key points:
    - Changes size of previously allocated memory
    - May expand or shrink memory 
    - Old values are preserved
    - Memory may move to a new location 
    common use:
    when we don't know required size initialy 
    */
   printf("3. REALLOC DEMO\n");
   // Let's store some values first
   for(int i = 0; i < 5; i++)
   {
    arr[i] = (i + 1) * 10; // 10 20 30 40 50
   }
    printf("Before realloc:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    /*
    Now increase size from 5 - 8 elements
    */
    arr = (int*) realloc(arr, 8 * sizeof(int));
    if(arr == NULL)
    {
        printf("Reallocation failed!\n");
        return 1;
    }
    /*
    After realloc:
    Old data is preserved
    New elements contain garbage values
    */
    printf("After realloc (new size = 8):\n");
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]); // last 3 may be garbage
    }
    printf("\n");
    /*
    Let's assign values to new mwmory
    */
   arr[5] = 60;
   arr[6] = 70;
   arr[7] = 80;
   printf("After assigning new values:\n");
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    /*
    ==========================================
    4. FREE() - Release memory
    ==========================================
    Syntax:
    free(pointer);
    Key points:
    - Frees allocated memory
    - Prevents memory leaks
    - After free, pointer becomes INVALID
    Good practice:
    pointer = NULL;
    */
   printf("4. FREE DEMO\n");
    free(p); // freeing memory from  malloc
    free(arr); // freeing memory from calloc/realloc
    // avoid dangling pointers
    p = NULL;
    arr = NULL;
    printf("Memory successfully freed!\n\n");
    /*
    ============================================
    FINAL SUMMARY
    ============================================
    malloc - allocate memory (garbage values)
    calloc - allocate + initialize to zero
    realloc - resize memory
    free - release memory
    Important rules:
    1. Always check NULL after allocation
    2. Always free allocated memory
    3. Never use pointer after free
    4. Avoid memory leaks
    */
   printf("===== PROGRAM COMPLETED SUCCESSFULLY =====\n");
   return 0;
}
// dangling pointer
// why pointer = NULL is important
int *d = (int*) malloc(sizeof(int));
*d = 5;
free(d);
//printf("%d", *d); // undefined behavior
// memory leak
// what not to do 
int *leak = (int*) malloc(sizeof(int));
leak = NULL; //memory lost - leak


Dynamic Array with user input (real use case)
RUntime allocation
Realworld usage


int n;
printf("Enter number of elements: ");
scanf("%d", &n);
int *dynamicArr = malloc(n * sizeof(int));
if(dynamicArr == NULL)
{
    printf("Memory allocation failed\n");
    return 1;
}


for (int i = 0; i < n; i++)
{
    printf("Enter element %d: ", i + 1);
    scanf("%d", &dynamicArr[i]);

} 