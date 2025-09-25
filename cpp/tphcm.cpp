#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int i = x+1;
    int b =1;
    int a = 10;
    while(i/a != 0 || i/(b*10) !=0)
    {
        int carry = (i/b)%10;
        int tmp = (i/a)%10;
        if (tmp == carry ){
            i++;
            b = 1;
            a = 10;
            continue;
        }
        a = a*10;
        if (i/a == 0)
        {
            b = b*10;
            a = b*10;
        }
    
    }
    cout << i;
   
   
}