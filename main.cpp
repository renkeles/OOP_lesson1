#include <iostream>

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

int main()
{
    Power first;
    first.calculate();
    Power second;
    second.set(2.0, 3.3);
    second.calculate();
    


    return 0;
}

