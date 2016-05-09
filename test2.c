#include <stdio.h>
static int flow = 0;

static int handle_cpuid(int count)
{
	flow++;
	
	return 0;
}

int main(int argc, char **argv)
{
	for(int i=0;i<30;i++){
	handle_cpuid(1);
}
printf("%i\n",flow);
	return 0;
}

