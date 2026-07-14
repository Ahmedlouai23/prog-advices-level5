//#include<iostream>
//#include<cmath>
//#include<cstdlib>
//#include<stdio.h>
//using namespace std;
//float input(string msg, int i) {
//	float A;
//	if (i == NULL) {
//		cout << msg << " : ";
//
//		do {
//			cin >> A;
//		} while (A > 100 || A < -100);
//	}
//	else {
//		cout << msg << " [" << i << "] : ";
//
//		do {
//			cin >> A;
//		} while (A > 100 || A < -100);
//	}
//	return A;
//}
//int absoluteVal(float A) {
//	int B;
//	if (A < 0) { B = -A; }
//	else { B = A; }
//	return B;
//}
//int myRound(float A) {
//	int B = (int)A;
//	cout << "A=" << A << "\tB=" << B << endl;
//	float C = (A - B) * 10;
//	cout << "C=" << C << endl;
//	if (absoluteVal(C) < 5) {
//		return B;
//	}
//	else {
//		if (B >= 0) { return(B + 1); }
//		else
//		{
//			return(B - 1);
//		}
//	}
//}
//int myfloor(float A) {
//	int B = (int)A;
//	if (A < 0) {
//		return B - 1;
//	}
//	return B;
//}
//int myceil(float A) {
//	int B = (int)A;
//	if (A <0 ) {
//		return B;
//	}
//	else { return B + 1; }
//}
//long double mySQRT(float A) {
//	for ( long double i = 1;i < A / 2;i = i + 0.000001) {
//		if (int(i * i) == A) {
//			return i;
//		}
//	}
//}
//float abu_hadhod_sqrt(float A) {
//	long double B = pow(A, 0.5);
//	return B;
//}
//int main() {
//	int Nul = NULL;float X;
//	X=input("enter the number :",Nul);
//	cout << "My  SQRT result : " << mySQRT(X) << endl;
//	cout << "C++ SQRT result : " << sqrt(X) << endl;
//	cout << "Abu Hadhud  SQRT result : " << abu_hadhod_sqrt(X) << endl;
//	printf("here we go");
//	
//}
