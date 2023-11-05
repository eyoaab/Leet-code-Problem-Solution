#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for (int j = 0; j < n; j++) {
    cin >> a[j];}
    int c=0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            c++;
        }
    }
    
}
cout<<"Array is sorted in "<<c<<" swaps.\nFirst Element: "<<a[0]<<"\nLast Element: "<<a[n-1]<<"\n"; 
return 0;
}