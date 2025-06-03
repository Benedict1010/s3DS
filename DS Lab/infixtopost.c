#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAX 100

char stack[MAX];
char infix[MAX] ,postfix[MAX];
int top=-1;

void infixtopost();
void print();
char pop();
void push(char);
int isempty();
int precedence(char);
int space(char);

int main(){
    printf("enter infix expression");
    fgets(infix, MAX ,stdin);
    infix[strcspn(infix, "\n")] = '\0';
    infixtopost();
    print();
    return 0;
}

void infixtopost()
{
    int i ,j =0 , top;
    char symbol ;
    char next ;
    for(i=0; i<strlen(infix); i++){
        symbol =infix[i];
        if(space(symbol))
        continue;

        switch(symbol){
            case '(' :
            push(symbol);
            break ;

            case ')':
            while((next =pop())!= '(') 
            postfix[j++] =next ;
            break;

            case '+':
            case '-':
            case '*':
            case '/':
            while(!isempty()&& precedence(stack[top])>= precedence(symbol))
            postfix[j++]= pop();
            push(symbol);
            break;

            default :
            postfix[j++] = symbol;
    
        }
    }
    while (!isempty())
        postfix[j++] = pop();

    postfix[j] = '\0';

}


void print(){
    printf("postfix expression is");
    int i=0;
    while(postfix[i])
    {
        printf("%c",postfix[i]);
        i++;
    }
    printf("\n");
}



char pop(){
    int val;
    if(top ==-1){
        printf("stack underflow");
        exit(1);
    }
    val=stack[top];
    top =top-1;
    return val;

}

void push(char val){
    if(top ==MAX -1){
        printf("stack overflow");
    return;
    }
    top++;
    stack[top] = val;
}




int isempty(){
    if(top ==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char symbol){
    switch(symbol){
        case '^':
        return 3;

        case '/':
        case '*':
        return 2;

        case '+':
        case '-':
        return 1;

        default: return 0;
    }

}


int space(char c){
    if( c==' ' || c== '\t')
    return 1;
    else
    return 0;

}
