#include "vect2.hpp"

int main(void) {

    vect2 a;
    vect2 b(8, 9);
    vect2 c(3, 3);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n\n";
    std::cout << "a[0] = " << a[0] << ", a[1] = " << a[1] << "\n";
    std::cout << "b[0] = " << b[0] << ", b[1] = " << b[1] << "\n";
    c[0] = 7;
    std::cout << "c[0] = " << c[0] << ", c[1] = " << c[1] << "\n\n";

    a = vect2(3, 3);
    std::cout << "a = " << a << "\n";
    std::cout << "2 * a = " << 2 * a << "\n";
    std::cout << "a * 2 = " << a * 2 << "\n";
    std::cout << "b + 2 = " << b + 2 << "\n";
    std::cout << "2 + b = " << 2 + b << "\n\n";

    a = vect2(1, 1);
    b = vect2(2, 2);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n\n";
    a += b += c;
    std::cout << "a += b += c : a = " << a << ", b = " << b << "\n";

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n\n";

    a = vect2(5, 5);
    std::cout << "a = " << a << "\n";
	a -= 2;
    std::cout << "a -= 2 : " << a << std::endl;

    std::cout << "b = " << b << "\n";
    a -= b;
    std::cout << "a -= b : " << a << "\n\n";

    std::cout << "a = " << a << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    a = b * c + 2;
    std::cout << "a = b * c + 2 : " << a << "\n";
    a = 2 + b * c;
    std::cout << "a = 2 + b * c : " << a << "\n\n";
    a = vect2(1, 1);
    std::cout << "a = " << a << "\n";
    std::cout << "a++ = " << a++ << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << "++a = " << ++a << "\n";
    std::cout << "a-- = " << a-- << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << "--a = " << --a << "\n\n";

	vect2 f(2,3);
	vect2 g(2,3);
    std::cout << "b == c : " << (g == f) << "\n";
    std::cout << "b != c : " << (g != f) << "\n";
    return 0;
}
