#include <iostream>
#include <vector>

using namespace std;
int main(){
int n;
cin>>n;
    vector<string> finall;
        finall.reserve(n);  
        
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                finall.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                finall.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                finall.push_back("Buzz");
            }
            else {
                finall.push_back(to_string(i));
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << finall[i] << endl;

        }
    }






}
