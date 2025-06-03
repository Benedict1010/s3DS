#include <stdio.h>
#include <stdlib.h>

int front=-1 ;int rear=-1;
int n ;


void enqueue(int queue[] , int item){
   
    if(front==(rear+1)%n){
        printf("queue is full");
    }
    else{
        if(front==-1 && rear ==-1){
            front=rear=0;
        }
        else{
            rear=(rear+1)%n;
        }
        queue[rear]=item;
    }
    printf("\n");
}

void dequeue (int queue[] ){
    if(front ==-1 && rear ==-1){
        printf("queue is empty");
    }
    else{
        printf("dequeued element is %d", queue[front]);
        if (front==rear){
            front=rear=-1;
        }
        else{
            front =(front +1)%n;
        }
    }
    printf("\n");
    
}

void display(int queue[] ){
    int i;
      if(front==-1 &&rear ==-1){
        printf("queue is empty");
      }

        else {
        printf("Queue elements are: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % n;
        }
        printf("\n");
    }
}

      /*
      else if(front<rear){
        for(i=front; i<= front ;i++){
            printf("%d \t", queue[i]);
        }
        printf("\n");
        }
        else{
            for(i=front;i <n;i++){
                printf("%d",queue[rear]);
            }
            for(i=0; i<= rear;i++){
                printf("\n");
            }
        }
      
}
*/

int main(){
    int choice , n , queue[50] , item;
    printf("enter the size of queue");
    scanf("%d",&n);

    while(1){ 

    printf("enter your choice\n 1.enqueue \n 2.dequeue \n 3.display \n4.exit" );
    scanf("%d",&choice);
   switch(choice){
         case 1:
        printf("enter the element to insert");
        scanf("%d",&item);
         enqueue(queue,item);
        break;

        case 2:
         dequeue(queue );
         break;

         case 3:
         display(queue);
         break;

        case 4:
        exit(0);

         default:
         printf("invalid choice");



    }
    }
return 0;

}


