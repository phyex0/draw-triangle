#include <stdio.h>
// note=  even numbers are succesful because of the shape 
void triangel(int line) {
	int k = line; // less than 1 gap than line value what we need we need 
	int a = 1;
	// general loop  goes to next line and increment a's value
	for (int i = line ; i > 0; i--) {
		// in the 1st for loop we adding gaps before the symbol
		for (int i = k; i > 0; i--) {
			printf(" ");
		}
		//2nd for adds the our symbol
		for (int i = 1; i <= a; i++) {
			printf("*");
		}
		printf("\n");
		k--;
		if (a == line+2)
			break;
		else {
			a += 2;
		}
	}
	
}
int main() {
	int  k;
	printf("How many line do you want to see?");
	scanf_s("%d",&k);
	triangel(k);












	return 0;
}

