/* C Program for stack operations using switch case*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 2

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int isEmpty();
int isFull();
void display();
void quit();

int main()      {
        int choice,item;
        while(1) {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display all the elements\n");
                printf("4.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice) {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        pop();
                        break;
                 case 3:
                        display();
                        break;
                 case 4:
                        quit();
                        break;
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/
        return 0;
}/*End of main()*/

void push(int item) {
        if( isFull() ) {
                printf("\nStack Overflow\n");
        }
        else {
                top++;
                stack_arr[top] = item;
        }
}/*End of push()*/

int pop() {
        int item;

        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        else {
                item = stack_arr[top];
                top--;
                printf("\nPopped item is : %d\n",item );
        }
}/*End of pop()*/

int isEmpty() {
        if( top == -1 )
                return 1;
        else
                return 0;
}/*End of isEmpty*/

int isFull() {
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}/*End of isFull*/

void display() {
        int i;

        if( isEmpty() )
        {
                printf("\nStack is empty\n");
        }
        else {
                printf("\nStack elements :\n\n");

                for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
                printf("\n");
        }
}/*End of display()*/

void quit() {
        char ans;
        printf("Confirm Exit?(y/n) : ");
        scanf(" %c", &ans);

        if(ans == 'y' ) {
                exit(1);
        }
        else
                printf("Continue!");
}/*End of quit()*/