#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int randomnumber(int from, int to)

{

	int randnum = rand() % (to - from + 1) + from;
	return randnum;
}
int readnumber(string msg) {
	int n;
	cout <<msg ;
	cin >> n;
	return n;
} 
void readarray(int n,int a[100])
{
	for (int i = 0;i < 100;i++) {
		a[i] = null;
	}
	for (int i = 0;i < n;i++) {
		a[i]= randomnumber(1, 100);
	}

}
int position_order(int array[],int number ) {
	int  i = 0;bool t = 0;
	while (array[i]!=null && !t) {
		if (array[i] == number) {
			t = 1;
		}
		else { i++; }
	}
	return i;
}
void writearray(int array[100],string msg ) {
	int i = 0;
	cout << "array elements "<<msg<<" : ";
	while (array[i] != null) {
		cout << array[i] << " ";
		i++;
	}
	cout << endl;
}
void writerep(int num, int rep) {
	cout << "number " << num << " is repeated " << rep << " times";
}
double maxmin(int array[], int l) {
	int max=0,min=100;
	for (int i = 0;i < l; i++) {

		if (array[i]>max) {
			max = array[i];
		}
		if (array[i] < min) {
			min = array[i];
		}
	}
	return (( double) max+((long double)min/100));
}
int sum(int array[]) {
	int total = 0;int i = 0;
	 while (array[i]!=null) {
		 total = total + array[i];
		 i++;
	 }
	 return total;
 }
float average(int array[], int length) {
	return (float(sum(array))/length);
}
enum class checkprime { prime = 1,notprime = 0 };
checkprime prime(int x) {
	if (x <= 1) return checkprime::notprime;
	if (x == 2) return checkprime::prime;
	if (x % 2 == 0) return checkprime::notprime;

	// ?????? ??? ?????
	int limit = x / 2;
	for (int i = 3; i <= limit; i += 2) {
		if (x % i == 0) return checkprime::notprime;
	}
	return checkprime::prime;
}
void copyarr(int arr[100],int a[100]) {
	 int i,j;
	 for ( i = 0;i < 100;i++) {
		 a[i] = NULL;
	 }
	 i = 0,j=0;
	 while (arr[i]!=NULL)
	 {
		 if (prime(arr[i])==checkprime::prime) {
			 a[j] = arr[i];
			 j++;
		 }
		 i++;
	 }
 }
void sumarr(int a[100],int b[100],int sum[100],int l) {
	for (int i = 0;i < l;i++) {
		sum[i] = a[i] + b[i];
	}
}
void fillarray(int a[100],int length) {
	readarray(length, a);
	for (int i = 0; i < length; i++)
	{
		a[i] = i + 1;
	}
}
void swap(int& a,int& b){
	int tmp = a;a = b;b = tmp;
}
bool present(int arr[100], int n, int l) {
	for (int i = 0; i < l; i++) {
		if (arr[i] == n) return true;
	}
	return false;
}

void removeindex(int arr[100], int n, int l) {
	for (int i = 0; i < l; i++) {
		if (arr[i] == n) { arr[i] = -1; return; }
	}
}

void shuffle(int a[100], int length) {
	int b1[100],b2[100];
	for (int i = 0; i < length; i++)
	{
		b1[i] = i;
		b2[i] = i;
	}
	int index1, index2;	
	for (int i = 0; i < length; i++)
	{
		do{
			index1 = randomnumber(1, length) - 1;
			do { index2 = randomnumber(1, length) - 1; } while ((index1 == index2));
		}while(!present(b1, index1, length) || !present(b2, index2, length));
		// mark chosen indices as used so they won't be reused
		removeindex(b1, index1, length);
		removeindex(b2, index2, length);
		cout << "index1= " << index1 << "\tindex2= " << index2 << endl;
		swap(a[index1], a[index2]);
	}
}
bool paire(int x) {
	if (x % 2 == 0) {
		return 1;
	}
	else { return 0; }
}
void reverse(int a[100],int l) {
	int h, j, i;
	if (paire(l)) {  // عدد زوجي
		h = l / 2; 
		i = h - 1;      // آخر عنصر في النصف الأول
		j = h;         // أول عنصر في النصف الثاني
	}		else {  // عدد فردي
		h = l / 2;
		i = h - 1;      // قبل المنتصف
		j = h + 1;     // بعد المنتصف
	}
	while (i >= 0 && j < l) {
		swap(a[i], a[j]);
		j++;
		i--;
	}
}
bool check(int a[100], int n) {
	int i = 0;bool tr = 0;
	while (tr==false && a[i]!=null) {
		if (a[i] == n) {
			tr = 1;
		}
		else { i++; }
	}
	return tr;
}
int main() {
	srand((unsigned)time(nullptr));
	int x, y;bool tr = false;
	int length = readnumber("enter the number of elements :"), a[100];
	if (length > 100) length = 99;
	if (length <= 0) return 0;
	readarray( length,a);
	writearray(a,"before");
	x=readnumber("please enter a number to search it : ");
	cout << "the number you looking for is " << x << endl;
	
	if (check(a, x)) {
		cout << "yes, exist" << endl;
	}
		
	else {
		cout << "no, doesn't exist" << endl;;
	}

}
