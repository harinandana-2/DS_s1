#include <stdio.h>
int main() {
	int num;
	do {
	     printf("enter a positive number: ");
	     scanf("%d",&num);
	    }
	    while (num<=0);
	    printf("you entered : %d\n",num);
	    return 0;
	    }
