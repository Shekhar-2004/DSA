#include <iostream>
using namespace std;

//Inverted Triangle of letters
// int main() {
//     int n = 4; // Number of rows
//     char ch = 'A';
    
//     for (int i = 0; i < n; i++) {
//         char temp = ch + n -i - 1; // Start from the last character ('D' for n=4)
        
//         // Print spaces at the beginning of each row
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
        
//         // Print characters in decreasing order
//         for (int j = 0; j < n - i; j++) {
//             cout << temp--;
//         }
        
//         cout << endl;
//     }
    
//     return 0;
// }


//Pyramid of numbers
// int main() {
//     int n = 5;
//     for(int i = 0; i <n; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }
//         for (int j = 1 ; j <= i+1; j++) {
//             cout << j;
            
//         }
//         for (int j = i; j>= 1; j--) {
//             cout << j;
//         }   
//         cout << endl;
//     }
//     return 0;
// }

//hollow diamond
// int main() {
//     int line = 10;
//     int n = line/2;
//     for( int i =0; i<n; i++) {
//         //Space_1
//         for(int j =0; j < n -i -1; j++) {
//             cout << " ";
//         }
//         cout << "*";
//         if( i != 0) {
//             for(int j =0; j<2*i-1; j++) {
//             cout << " ";
//         }
//             cout << "*";
//         }
//         cout << endl;
//     }
//      for( int i =n-2; i>=0; i--) {
//         //Space_1
//         for(int j =0; j < n -i -1; j++) {
//             cout << " ";
//         }
//         cout << "*";
//         if( i != 0) {
//             for(int j =0; j<2*i-1; j++) {
//             cout << " ";
//         }
//             cout << "*";
//             if(i == 0){
//             cout << "*";
//         }
//         }
//         cout << endl;
//     }
// }

//Butterfly pattern
int main() {
    int n = 4;
    //Upper Part
    for(int i =0; i<n; i++) {
        
        for(int j =0; j <i+1; j++) {
            cout << "*";
        }
        for(int j =0; j < 2*(n-i-1); j++) {
            cout << " ";
        }
        for(int j =0; j<i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    //Down Part
    for(int i =0 ; i <n; i++) {
        for(int j =0; j<n-i; j++) {
            cout << "*";
        }
        for(int j =0; j< 2*i; j++) {
            cout << " ";
        }
        for(int j =0; j<n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}