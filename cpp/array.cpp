#include <iostream>
class DynamicArray{
private:
    int* data;
    int capacity;
    int size;
    void resize(int newcapacity){
        int* newdata = new int[newcapacity];
        for (int i = 0; i < size; i++){
            newdata[i] = data[i];
        }
        delete[] data;
        data = newdata;
        capacity = newcapacity;
    }
public:
    DynamicArray(int startcapacity){
        if (startcapacity < 16){
            startcapacity = 16;
        }
        int cap = 16;
        while ( cap < startcapacity){
            cap *= 2;
        }
        
        capacity = cap;
        data = new int[capacity];
        size = 0;
        
    }
    ~DynamicArray(){
        delete[] data;
    }
    void push_back(int value){
        if (size == capacity){
            resize(capacity*2);
        }
        data[size] = value;
        size++;
    }

};

int main(){
}