/**
 * \file example.cpp
 * \brief Demonstration of basic Doxygen documentation.
 */

/**
 * \class Calculator
 * \brief Performs basic arithmetic operations.
 */
class Calculator {
public:

    /**
     * \brief Adds two numbers.
     * \param a First number.
     * \param b Second number.
     * \return Sum of the two numbers.
     */
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calculator;

    int result = calculator.add(10, 20);

    return 0;
}