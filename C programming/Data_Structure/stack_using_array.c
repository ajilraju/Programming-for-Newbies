#include <stdio.h>

#define MAX    10

void push();
void pop();
int peek();
void display();

int STACK[MAX];
int top = -1;

// Pushing element into stack
void push() {
    int data;
    if (top == (MAX - 1)) {
    	puts("STACK ON OVERFLOW!!!");
    } else {
    	printf("Enter data to stack : ");
    	scanf("%d", &data);
    	top = top + 1;
    	STACK[top] = data;
    }
}

// Popping the element from the stack
void pop() {
    
    if (top == -1) {
    	puts("STACK ON UNDERFLOW !!!");
    } else {
    	top = top - 1;
    }
}

// Return the top of the stack
int peek() {
    return top;
}

// Display the whole stack linear
void display() {
    int i;
    for (i = 0; i <= top; i++) {
    	printf("%d, ", STACK[i]);
    }
}

int main() {

    int option;
    
    do {
        printf("\nMODE OF OPERATIONS\n\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
    	
    	printf("select one operation: ");
    	scanf("%d", &option);

        switch(option) {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: printf("%d\n", peek());
            break;
            case 4: display();
            break;
            case 5:
            break;
            default: puts("select a vaild option");
            break;
    	}
   } while(option != 5);
    	
    return 0;
}