/****************************Documentation*********************************
Engineer :Samir Yousry
FileName :Stack Header file
Function : Contains The data and the interfaces needed within  a stack
*/
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
/****************************MACROS**********************************/
#define DATA_TYPE             char
#define STACK_SIZE            10
#define STACK_TOP_INIT        -1
#define STACK_IS_FULL         1
#define STACK_IS_EMPTY        1
#define STACK_IS_NOT_FULL     0
#define STACK_IS_NOT_EMPTY    0
#define ERROR                 -1
#define SUCCESSFUL            0
#define ZERO                  0
/****************************Data types**********************************/
typedef struct
{
    DATA_TYPE stack_elements[STACK_SIZE];
    int TOP;

}stack_t;
/****************************Interfaces**********************************/
void StackCreate(stack_t*);        /*Creates an empty Stack*/
int StackIsFull(stack_t*);         /* Returns 1 If Stack is Full and Returns 0 IF not full*/
int StackIsEmpty(stack_t*);        /* Returns 1 If Stack is Empty and Returns 0 IF not Empty*/
void ClearStack(stack_t*);         /*Clear the  Stack*/
int StackPush(DATA_TYPE,stack_t*); /*push new element to the stack */
int StackPop(DATA_TYPE*,stack_t*); /*pop the last element from the stack */
int StackSize(stack_t*); /*Gets no of elements in the stack */
#endif // STACK_H_INCLUDED
