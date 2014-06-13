#include <stdio.h>
#include <stdlib.h>

double stack[1024];
int stackp = -1;

double push(double n)	{
	return stack[++stackp] = n;
}

double pop(void)	{
	return stack[stackp--];
}

#include "phoc1.peg.c"

int main() {
	while (yyparse());

	return 0;
}
