#include <iostream>

using namespace std;

class Complex{
private:
    double real, img;
public:
    Complex(double r, double i){
        real = r;
        img = i;
    }

    Complex(double r){
        real = r;
    }

    void set_im(double i){
        img = i;
    }

    void set_real(double r){
        real = r;
    }

    double get_im(){
        return img;
    }

    double get_real(){
        return real;
    }

    Complex add(Complex other){
        Complex result(0, 0);
        result.real = real + other.get_real();
        result.img = img + other.get_im();
        return result;
    }

    void print(){
        cout << real;
        if(img > 0)
            cout << "+" << img;
        else
            cout << img;
        cout << "i";
    }
};

int main(){
    Complex a(1.0, -2.0); // creates 1-2i
    Complex b(3.14); // creates 3.14

    b.set_im(-5);

    Complex c = a.add(b);

    c.print(); // prints 4.14-7i
}
