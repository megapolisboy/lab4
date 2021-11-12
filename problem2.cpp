#include <iostream>
using namespace std;

bool is_astute(int a, int b, int c){
    return 
        (a*a < b*b + c*c && 
        b*b < a*a + c*c &&
        c*c < a*a + b*b);
}

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (i == j || j == k || i == k) continue;
                if(is_astute(a[i], a[j], a[k])){
                    cout << a[i] << ' ' << a[j] << ' '<< a[k] << endl;
                }
            }
        }
    }
}