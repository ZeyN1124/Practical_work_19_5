#include <iostream>
class Animal
{
public:
    virtual void makeSound() const = 0;
};

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Meow\n";
    }
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Woof\n";
    }
};

class Duck : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Quack\n";
    }
};

int main()
{
    Animal* animals[3];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Duck();

    for (Animal* a : animals)
        a->makeSound();
}