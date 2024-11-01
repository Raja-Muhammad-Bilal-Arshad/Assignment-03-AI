#include<iostream>
using namespace std;
int main() {
    char c1, c2, c3, c4, c5;
    cout << "Enter 1st character: ";
    cin >> c1;
    cout << "Enter 2nd character: ";
    cin >> c2;
    cout << "Enter 3rd character: ";
    cin >> c3;
    cout << "Enter 4th character: ";
    cin >> c4;
    cout << "Enter 5th character: ";
    cin >> c5;
    if (c1 && c2 && c3 && c4 && c5) {
        if ((c1 >= 'a' && c1 <= 'z' || c1 >= 'A' && c1 <= 'Z' || c1 >= '0' && c1 <= '9') &&
            (c2 >= 'a' && c2 <= 'z' || c2 >= 'A' && c2 <= 'Z' || c2 >= '0' && c2 <= '9') &&
            (c3 >= 'a' && c3 <= 'z' || c3 >= 'A' && c3 <= 'Z' || c3 >= '0' && c3 <= '9') &&
            (c4 >= 'a' && c4 <= 'z' || c4 >= 'A' && c4 <= 'Z' || c4 >= '0' && c4 <= '9') &&
            (c5 >= 'a' && c5 <= 'z' || c5 >= 'A' && c5 <= 'Z' || c5 >= '0' && c5 <= '9')) {
            // Scheme 1
            if (c1 >= 65 && c1 <= 90) {
                c1 -= 3;
                c2 -= 3;
                c3 -= 3;
                c4 -= 3;
                c5 -= 3;
                cout << "Decrypted Message is: " << c5 << c4 << c3 << c2 << c1;
            }
            // Scheme 2 
            else if (c1 >= 97 && c1 <= 122) {
                if (c1 == 'a' || c1 == 'e' || c1 == 'E') { // 0 char vowel change
                    c1 += 4;
                }
                else if (c1 == 'i' || c1 == 'o' || c1 == 'I' || c1 == 'O') {
                    c1 += 6;
                }
                else if (c1 == 'u') {
                    c1 = 'a';
                }
                else if (c1 == 'U') {
                    c1 = 'A';
                }
                if (c2 == 'a' || c2 == 'e' || c2 == 'E' || c2 == 'A') { // 1 char vowel change
                    c2 += 4;
                }
                else if (c2 == 'i' || c2 == 'o' || c2 == 'I' || c2 == 'O') {
                    c2 += 6;
                }
                else if (c2 == 'u') {
                    c2 = 'a';
                }
                else if (c2 == 'U') {
                    c2 = 'A';
                }
                if (c3 == 'a' || c3 == 'e' || c3 == 'E' || c3 == 'A') { // 2 char vowel change
                    c3 += 4;
                }
                else if (c3 == 'i' || c3 == 'o' || c3 == 'I' || c3 == 'O') {
                    c3 += 6;
                }
                else if (c3 == 'u') {
                    c3 = 'a';
                }
                else if (c3 == 'U') {
                    c3 = 'A';
                }
                if (c4 == 'a' || c4 == 'e' || c4 == 'E' || c4 == 'A') { // 3 char vowel change
                    c4 += 4;
                }
                else if (c4 == 'i' || c4 == 'o' || c4 == 'I' || c4 == 'O') {
                    c4 += 6;
                }
                else if (c4 == 'u') {
                    c4 = 'a';
                }
                else if (c4 == 'U') {
                    c4 = 'A';
                }
                if (c5 == 'a' || c5 == 'e' || c5 == 'E' || c5 == 'A') { // 4 char vowel change
                    c5 += 4;
                }
                else if (c5 == 'i' || c5 == 'o' || c5 == 'I' || c5 == 'O') {
                    c5 += 6;
                }
                else if (c5 == 'u') {
                    c5 = 'a';
                }
                else if (c5 == 'U') {
                    c5 = 'A';
                }
                // 0 index case conversion
                if (c1 >= 65 && c1 <= 90) {
                    c1 += 32;
                }
                else if (c1 >= 97 && c1 <= 122) {
                    c1 -= 32;
                }

                // 1 index case conversion
                if (c2 >= 65 && c2 <= 90) {
                    c2 += 32;
                }
                else if (c2 >= 97 && c2 <= 122) {
                    c2 -= 32;
                }
                // 2 index case conversion
                if (c3 >= 65 && c3 <= 90) {
                    c3 += 32;
                }
                else if (c3 >= 97 && c3 <= 122) {
                    c3 -= 32;
                }
                // 3 index case conversion
                if (c4 >= 65 && c4 <= 90) {
                    c4 += 32;
                }
                else if (c4 >= 97 && c4 <= 122) {
                    c4 -= 32;
                }
                // 4 index case conversion
                if (c5 >= 65 && c5 <= 90) {
                    c5 += 32;
                }
                else if (c5 >= 97 && c5 <= 122) {
                    c5 -= 32;
                }
                cout << "Final Answer is coming .................." << endl;
                cout << "Final value is " << c1 << c2 << c3 << c4 << c5;
            }
            else {
                cout << "Final Answer=:" << c1 << c2 << c3 << c4 << c5;
            }
        }
        else {
            cout << "Invalid Input Character";
        }
    }
    else {
        cout << "Invalid Input Length Not 5 characters";
    }
    cout << endl;
    system("pause");
    return 0;
}