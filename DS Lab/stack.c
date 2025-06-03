#include <stdio.h>
int stack[100];
int maxsize;
int top =-1;

void push(){
    int item;
    if(top==maxsize-1){
        printf("stack overflow");
    }
    else{
        printf("enter the elemenat to be isnerted");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}

void pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        int item =stack[top];
        top--;
        printf("the deleted element is .%d",item);
    }
}

void display(){
    int i;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(i=top;i>=-1;i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice ;
    printf("enter the mazimum size of stack");
    scanf("%d",&maxsize);
    if (maxsize >100 || maxsize <0){
        printf("enter size between 1 and 100");
        return 1;
    }

    while(1){
        printf("enter your choice \n 1.push \n2.pop \n3.display\n 4.exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;

            default:
            printf("enter a valid choice");
        }
    }
    return 0;
}