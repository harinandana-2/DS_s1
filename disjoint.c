#include <stdio.h>
#include <stdlib.h> 
#define MAX 50
int parent[MAX];
int rank[MAX];
void makeSet(int x) {
   if(parent[x]!=-1) {
         printf("\nElement %d is already in the set\n",x);
         return;
         }
         parent[x]=x;
         rank[x]=0;
         printf("\nSet created for element %d \n ",x);
         }
         int findSet(int x) {
         if(parent[x]==-1) {
              printf("\nElement %d is not in any set\n",x);
              return-1;
              }
              if(parent[x]!=x) {
                 parent[x]=findSet(parent[x]);
                 }
                 return parent[x];
                 }
                 void unionSet(int x,int y) {
                 int repX=findSet(x);
                 int repY=findSet(y);
                 if(repX==-1||repY==-1)return;
                 if(repX!=repY) {
                   if(rank[repX]>rank[repY]) {
                       parent[repY]=repX;
                       }
                       else if(rank[repX]<rank[repY]) {
                       parent[repX]=repY;
                       }
                       else
                       {
                       parent[repY]=repX;
                       rank[repX]++;
                       }
                       printf("\nSets containing %d and %d have been merged\n",x,y);
                       }
                       else {
                          printf("\nElements %d and %d are already in the same set \n",x,y);
                          }
                          }
                          void displaySet(int n) {
                          printf("\n Element : Parent\n");
                          for(int i= 1;i<=n;i++) {
                          if(parent[i]!=-1) {
                            printf("%d: %d\n",i,findSet(i));
                            }
                            }
                            }
                            int main() {
                            int n=MAX;
                            for (int i=0;i<n;i++) {
                            parent[i]=-1;
                            }
                            int choice,x,y;
                            do 
                            {
		                        printf("1.make set\n");
		                        printf("2.find set\n");
					printf("3.union sets\n");
					printf("4.display sets\n");
					printf("5.exit");
					printf("\n enter your choice : \n");
					scanf("%d",&choice);
				switch (choice) {
				    case 1:
				    printf("\n enter the element to create a set:");
				    scanf("%d",&x);
				    makeSet(x);
				    break;
				    
				    case 2:
				    printf("\n enter the element to find its set:");
				    scanf("%d",&x);
				    y=findSet(x);
				    if(y!=-1) {
				    printf("the representative of %d is %d \n",x,y);
				    }
				    break;
				    
				    case 3:
				    printf("\n enter the first element:");
				    scanf("%d",&x);
				    printf("enter the second element:");
				    scanf("%d",&y);
				    unionSet(x,y);
				    break;
				    
				    case 4:
				    displaySet(n);
				    break;
				    
				    case 5:
				    exit(0);
				    default:
				      printf("\n invalid choice\n");
				      break;
				      }
				      }while(1);
				      return 0;
				      }
				    
					
