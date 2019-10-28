#include <iostream>
#include <memory>

class Shape
{
public:
    virtual const void triangle()const = 0;
    virtual ~Shape(){   }
};

class Triangle: public Shape
{
public:
    virtual const void triangle()const override
    { std::cout<<"I am a triangle\n";   }
    virtual ~Triangle(){    }
};

class Isosceles : public Triangle
{
public:
    virtual const void triangle()const override
    {   std::cout<<"I am an isosceles triangle\n";  }
    virtual ~Isosceles(){   }
};
class Equilateral: public Isosceles
{
public:
    virtual const void triangle()const override
    {   std::cout<<"I am an equilateral triangle\n";  }
    virtual ~Equilateral(){   }
};

int main()
{
    std::shared_ptr<Shape> obj[3];

    obj[0] = std::make_shared<Equilateral>();
    obj[1] = std::make_shared<Isosceles>();
    obj[2] = std::make_shared<Triangle>();

    for(auto it: obj)
        it->triangle();
    return 0;
}