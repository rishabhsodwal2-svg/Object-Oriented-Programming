#if !defined(BIRD_H)
#define BIRD_H          // Added this so the guard actually works

#include <iostream>     // Moved to its own separate line

class bird {
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // virtual ~bird() {}  // Virtual destructor prevents memory leaks
};

class sparrow : public bird {
public:
    void eat() override  { std::cout << "the sparrow is eating \n"; }  // WE CAN ALSO USE OVERRIDE
    void fly()  { std::cout << "the sparrow is flying\n"; }
};

class Eagle : public bird {
public:
    void eat()  { std::cout << "the Eagle is eating faster \n"; }
    void fly()  { std::cout << "the Eagle is flying faster\n"; }
};

class pigeon : public bird {
public:
    void eat()  { std::cout << "the pigeon is eating \n"; }
    void fly()  { std::cout << "the pigeon is flying\n"; }
};

#endif                  // Added the missing closing directive
