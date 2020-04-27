#include <iostream>
#include <string>
using namespace std;

int main() {
    int userNum;
    int newNum;
    string outPut;
    cout<<"Enter your decimal number:"<<endl;
    cin>>userNum;
    cout<<"The binary representation of "<<userNum<<" is ";
    newNum = userNum;
    while(newNum > 0) {
        if (newNum % 2 == 0) {
            outPut = "0" + outPut;
        } else
            outPut = "1" + outPut;
        newNum /= 2;
    }
    cout<<outPut;
    return 0;
}


