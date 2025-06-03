#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1,q[50],maxsize,item,value;
    
void enqueue(int value){
    if (rear == maxsize -1){
        printf("queue overflow");
    }
    else{
        if(front == -1 && rear  == -1)
        {
            front=0;
            
        }
        rear++;
        q[rear]=value;
        printf("enqueued value%d\n",value);
    }
}

void dequeue()
{
if( front==-1|| front>rear)
{
    printf("the queue is empty");
    front = rear = -1;
}
else{
item=q[front++];
printf("the deleted element is %d", item);
if (front > rear){
    front = rear = -1;
}
}
}

void display(){
    if(front == -1 || front> rear) {
        printf("queue is empty");
    }
    else
    {
        int i =0;
        for (i= front;i<=rear ;i++)
        {
        printf("%d\t",q[i]);
        }
        printf("\n");
    }


}

int main()
    {
    int choice, maxsize , value;
    printf("enter the size of queue");
    scanf("%d",&maxsize);

    while(1){
    
    printf("\nenter the choice \n 1.enqueue \n 2.dequeue \n3. display ");
    scanf("%d",&choice);
    
        switch (choice) 
        {
        case 1:
        printf("enter the value to insert");
        scanf("%d", &value);
        enqueue(value);
            break;

        case 2:
            dequeue();
            break;
        case 3:

            display();
            break;
        case 4:
        exit(0);
        
        default:
        printf("invalid choice");
        
        }
    }
    return 0;
    
}
