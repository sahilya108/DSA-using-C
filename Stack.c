#include<stdio.h>
#define SIZE 5
int stack[SIZE]; 
int top= -1;

 void push(int value){
 	if (top==SIZE-1){
 		printf("stack overflow cannot push %\n");
	 
	 }
	 else
	 {
	 	top++;
	 	stack[top]=value;
	 	printf("%d	 pushed to stack.\n",value);
	 	
	 }
}
	 void pop(){
	 	if(top==-1){
	 		printf("stack underflow no element to pop.\n");
		 }else{
		 	printf("%d popped from stack.\n",stack[top]);
		 	top--;
		 }
	 }
	 void peek(){
	 	if(top==-1){
	 		printf("stack is empty.\n");
	 		
			 }else{
			 	printf("stack element is %d\n",stack[top]);
			 }
		 }
		 void display(){
		 	if(top==-1){
		 		printf("stack element are:\n");
		 		for(int i=top; i>0; i--){
		 			printf("%d\n",stack[i]);
				 }
			 }
		 }
		 int main(){
		 	int choice,value;
		 	printf("stack implementation using array\n");
		 	while(1){
		 		printf("\n1.push \n2.pop \n3.peek \n4.display \n5.exit \n");
		 		printf("enter your choice");
		 		scanf("%d",&choice);
		 		
		 		switch(choice){
		 			case 1:
		 				printf("enter value to push");
		 				scanf("%d",&value);
		 				push(value);
		 				break;
		 			case 2:
					    pop();
						break;
					case 3:
						peek();
						break;
					case 4:
					    display();
						break;
					case 5:
					    printf("Exiting program...\n");
						return 0;
					default:
					    printf("Invalid choice! try again,\n");		
		 				
				 }
			 }
			 return 0;
		 }
		 
 
