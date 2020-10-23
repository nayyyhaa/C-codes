#include <iostream>

using namespace std;

/* In this code below, a pointer of the base class will be used to point to
the object of the derived class.*/

class Sports // Base class
{
public:
    virtual void play()
    {
        cout << "I am playing a sport\n";
    }
};

class Basketball : public Sports // Derived class of Sports
{
public:
    void play()
    {
        cout << "I am playing Basketball.\n";
    }
};

class Cricket : public Sports // Derived class of Sports
{
public:
    void play()
    {
        cout << "I am playing Cricket.\n";
    }
};

int main()
{
    Sports *sport; // Pointer of Sports(base) class
    Cricket c;
    Basketball b;

    sport = &c;
    sport->play(); // I am plaing cricket

    sport = &b;
    sport->play(); // I am playing basketball

    return 0;
}