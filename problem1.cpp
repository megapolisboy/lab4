#include <iostream>
using namespace std;


char s[300];

bool is_palindrome(int start, int end){
    bool is_palind = true;
    for (int i = start; i <= end; i++){
        if (s[i] != s[start+end-i]){
            is_palind = false;
        }
    }
    return is_palind;
}

int main(){
    int n;
    cin >> n;
    cin >> s;
    int k = n;
    for (int start = 0; start < n; start++){
        if (is_palindrome(start, n-1)){
            for (int i = start-1; i>= 0; i--){
                s[k] = s[i];
                k++;
            }
            break;
        }
    }
    for (int i = 0; i < 2*n; i++){
        cout << s[i];
    }
    cout << endl;
}