#include <iostream>

enum SHAPE {NONE, CIRCLE, RECTANGLE, SQUARE};

class Shape
{
protected:
    SHAPE m_shape_type;
public:
    Shape(/* args */);
    Shape(const Shape& rhs);
    virtual ~Shape() { std::cout << "Shape Destructor" << std::endl; };
    
    virtual Shape* Clone() {return new Shape(*this); };
    /* Question 1 */
    virtual void get_shape_type() const {std::cout << m_shape_type << std::endl;}
};

Shape::Shape(/* args */) : m_shape_type(NONE)
{
}

Shape::Shape(const Shape& rhs)
{
    m_shape_type = rhs.m_shape_type;
}


class Rectangle : public Shape
{
protected:
    std::uint32_t m_width;
    std::uint32_t m_length; 
public:
    Rectangle(/* args */);
    Rectangle(std::uint32_t length, std::uint32_t width);
    Rectangle(const Rectangle& rhs);
    virtual ~Rectangle();
}; 

Rectangle::Rectangle(/* args */) : m_length(10),  m_width(5)
{
    this -> m_shape_type = RECTANGLE;
}

Rectangle :: Rectangle(std::uint32_t length, std::uint32_t width) : m_length(length), m_width (width)
{
    this -> m_shape_type = RECTANGLE;
}

Rectangle :: 

Rectangle :: Rectangle (const Rectangle& rhs)
{

}

Rectangle::~Rectangle()
{
    std::cout << "calling Rectangle Destructor" << std::endl;
}

class Square : public Rectangle
{
private:
    /* data */
public:
    Square(/* args */);
    Square(std::uint32_t length); 
    Square* Clone() {return new Square(*this); };
    /* Question 4 */
    Square(const Square& rhs);

    void set_length(std::uint32_t length) {this -> m_length = length;};

    std::uint32_t get_length() {return this -> m_length; };

    ~Square();
};

Square::Square(const Square& rhs)
{
    std::cout << "Calling Square Copy Function" << std::endl;
    m_length = rhs.m_length;
    m_shape_type = rhs.m_shape_type;
}

Square::Square(/* args */) // : m_length(5)
{
    this -> m_shape_type = SQUARE;
    this -> m_length = 5;
}

Square::~Square()
{
    std::cout << "Calling Square Destructor" << std::endl;
}


int main(int argc, char const *argv[])
{
    Shape my_new_shape;
    Square my_square;
    my_new_shape.get_shape_type();
    my_square.get_shape_type();
    my_square.set_length(42);

    Square* my_new_square = my_square.Clone();
    std::cout << my_new_square->get_length() << std::endl;
 
    return 0;
}
