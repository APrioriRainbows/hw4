#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int length, userNum,count;
    double discriminant, exponent;
    bool isEndOfSequence;
    //SECTION A
    cout<<"Section a"<<endl;
    cout<<"Please enter the length of the sequence: ";
    cin>>length;
    cout<<"Please enter your sequence: "<<endl;
    discriminant = 1;
    for(count = 0; count < length; count ++){
        cin>>userNum;
        discriminant *= userNum;
    }
    exponent = (1.0/length);
    cout<<"The geometric mean is "<<pow(discriminant,exponent)<<endl;
    //SECTION B
    cout<<"Section b"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;
    length = 0;
    isEndOfSequence = false;
    discriminant = 1;
    while(!isEndOfSequence){
        cin>>userNum;
        if (userNum == -1)
            isEndOfSequence = true;
        else {
            discriminant *= userNum;
            length++;
        }
    }
    exponent = (1.0/length);
    cout<<"The geometric mean is "<<pow(discriminant,exponent)<<endl;
    return 0;
}