#include<stdio.h> 
int front=-1; 
int rear=-1; 
void enqueue(int queue[],int n){ 
      int item; 
    printf("element to enqueue:\n"); 
    scanf("%d",&item); 
    if(front==(rear+1)%n){ 
        printf("Full"); 
        } 
    else{ 
        if(front==-1&&rear==-1){ 
            front=rear=0;        
        } 
        else{ 
            rear=rear+1; 
                } 
        queue[rear]=item; 
    } 
    printf("\n");     
} 
 
void dequeue(int queue[],int n){ 
    if(front==-1&&rear==-1){ 
        printf("Empty"); 
    } 
    else{ 
        printf("%d dequed \n",queue[front]); 
        if(front==rear) 
        { 
            front=rear=-1; 
        } 
        else{ 
            front=(front+1)%n; 
        } 
    } 
    printf("\n"); 
} 
void display(int queue[],int n){ 
    int i; 
    if(front==-1&&rear==-1) 
    { 
        printf("Empty"); 
         
    } 
    else if(front<=rear){ 
        for(i=front;i<=rear;i++){ 
            printf("%d \t",queue[i]); 
        } 
        printf("\n"); 
    } 
    else{ 
        for(i=front;i<n;i++){ 
            printf("%d\t",queue[i]); 
        } 
        for(i=0;i<=rear;i++){ 
            printf("\n"); 
        } 
    } 
    printf("\n"); 
} 
int main(){ 
    int n,c,queue[50]; 
    printf("Enter size of queue:"); 
    scanf("%d",&n); 
    while(1){ 
        printf("1-enqueue \n2-dequeue \n3-Display \n4-exit \n"); 
        printf("Enter your choice:"); 
        scanf("%d",&c); 
        if(c==1){ 
            enqueue(queue,n); 
        } 
        else if(c==2){ 
            dequeue(queue,n); 
        } 
             else if(c==3){ 
                display(queue,n);              
            } 
            else if(c==4){ 
                break; 
            } 
                   else{ 
                printf("invalid"); 
            } 
        } 
    } 