#pragma once
#include <iostream>
#include <numeric> // for std::gcd in C++17+

namespace mathlib {

    template<typename T>
    class Fraction {
    private:
        T numerator;
        T denominator;

        void enforceInvariant() {
            if (denominator == 0) {
                throw std::invalid_argument("Denominator cannot be zero");
            }
            if (denominator < 0) {
                numerator = -numerator;
                denominator = -denominator;
            }
        }

    public:
        Fraction(T num = 0, T denom = 1) : numerator(num), denominator(denom) {
            enforceInvariant();
            simplify();
        }

        void simplify() {
            T divisor = gcd(numerator, denominator);
            numerator /= divisor;
            denominator /= divisor;
        }

        T gcd(T a, T b) const {
            while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        double toDouble() const {
            return static_cast<double>(numerator) / denominator;
        }

        Fraction<T> operator+(const Fraction<T>& other) const {
            return Fraction<T>(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
        }

        Fraction<T> operator-(const Fraction<T>& other) const {
            return Fraction<T>(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
        }

        Fraction<T> operator*(const Fraction<T>& other) const {
            return Fraction<T>(numerator * other.numerator, denominator * other.denominator);
        }

        Fraction<T> operator/(const Fraction<T>& other) const {
            if (other.numerator == 0) throw std::invalid_argument("Division by zero fraction");
            return Fraction<T>(numerator * other.denominator, denominator * other.numerator);
        }

        bool operator==(const Fraction<T>& other) const {
            return numerator == other.numerator && denominator == other.denominator;
        }

        bool operator!=(const Fraction<T>& other) const {
            return !(*this == other);
        }

        bool operator<(const Fraction<T>& other) const {
            return numerator * other.denominator < other.numerator * denominator;
        }

        bool operator<=(const Fraction<T>& other) const {
            return *this < other || *this == other;
        }

        bool operator>(const Fraction<T>& other) const {
            return other < *this;
        }

        bool operator>=(const Fraction<T>& other) const {
            return *this > other || *this == other;
        }

        friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& f) {
            os << f.numerator << '/' << f.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction<T>& f) {
            is >> f.numerator;
            is.ignore(1, '-');
            is >> f.denominator;
            f.enforceInvariant();
            f.simplify();
            return is;
        }
    };

}