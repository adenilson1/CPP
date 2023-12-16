#include <iostream>
using namespace std;

class Person{
    public:
    string name;

    Person (string name) : name(name){ cout << "Hello!, my name is " << name << endl; }
    ~Person(){cout << name << " saying goodbay!!" << endl;}
};

Person* createPerson(){
    Person* p = new Person("Peter");
    return p;
}

void changePerson(Person& p){
    p.name += " Parker";
}



int main() {
    //new operator allocates memory on the heap
    // and calls constructor
    Person* person1 = new Person("Aunt May Parker");

    //delete operator frees memory
    // and calls destructor
    delete person1;

    Person* person2 = createPerson();
    changePerson(*person2);
    cout << person2->name << endl;
    delete person2;

    return 0;
}