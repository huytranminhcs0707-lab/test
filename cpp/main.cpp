#include <iostream>
using namespace std;
float average(int length, int arr[]){
    float sum = 0;
    for (int i = 0; i < length; i ++){
        sum += arr[i];
    }
    return sum/length;
}

int main() {
    int scores[3] = {80, 72, 77};
    cout << average(3,scores);
    
    
    return 0;
}
