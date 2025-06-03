#include <stdio.h>
int q[50],front=-1, rear=-1,n ,choice ,items ;
void pushdq(int items);
void popdq();
void injectdq(int items);
void ejectdq();
void display();

int main(){
    printf("enter the size of queue");
    scanf("%d",&n);

    do{

    printf("enter your choice \n menu \n 1.push \n 2. pop \n 3.inject \n 4.eject \n 5.display\n 6.exit\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("enter the elements to be inserted ");
        scanf("%d",& items);
        pushdq(items);
        break;
   
    case 2:
    popdq();
    break;

    case 3:
    printf("enter the elements to be inserted ");
    scanf("%d",& items);
    injectdq(items);
    break;

    case 4:
    ejectdq();
    break;

    case 5:
    display();
    break;

    case 6:
    printf("exit");
    break;

    default:
    printf("please enter a valid choice");
        
    }
    }
    while(choice != 6);
    return 0;

}
void pushdq(int items){
if ((front==0 && rear ==n-1)|| (rear +1 )%n== front)
{
    printf("queue is full");
}
else {
    if(front ==-1 &&rear ==-1)
    {
        front =rear=0;
    }
    else {
        front = (front -1 +n)%n;
    }
    q[front]=items;
}

}

void popdq(){
    if(front==-1 )
    {
        printf("queue is empty");
    }
    else{
        printf("deleted element is %d", q[front]);
        if (front ==rear){
            front =rear=-1;
        }
    
    else{
        front=( front +1 )%n;
    }
}
}

void injectdq(int items){
    if((front ==0 && rear == n-1)|| (rear +1)%n ==front)
    {
        printf("queue is full");

    }
    else{
        if(front ==-1 && rear == -1)
        {
            front =rear=0;
        }
        else{
            rear=(rear+1)%n; 
        }
        q[rear]=items;
    }
}

void ejectdq(){
if(front== -1){
    printf("queue is empty");
}
else{
    printf("deleted item is%d", q[rear]);
    if(front == rear){
        front =rear=-1;
    }
    else{
        rear =(rear -1+n)%n; 
    }
}
}

void display(){
    if (front ==-1){
        printf("queue is empty");
    }
    else{
        int i= front;
        printf("element in dequeue");
        while(1){
            printf("%d",q[i]);
            if(i==rear)
            break;
            i=(i+1)%n;
        }
        printf("\n");
    }
}

