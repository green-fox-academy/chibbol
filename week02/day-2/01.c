#include <stdio.h>
#include <math.h>

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	int sqrj2 = j2 * j2;
	int cubej2 = j2 * j2 * j2;
	printf("%d\n%d", sqrj2, cubej2);
	return 0;
}
