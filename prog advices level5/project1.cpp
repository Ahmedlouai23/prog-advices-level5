#include<iostream>
#include<cmath>
using namespace std;
unsigned long int digit(unsigned long int A) {
	int B = A % 10;
	return B;
}
unsigned long int after(unsigned long int A) {
	int B = A / 10;
	return B;
}
unsigned long int reverse(unsigned long int a,int B) {
	unsigned long int c = 0;
	while (B > 0) {
		c = c * 10 + digit(a);
		a = after(a);
		B--;
	}
	return c;

}
int length(unsigned long int A) {
	if (A == 0) return 1;
	int C = 0;
	while (A > 0) {
		A = after(A);
		C++;
	}
	return C;
}
bool check(unsigned long int A, int B){
	int C; unsigned long int E; unsigned long int F;
	if (B % 2 == 0) {
		C = B / 2;
		E = reverse(A, C);
		unsigned long int tmp = A;
		for (int i = 0; i < C; i++) tmp = after(tmp); // remove right half
		F = tmp; // left half
	}
	else {
		C = (B - 1) / 2;
		E = reverse(A, C);
		unsigned long int tmp = A;
		for (int i = 0; i < C + 1; i++) tmp = after(tmp); // remove right half + middle
		F = tmp;
	}
	return E == F;
}
void result(bool A) {
	if (A) { cout << "Yes ,it is Palindrom number."<<endl; }
	else { cout << "NO ,it is NOT a Palindrom number." << endl; }
}
int main() {
	unsigned long int A;
	cout << "enter the number : ";
	cin >> A;
	result(check(A, length(A)));
}