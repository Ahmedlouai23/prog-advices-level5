//#include<iostream>
//#include<cmath>
//#include<cstdlib>
//using namespace std;
//int input(string msg,int i) {
//	int A;
//	if (i == NULL) {
//		cout << msg << " : ";
//		
//		do {
//			cin >> A;
//		} while (A > 100 || A < 0);
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
//int RandomNumber(int From, int To)
//
//{
//
//	int randNum = rand() % (To - From + 1) + From;
//	return randNum;
//}
//bool check(string msg){
//	cout << msg << " : ";
//	bool A;
//	cin >> A;
//	return A;
//}
//void initialise(int A[100]) {
//	for (int i = 0; i < 100; i++)
//	{
//		A[i] = NULL;
//	}
//}
//void fillarray(int A[100],int& L) {
//	bool tr = true;int i = 0;string msg;
//	initialise(A);
//	do {
//		
//		
//		A[i] = input("enter a number in order ",i );
//		cout << endl;
//		i++;
//		tr = check("do you want to add more ? [1]:yes, [0]:no");
//		
//	} while (tr);
//	L = i;
//}
//
//void printarray(int A[100]) {
//	int i = 0;
//	cout << "the elements of this array are :";
//	while (A[i] != NULL) {
//		cout << A[i] << "\t";
//		i++;
//	}
//	cout << endl << "the number of elements is : " << i << endl;
//}
//void AddArrayElement(int Number, int arr[100], int& arrLength)
//{
//	arrLength++;                   
//	arr[arrLength - 1] = Number;   
//}
//
//void readarray(int N, int A[100])
//{
//	initialise(A);
//	for (int i = 0;i < N;i++) {
//		A[i] = RandomNumber(-100, 100);
//	}
//
//}
//enum class checkprime { prime = 1, notprime = 0 };
//checkprime prime(int x) {
//	if (x <= 1) return checkprime::notprime;
//	if (x == 2) return checkprime::prime;
//	if (x % 2 == 0) return checkprime::notprime;
//
//	
//	int limit = x / 2;
//	for (int i = 3; i <= limit; i += 2) {
//		if (x % i == 0) return checkprime::notprime;
//	}
//	return checkprime::prime;
//}
//bool Numberexist(int A[100], int X) {
//	bool tr = false;int i=0;
//	while (!tr && A[i] != NULL) {
//		if (A[i] == X) {
//			tr = true;
//		}
//		i++;
//	}
//	return tr;
//}
//
//void getnumber(int A[100],int B[100],int length1,int length2) {
//	int tr;
//	
//	for (int i = length1-1; i >=0; i--)
//	{
//		
//	    AddArrayElement(A[i], B, length2);
//		
//	}
//}
//bool checkpalindrome(int A[100], int B[100],int length) {
//	int i = 0; 
//	bool tr = true;
//	while (A[i] != NULL && tr) {
//		if (A[i] != B[i]) {
//			tr= false;
//		}
//		i++;
//		
//	}
//	return tr;
//}
//int count(int A[100]) {
//	int i = 0,C=0;
//	while (A[i] != NULL) {
//		if (A[i] <  0) {
//			C++;
//		} 
//		i++;
//	}
//	return C;
//}
//int main() {
//	int array1[100],array2[100];
//	int L1, L2=NULL;
//	L1=input("enter the length of the array", L2);
//	readarray( L1,array1);
//	printarray(array1);
//	int C = count(array1);
//	cout << "the number of negative numbers is :" << C;
//}