#include <iostream>

using namespace std;

int main() {
    int array[50], counter=0, product=1, numbers;
    
    for(int i=0; i<50; i++){
        if(cin>>numbers){
            array[i] = numbers;
            product = product*array[i];
            counter++;
        }
    }
    
    cout<<"The product is "<<product;
}
