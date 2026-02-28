#include <iostream>
using namespace std;


   //Step 1 — Base Class

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() {}
};

int main(){
   return 0;
}

