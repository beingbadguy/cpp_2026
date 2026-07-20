#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {4, 4, 2};
    int singleNumber = 0;
    for(int num:vec){
        singleNumber ^= num;
    }
    cout << "======" << endl;
    cout << "This is the single Number : " << singleNumber<<endl;
    cout << "======" << endl;
    return 0;
}