/****************************Includes**********************************/
#include "Stack.h"
/****************************Implmentations**********************************/
void StackCreate(stack_t* mystack)
{
    if(mystack)
    {
        mystack->TOP=STACK_TOP_INIT ;
    }
}
/*Creates an empty Stack*/
int StackIsFull(stack_t* mystack)
{
    if(mystack)
    {
        if (mystack->TOP==STACK_SIZE-1)
        {
            return STACK_IS_FULL ;
        }
        else
        {
            return STACK_IS_NOT_FULL ;
        }
    }

else
{
    return ERROR ;
}
}
/* Returns 1 If Stack is Full and Returns 0 IF not full*/
int StackIsEmpty(stack_t* mystack)
{
    if(mystack)
    {
        if (mystack->TOP==-1)
        {
            return STACK_IS_EMPTY ;
        }
            else
            {
                return STACK_IS_NOT_EMPTY ;
            }
        }


    else
    {
        return ERROR ;
    }
}
/* Returns 1 If Stack is Empty and Returns 0 IF not Empty*/
void ClearStack(stack_t* mystack)
{
    if(mystack)
    {
        mystack->TOP=-1;
    }
    else
    {
        return ERROR ;
    }
}
/*Clear the  Stack*/
int StackPush(DATA_TYPE var,stack_t* mystack)
{
    if(mystack)
    {
        if(mystack->TOP!=STACK_SIZE-1)
        {
            mystack->TOP++;
            mystack->stack_elements[mystack->TOP]=var;
            return SUCCESSFUL ;
        }
        else
        {
            return STACK_IS_FULL ;
        }
    }
    else
    {
        return ERROR ;
    }
}

/*push new element to the stack */
int StackPop(DATA_TYPE* var,stack_t* mystack)
{
    if(mystack)
{
    if(mystack->TOP!=ZERO-1)
        {
            *var=mystack->stack_elements[mystack->TOP] ;
            mystack->TOP--;

            return SUCCESSFUL ;
        }
        else
        {
            return STACK_IS_EMPTY ;
        }
    }
    else
    {
        return ERROR ;
    }
}
/*pop the last element from the stack */
