#include <iostream>
#include <vector>

using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a<=37){
        cout<<a<<endl;
    }
    else if(a%10>=8){
        a=a/10;
        a++;
        a=a*10;
        cout<<a<<endl;
        
    }
    else if(a%5>=3){
        a=a/5;
        a++;
        a=a*5;
        cout<<a<<endl;
        
    }
    else{
        cout<<a<<endl;
    }
    
}
}