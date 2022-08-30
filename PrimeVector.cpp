#include<iostream>
#include<vector>

using namespace std;

vector<int> primeVector(int n){
    vector<int> primeArr;
    
    for(int i = 2; i < n; i++){
        int check = 0;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                check = 1;
                break;
            }
        }
        if(check == 0){
            primeArr.push_back(i);
        }
    }

    return primeArr;
}

int main(){
    vector<int> prime_arr;
    int n;
    cin>>n;
    prime_arr = primeVector(n);

    for(int i = 0; i < prime_arr.size(); i++){
        cout<<prime_arr[i]<<" ";
    }
}
