#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "How many numbers? ";
    cin >> size;
    
    int* numbers = new int[size];
    
    for (int i = 0; i < size; i++){
        numbers[i] = (i+1)*10;
    }
    
    for (int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    
    delete[] numbers; 
    numbers = nullptr;
    
     for (int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    
    // cout << size; 
}
