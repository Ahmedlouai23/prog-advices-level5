// #include<cstdlib>
// #include<iostream>
// using namespace std;
// enum category {
                         
//     SmallLetter = 1,     
//     CapitalLetter = 2,   
//     SpecialCharacter = 3,
//     Digit = 4            
// };

// int RandomNumber(int From, int To)

// {

//     int randNum = rand() % (To - From + 1) + From;
//     return randNum; 
// }
// char getchar(category chartype) {
//     switch (chartype) {
//     case category::SmallLetter: {
//         return (char)RandomNumber(97, 122);
//         break;
//     }
//     case category::CapitalLetter: {
//         return (char)RandomNumber(65, 90);
//         break;
//     }
//     case category::SpecialCharacter: {
//         return (char)RandomNumber(33, 47);
//         break;
//     }
//     case category::Digit: {
//         return(char)RandomNumber(48, 57);
//         break;
//     }
    
//     }
//     return'\0';
// }
// string word(category A, int B) {
//     string wd="\0";int i;
//     for (i = 0;i < B;i++) {
//         wd = wd + getchar(A);
//     }
//     return wd;
// }
// string Key() {
//     string key="\0";
//     key = key + word(category::CapitalLetter, 4) + "-";
//     key = key + word(category::CapitalLetter, 4) + "-";
//     key = key + word(category::CapitalLetter, 4) + "-";
//     key = key + word(category::CapitalLetter, 4);
//     return key;
// }
// int main() {
//     srand((unsigned)time(NULL));
//     bool tr;int i = 0, L;string C[50];
//     cout << "how many keys ?" << endl;
//     do { cin >> L; } while (L <= 0);
//     for (i = 1;i <= L;i++) {
//         cout << "-key[" << i << "] : " << Key() << endl;
//     }
    
    
    
//     return 0;
// }