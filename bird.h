#pragma once

#include <iostream>
#include <string>


class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0;

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};
class Duck : public Bird {
    public:
    Duck() : Bird("Duck") {cry();}
    void cry() override {
        std::cout << "Quack!" << std::endl;
    }
    void fly() override {
        std::cout << "This bird can fly." << std::endl;
    }
    void swim() override {
        std::cout << "This bird can swim." << std::endl;
    }
    ~Duck() override {
        std::cout << "Quack!" << std::endl;
    }
};
class Penguin : public Bird {
    public:
    Penguin() : Bird("Penguin") {cry();}
    void cry() override {
        std::cout << "Squawk!" << std::endl;
    }
    void fly() override {
        std::cout << "This bird can't fly." << std::endl;
    }
    void swim() override {
        std::cout << "This bird can swim." << std::endl;
    }
    ~Penguin() override {
        std::cout << "Squawk!" << std::endl;
    }
};
class Eagle : public Bird {
    public:
    Eagle() : Bird("Eagle") {cry();}
    void cry() override {
        std::cout << "Screech!" << std::endl;
    }
    void fly() override {
        std::cout << "This bird can fly." << std::endl;
    }
    void swim() override {
        std::cout << "This bird can't swim." << std::endl;
    }
    ~Eagle() override {
        std::cout << "Screech!" << std::endl;
    }
};


