#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void push(int character);
int postfix_evaluation();
int pop();
int isEmpty();
 
int top;
int stack[50];
char postfix_expression[50];
 
int main() {
    int evaluated_value;
    top = -1;

    printf("\nEnter an Expression in Postfix format: ");
    scanf("%s", postfix_expression);
    evaluated_value = postfix_evaluation();
    
    printf("\nEvaluation of Postfix Expression: %d\n", evaluated_value);
    return 0;
} 

int postfix_evaluation() {
    int x, y, temp, value;
    int count;

    for(count = 0; count < strlen(postfix_expression); count++) {

        if(postfix_expression[count] <= '9' && postfix_expression[count] >= '0') {
            push(postfix_expression[count] - '0');
        }

        else {
            x = pop();
            y = pop();


            switch(postfix_expression[count]) {
                case '+': temp = y + x; 
                break;

                case '-': temp = y - x;
                break;

                case '*': temp = y * x;
                break;

                case '/': temp = y / x;
                break;

                case '%': temp = y % x;
                break;

                case '^': temp = pow(y, x); 
                break;

                default:  printf("Invalid"); 
            }

            push(temp);
        }
    }

value = pop();
return value;
} 

void push(int character) {

    if(top > 50) {
        printf("Stack Overflow\n");
        exit(1);
    }
    else {
        top++;
        stack[top] = character;
    }
}

int pop() {

     int item;

    if( isEmpty() ) {
        printf("\nStack Underflow\n");
        exit(1);
    }
    else {
        item = stack[top];
        top--;
        return item;
    }
}

int isEmpty() {

    if(top == -1)
        return 1;

    else  
        return 0;
}