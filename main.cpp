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


 // Step 2 — Derived Classes

class Dog : public Animal {
public:
    void speak() final override {   
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};


//Step 4 — Attempt to Override final



/*class BabyDog : public Dog {
public:
    void speak() override {   //  ERROR
        cout << "Baby dog yaps" << endl;
    }
};
*/



//Step 5 — Diamond Problem


class Walker : virtual public Animal {
};

class Swimmer : virtual public Animal {
};

class Amphibian : public Walker, public Swimmer {
public:
    int age;

    void speak() override {
        cout << "Amphibian makes a mixed sound" << endl;
    }
};



   //Step 7 — Main Function

int main() {

    Animal* ptr1 = new Dog();
    Animal* ptr2 = new Cat();

    ptr1->speak();   
    ptr2->speak();   

    delete ptr1;
    delete ptr2;

   

    // Step 6 — Diamond Fix Test
    Amphibian a;
    a.age = 5;
    cout << "Amphibian age: " << a.age << endl;

    Animal* ptr3 = new Amphibian();
    ptr3->speak();   
    delete ptr3;

    return 0;
}
