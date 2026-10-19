#include <iostream>    // make the box diagram of this code to understand all type of inheritance ❤️❤️❤️❤️❤️❤️
#include <string>

// ==========================================
// 1. SINGLE INHERITANCE
// A single derived class inherits from a single base class.
// ==========================================
class Device {
protected:
    std::string brand = "Generic";
public:
    void powerOn() {
        std::cout << "Device is now ON.\n";
    }
};

class Smartphone : public Device {
public:
    void showBrand() {
        std::cout << "Smartphone Brand: " << brand << "\n";
    }
};

// ==========================================
// 2. MULTIPLE INHERITANCE
// A single derived class inherits from more than one base class.
// ==========================================
class Camera {
public:
    void takePhoto() {
        std::cout << "Photo captured successfully.\n";
    }
};

class MusicPlayer {
public:
    void playMusic() {
        std::cout << "Playing music tracks.\n";
    }
};

// MultimediaPhone inherits from BOTH Camera and MusicPlayer
class MultimediaPhone : public Camera, public MusicPlayer {
public:
    void launchApp() {
        std::cout << "Multimedia application launched.\n";
    }
};

// ==========================================
// 3. MULTILEVEL INHERITANCE
// A derived class inherits from another derived class, forming a chain.
// ==========================================
class Vehicle {
public:
    void move() {
        std::cout << "Vehicle is moving.\n";
    }
};

class Car : public Vehicle {
public:
    void honk() {
        std::cout << "Car is honking: Beep Beep!\n";
    }
};

class ElectricCar : public Car {
public:
    void chargeBattery() {
        std::cout << "Electric Car is charging.\n";
    }
};

// ==========================================
// 4. HIERARCHICAL INHERITANCE
// Multiple derived classes inherit from a single base class.
// ==========================================
class Employee {
protected:
    double salary = 50000.0;
};

class Developer : public Employee {
public:
    void displayDevSalary() {
        std::cout << "Developer Salary: $" << salary + 15000 << "\n";
    }
};

class Manager : public Employee {
public:
    void displayManagerSalary() {
        std::cout << "Manager Salary: $" << salary + 30000 << "\n";
    }
};

// ==========================================
// 5. HYBRID (VIRTUAL) INHERITANCE
// A combination of two or more inheritance types. 
// Uses 'virtual' to prevent the "Diamond Problem" (duplicate base classes).
// ==========================================
class LivingBeing {
public:
    void breathe() {
        std::cout << "Living being is breathing.\n";
    }
};

// Virtual base class inheritance
class Animal : virtual public LivingBeing {};
class Reptile : virtual public LivingBeing {};

// Snake inherits from both Animal and Reptile, but gets only ONE copy of LivingBeing
class Snake : public Animal, public Reptile {
public:
    void crawl() {
        std::cout << "Snake is crawling.\n";
    }
};

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    std::cout << "--- 1. Single Inheritance ---\n";
    Smartphone myPhone;
    myPhone.powerOn();
    myPhone.showBrand();

    std::cout << "\n--- 2. Multiple Inheritance ---\n";
    MultimediaPhone myMultiPhone;
    myMultiPhone.takePhoto();
    myMultiPhone.playMusic();
    myMultiPhone.launchApp();

    std::cout << "\n--- 3. Multilevel Inheritance ---\n";
    ElectricCar myTesla;
    myTesla.move();          // From Vehicle
    myTesla.honk();          // From Car
    myTesla.chargeBattery(); // From ElectricCar

    std::cout << "\n--- 4. Hierarchical Inheritance ---\n";
    Developer dev;
    Manager mgr;
    dev.displayDevSalary();
    mgr.displayManagerSalary();

    std::cout << "\n--- 5. Hybrid Inheritance (Diamond Problem Solved) ---\n";
    Snake mySnake;
    mySnake.breathe();       // Resolved unambiguously due to virtual inheritance
    mySnake.crawl();

    return 0;
}
