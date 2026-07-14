#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int readnumber(string msg) {
	int N;
	cout << msg;
	cin >> N;
	return N;
}
int RandomNumber(int From, int To){
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
char randomchar() {
	return (char)RandomNumber(65, 90);
}
string word(int B) {
	string wd = "\0";int i;
	for (i = 0;i < B;i++) {
		wd = wd + randomchar();
	}
	return wd;
}
string key() {
	string k = "\0";
	k = k + word( 4) + "-";
	k = k + word( 4) + "-";
	k = k + word( 4) + "-";
	k = k + word( 4);
	return k;
}
void readyarr(string A[100]) {
	for (size_t i = 0; i < 100; i++)
	{
		A[i] = "\0";
	}
}
void putinarray(int A, string B[100]) {
	
	for (int i = 0;i < A;i++) {
		B[i] = key();
	}
}
int Cnum(int A) {
	if (int(A / 100) == 0) {
		if (int(A / 10) == 0) {
             return 1;
		}
		else { return 2; }
		 
	}
	else {
		return 3;
	}
}
void printarr(string A[100]) {
	int i = 0,B;
	while(A[i]!="\0"){
		B = Cnum(i+1);
		switch (B) {
		case 1: {
			cout << "KEY[" << i + 1 << "]    : " << A[i] << endl;
			break;}
		case 2: {
			cout << "KEY[" << i + 1 << "]   : " << A[i] << endl;
			break;}
		case 3: {
			cout << "KEY[" << i + 1 << "]  : " << A[i] << endl;
			break;
		}




		}
		
		i++;
	}
}
int main() {
	int L;
	do { L = readnumber("enter the number of elements : "); } while (L<=0);
	if (L >= 100) { L = 100; }
	string array[100];
	readyarr(array);
	putinarray(L, array);
	printarr(array);
	return 0;
	
}