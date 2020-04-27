#include <iostream>
#include <string>
using namespace std;

int main() {
    int userNum = 10;
    int currentLine;
    int spaceCount, spaceCountLeft, spaceCountRight;
    int spaces;
    int starCount;
    int stars;
    int lineCount;
    starCount = (userNum * 2) - 1;
    spaceCount = 0;
    lineCount = userNum;
    for (currentLine = 0; currentLine < lineCount; currentLine++) {
        spaceCountLeft = spaceCount / 2;
        spaceCountRight = spaceCount / 2;
        for (spaces = 0; spaces < spaceCountLeft; spaces++)
            cout << " ";
        for (stars = 0; stars < starCount; stars++)
            cout << "*";
        for (spaces = 0; spaces < spaceCountRight; spaces++)
            cout << " ";
        spaceCount += 2;
        starCount -=2;
        cout<<endl;
    }
    starCount = 1;
    spaceCount = 2*userNum - 2;
    for (currentLine = 0; currentLine < lineCount; currentLine++) {
        spaceCountLeft = spaceCount / 2;
        spaceCountRight = spaceCount / 2;
        for (spaces = 0; spaces < spaceCountLeft; spaces++)
            cout << " ";
        for (stars = 0; stars < starCount; stars++)
            cout << "*";
        for (spaces = 0; spaces < spaceCountRight; spaces++)
            cout << " ";
        spaceCount -= 2;
        starCount +=2;
        cout<<endl;
    }

    return 0;
}