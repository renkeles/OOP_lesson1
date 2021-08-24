#include <iostream>
#include <cstdint>

class Power {
private:
    double x = 0.0;
    double y = 0.0;
public:
    void set(double _x, double _y) {
        x = _x;
        y = _y;
    }
    void calculate() {
        std::cout << x * y << std::endl;
    }
};

class RGBA {
private:
    std::uint8_t m_red   = 0;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue  = 0;
    std::uint8_t m_alpha = 255;
public:
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :
        m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) { 
    }
    void print() {
        //std::cout.operator<<(m_red);
        std::cout << "red = " << (int)m_red << std::endl;
        std::cout << "green = " << (int)m_green << std::endl;
        std::cout << "blue = " << (int)m_blue << std::endl;
        std::cout << "alpha = " << (int)m_alpha << std::endl;
    }
};

class Stack {
private:
    int arr[10] = { 0 };
    int lenght = -1;
    int tmp = 0;
public:
    void reset() {
        lenght = -1;
        for (size_t i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    }
    bool push(int x) {
        if (lenght < 10 - 1) {
            arr[++lenght] = x;
            return true;
        }
        else {
            std::cout << x << " not included! Stack overflow!" << std::endl;
            return false;
        }
    }
    int pop() {
        if (lenght == -1) {
            std::cout << "Stack is empty!" << std::endl;
        }
        else {
            tmp = arr[lenght];
            arr[lenght] = 0;
            lenght--;
            return tmp;
        }
    }

    void print() {
        if (lenght == -1) {
            std::cout << "( )" << std::endl;
        }
        else {
            std::cout << "( ";
            for (size_t i = 0; i < lenght + 1; i++) {
            //std::cout.width(3);
            std::cout << arr[i] << " ";
            }
            std::cout << ")" << std::endl;
        }

    }
};

int main()
{
    Power first;
    first.calculate();
    Power second;
    second.set(2.0, 3.3);
    second.calculate();


    RGBA rgba(12,175,43,250);
    rgba.print();
    
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    //stack.print();
    //std::cout << stack.pop() << std::endl;
    //stack.print();
    //std::cout << stack.pop() << std::endl;
    //stack.push(4);
    //stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.push(11);
    stack.print();
    std::cout << "Head stack been = " << stack.pop() << std::endl;
    stack.reset();
    stack.print();
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.print();
    std::cout << "Head stack been = " << stack.pop() << std::endl;
    std::cout << "Head stack been = " << stack.pop() << std::endl;
    stack.print();
    
    Stack stack2;



    return 0;
}

