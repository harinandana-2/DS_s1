#include <stdio.h>
#include <stdlib.h> 
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue() {
int val;
printf("enter the data");
scanf("%d",&val);
if(rear==-1&&front==-1)
{
  rear=front=0;
  queue[rear]=val;
 }
 else if((rear+1)%N==front)
 {
    printf("queue is overflow");
    return;
    }
  else
  {
    rear=(rear+1)%N;
    queue[rear]=val;
    }
  }
  void dequeue() {
     if(rear==-1&&front==-1)
     {
       printf("queue is underflow");
       return;
       }
     else if (rear==front)
            rear=front=-1;
    else {
           printf("deleted item is %d",queue[front]);
           front=(front+1)%N;
           }
         }
     void search()
     {
        int data,flag=0,count=0;
        if(rear==-1&&front==-1)
        {
          printf("queue is underflow");
          return;
          }
        else
          {
             printf("enter the dta:");
             scanf("%d",&data);
             while(front!=rear)
             {
                if(data==queue[front]) 
                {
                     flag=1;
                     break;
                     }
                    else
                    {
                      front=(front+1)%N;
                      count++;
                      }
                      }
                  if(flag==1)
                  {
                    printf("the element is found at %d position",count);
                    }
                    else  {
                       printf("element is not found");
                       }
                       }
                       }
                void display()  {
                                 int i=front;
                                 if(rear==-1&&front==-1)
                                 {
                                   printf("queue is underflow");
                                   return;
                                   }
                                   else
                                   {
                                    while(i !=rear)
                                    {
                                    printf("%d\t",queue[i]);
					i=(i+1)%N;
					}
					printf("%d\t",queue[rear]);
					}
					}
					int main()
					{
					   int opt;
					   do
					   {
					      printf("\n1.ENQUEUE\n");
					      printf("\n2.DEQUEUE\n");
					      printf("\n3.DISPLAY\n");
					      printf("\n4.SEARCH\n");
					      printf("\n5.EXIT\n");
					      printf("\nENTER THE OPTION:");
					      scanf("%d",&opt);
					      
					      switch(opt)
						{
						
						              
						      	case 1:
						      		enqueue();
						      		break;
						      	case 2:
						      		dequeue();
						      		break;
						      	case 3:
						      		display();
						      		break;
						      	case 4:
						      		search();
						      		break;
						      	case 5:exit(0);
						      	default:
						      	        printf("Invalid option! Try Again.\n");
                              	              }
                              	              } while(1);
                              	              return 0;
                              	              }
                                      
               
             
           
           
           
