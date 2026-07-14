// #include<iostream>
// #include<cmath>
// #include<string>
// using namespace std;
// string scan() {
// 	string A;
	
	
// 	cout << "enter the word 3 capital lettres :";
// 	cin >> A; cout << endl;
// 	return A;
// }
// string encryption(string input) {
// 	string word = input;int L = input.length();int A;
// 	for (int i = 0;i < L;i++) {
// 		A = ((int)input[i])+2;
// 		word[i] = (char)A;
// 	}
// 	return word;
// }
// string decryption(string A) {
// 	string result = A;int L = A.length();int B;
// 	for (int i = 0; i < L; i++)
// 	{
// 		B = ((int)A[i]) - 2;
// 			result[i] = (char)B;
// 	}
// 	return result;
// }

// int main() {
// 	string A=scan();
// 	cout << "text before encryption :" << A << endl;
// 	cout << "text after encryption :" << encryption(A)<<endl;
// 	cout << "text after decryption :" << decryption(encryption(A));
// 	return 0;
// }
