#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
stack_t mystack ;
int main()
{
    int var;
    int state =0;

    StackCreate(&mystack);
    state=StackIsEmpty(&mystack);
    printf("state for StackIsEmpty =%i\n",state);
    state= StackIsFull(&mystack);
    printf("state for StackIsFull =%i\n",state);
    state= StackPush(1,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(2,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(3,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(4,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(5,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(6,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(7,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(8,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(9,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(10,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPush(11,&mystack);
    printf("state for StackPush =%i\n",state);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    state= StackPop(&var,&mystack);
    printf("state for StackPush =%i and var=%i\n",state,var);
    return 0;
}
