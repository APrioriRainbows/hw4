#include <iostream>
using namespace std;

int main() {
    int countingNum, userNum, evensCount, oddsCount, currentDigit, slicedNum;
    cout<<"Please input a positive integer: ";
    cin>>userNum;
    if (userNum >= 0) {
        for (countingNum = 0; countingNum <= userNum; countingNum++) {
            slicedNum = countingNum;
            evensCount = 0;
            oddsCount = 0;
            while (slicedNum > 0) {
                currentDigit = slicedNum % 10;
                if (currentDigit % 2 == 0)
                    evensCount++;
                else
                    oddsCount++;
                slicedNum /= 10;
            }
            if (evensCount > oddsCount)
                cout << countingNum << endl;
        }
    }
    else
        cout<<"Not a positive integer!"<<endl;
    return 0;
}