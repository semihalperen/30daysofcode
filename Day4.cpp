using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge < 0)
            cout << "Age is not valid, setting age to 0.\n";
        initialAge > 0 ? age = initialAge : age = 0;

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        age < 18 ? (age >= 13 ? cout << "You are a teenager.\n" : cout << "You are young.\n"):cout << "You are old.\n";

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }

int main(){
