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

int main()
{
    Power first;
    first.calculate();
    Power second;
    second.set(2.0, 3.3);
    second.calculate();


    RGBA rgba(12,175,43,250);
    rgba.print();
    


    return 0;
}

