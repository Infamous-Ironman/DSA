#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 5

int main() {
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;

    while(1) {		// An infinite loop
    
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                if(te == size) {
                    printf("Queue is full");
                    getch();	// pause the loop to see the message
                } else {
                    printf("Enter a number: ");
                    scanf("%d",&n);
                    R = ( R + 1) % size;
                    arr[R] = n;
                    te = te + 1;
                }
                break;

            case 2:
                if(te == 0) {
                    printf("Queue is empty");
                    getch();	// pause the loop to see the message
                } else {                
                    printf("Number Deleted: %d",arr[F]);
                    F = (F + 1)%size;
                    te = te - 1;
                    getch();	// pause the loop to see the number
                }
                break;

            case 3:
                if(te == 0) {               
                    printf("Queue is empty");
                    getch();	// pause the loop to see the message
                } else {                               
                    x = F;
                    for(i = 1; i <= te; i++) {
                        printf("%d ",arr[x]);
                        x = (x + 1) % size;
                    }
                    getch();	// pause the loop to see the numbers
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Wrong Choice!!");
                getch();	// pause the loop to see the message
        }
    }
    return 0;
}