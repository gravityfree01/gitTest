#include<iostream>

using namespace std;

void main() {

	int a = 0;

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < i; k += 1) {
			a += i;
		}
	}
	printf("%d", a);
}