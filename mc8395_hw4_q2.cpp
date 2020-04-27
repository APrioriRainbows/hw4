#include <iostream>
using namespace std;

int main() {
    int userNum;
    cout<<"Enter a decimal number: "<<endl;
    cin>>userNum;
    int changeNum = userNum;
    while(changeNum > 0){
        if (changeNum / 1000 >= 1) {
            cout << "M";
            changeNum -= 1000;
        } else if (changeNum / 500 >= 1){
            cout<<"D";
            changeNum -= 500;
        }else if (changeNum / 100 >= 1){
            cout<<"C";
            changeNum -= 100;
        }else if (changeNum / 50 >= 1){
            cout<<"L";
            changeNum -= 50;
        }else if (changeNum / 10 >= 1){
            cout<<"X";
            changeNum -= 10;
        }else if (changeNum / 5 >= 1){
            cout<<"V";
            changeNum -= 5;
        }else if (changeNum / 1 >= 1) {
            cout << "I";
            changeNum -= 1;
        }
    }
    return 0;
}

