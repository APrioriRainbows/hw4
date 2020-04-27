#include <iostream>
using namespace std;

int main() {
    int userCount;
    int currentEven;
    int count;
    cout << "Section a" << endl;
    cout<<"Please enter a positive integer: ";
    cin>>userCount;
    count = 1;
    while (count <= userCount){
        currentEven = (2*count);
        count++;
        cout<<currentEven<<endl;
    }
    cout << "Section b" << endl;
    cout<<"Please enter a positive integer: ";
    cin>>userCount;
    for (count = 1; count <= userCount; count++){
        currentEven = (2*count);
        cout<<currentEven<<endl;
    }
    return 0;
}
