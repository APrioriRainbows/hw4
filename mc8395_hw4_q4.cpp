#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int length;
    int UserNum;
    double discriminant;
    int count;
    double exponent;
//    cout<<"Section a"<<endl;
//    cout<<"Please enter the length of the sequence: ";
//    cin>>length;
//    cout<<"Please enter your sequence: "<<endl;
//    discriminant = 1;
//    for(count = 0; count < length; count ++){
//        cin>>UserNum;
//        discriminant *= UserNum;
//    }
//    exponent = (1.0/length);
//    cout<<"The geometric mean is "<<pow(discriminant,exponent)<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;
    UserNum = 1;
    length = 0;
    while(UserNum != -1){
        cin>>UserNum;
        discriminant *= UserNum;
        length++;
    }
    exponent = (1.0/length);
    cout<<"The geometric mean is "<<pow(discriminant,exponent)<<endl;
    return 0;
}