#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int infix[MAX] ;
int postfix[MAX];
int top =-1;

void posteval();
void infixtopost();
int space(char);
int isempty();
int precedence(char);
void push(char);
char pop();
void print();

int main(){
    int result;
    printf("enter a infix expression");
    gets(infix);
    infixtopost();
    result = posteval();
    print();
    printf("result after ostfix evaluation");
    print("%d",result);
    return 0;

}

void posteval(){
   int i ,a,b ;

for( i=0 ;i<strlen(postfix); i++ ){
    if(postfix[i]>='0' && postfix[i]<='9')
        push postfix[i] - '0';
    
    else{
        a=pop() ;
        b=pop();
    
    switch(postfix[i]){
        case '+' :
        push(b+a);
        break;

        case '-' :
        push(b=a);
        break;

        case '*' :
        push (b*a);
        break;

        case'/' :
        push(b/a);
        break;

        case '^':
        push(pow(b,a));
        break;
    }
    }

}
return pop()


}
void infixtopost(){
     int i ,j, symbol ,next;
    for(i=0; i<strlen(infix); i++){
        symbol=infix[i];
    }
    switch(symbol) {
        case '(' :
            push(symbol);
            break;
        case ')':
            while (next=pop()!='(')  
            postfix[j++]=next; 
            break;
            
        case '+':
        case'-':
        case '*':
        case'/':
        while(!isempty() && precedence(stack[top])>=precedence(symbol))
            postfix[j++]=pop();
            push(symbol); 
            break;

        default :postfix[j++]=symbol;
    }

}
int space(char c){
    if(c==' ' || c== '\t')
    return 1;
    else
    return 0;

}
int isempty(){
    if(top ==-1)
    return 1;
    else 
    return 0;

}
int precedence(char symbol){
    switch(symbol){
        case '^':
        return 3;

        case '*':
        case '/':
        return 2;

        case '+':
        case '-':
        return 1;

        default:
        return 0;
    }
}


void push(char c){
    if(top==MAX-1){
        printf("stack overflow");
        return;
    }
    top++;
    stack[top] = c;
}
char pop(){
    char c;
    if(top ==-1){
        printf("stack underflow");
        exit(1);
    }
    c =stack[top];
    top =top-1;
    return c;
}
void print(){
    int i =0;
    printf("the postfix expression");
    while(postfix[i]){
        printf("%c",postfix[i]);
    }
    priintf("\n");
}