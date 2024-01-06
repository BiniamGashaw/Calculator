#include <iostream>
using namespace std;
#ifndef CALCULATOR_H
#define CALCULATOR_H



class Calculator{
    float inputA;
    float inputB;
    float output;


    public:
        Calculator();
        Calculator(float, float, float);
        Calculator(const Calculator&);

        float getInputA();
        void setInputA(float);
        float getInputB();
        void setInputB(float);
        float getOutput();
        void setOutput(float);

        void add();
        void subtract();
        void multiply();
        void divide();

        void displayTotal();


};

#endif