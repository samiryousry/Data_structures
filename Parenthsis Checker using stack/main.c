/****************************Documentation*********************************
Engineer :Samir Yousry
FileName :parenthesis Reliability Checker
Function : Checking if no parenthesis error in an input string
*/
/****************************Includes**********************************/
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
/****************************Global Variables**********************************/
stack_t mystack ;
    char temp ;
    /****************************Prototypes **********************************/
void matchingParenthesis(char *);
void CollectParenthesis(char *);
    /****************************Main Function **********************************/
int main()
{ char str[]="{DS{DS{SD[{SDDSDS} ";
    CollectParenthesis(str);
    matchingParenthesis(str);
    int var=StackPop(&temp,&mystack);
    printf("%i and value%c\n",var,temp);
    if(StackIsEmpty(&mystack))
        printf("works well \n");
    else
        printf("error\n");
    return 0;
}
/****************************Implmentations**********************************/
void CollectParenthesis(char *inptstr){
     int i=0;

    while(*( inptstr+i)!='\0')
    {
        switch(*( inptstr+i))
        {
        case '{':

                StackPush('{',&mystack);


            break ;
            case '[':

                StackPush('[',&mystack);


            break ;
            case '(':

                StackPush('(',&mystack);


            break ;
            default:    break ; /*do nothing */
        }
        i++;
}}
void matchingParenthesis(char * inptstr)
{
    int i=0;

    while(*( inptstr+i)!='\0')
    {
        switch(mystack.stack_elements[mystack.TOP])
        {
        case '{':
            if(*( inptstr+i)=='}')
            {
                StackPop(&temp,&mystack);

            }
            break ;
            case '[':
            if(*( inptstr+i)==']')
            {
                StackPop(&temp,&mystack);

            }
            break ;
            case '(':
            if(*( inptstr+i)==')')
            {
                StackPop(&temp,&mystack);

            }
            break ;
            default:   break ;/*do nothing */
        } i++;
    }
}
