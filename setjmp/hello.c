#include <stdio.h>
#include <setjmp.h>

jmp_buf one, two;

void routineB();

void routineA()
{
	int rc;

	printf("Routine A()\n");
	rc = setjmp(one);
	if (rc == 0)
		printf("RC = 0\n");
	else
		printf("RC = %d\n", rc);
}

void routineB()
{
	printf("Routine B()\n");
	longjmp(one, 10);
}


int main(int argc, char **argv) 
{
    routineA();
    routineB();
    return 0;
}
