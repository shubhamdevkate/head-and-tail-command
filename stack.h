typedef struct stack{
	int val;
	struct stack *next;
}stack;

stack *head, *tail;

void init();
void push(int);
int pop();
