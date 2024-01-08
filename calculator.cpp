#include "calculator.h"

Calculator::Calculator(){
    inputA = -1;
    inputB = -3;
    output = -5;

}
Calculator::Calculator(float A, float B , float O){

    inputA = A;
    inputB = B;
    output = O;
}
Calculator::Calculator(const Calculator& rhs){
    inputA = rhs.inputA;
    inputB = rhs.inputB;
    output = rhs.output;
}

float Calculator::getInputA(){
    return inputA;


}
void Calculator::setInputA(float A){
    inputA = A;
}
float Calculator::getInputB(){
    return inputB;

}
void Calculator::setInputB(float B){
    inputB = B;

}
float Calculator::getOutput(){
    return output;
}

void  Calculator::setOutput(float O ){
    output = O;
}

void Calculator::add(){
    output = inputA + inputB;
    setOutput(output);
    displayTotal();

}

void Calculator::subtract(){
output = inputA - inputB;
    setOutput(output);
    displayTotal();

}
void Calculator::multiply(){
 output = inputA * inputB;
    setOutput(output);
    displayTotal();
}
void Calculator::divide(){
output = inputA / inputB;
    setOutput(output);
    displayTotal();

}

void Calculator::displayTotal(){
    cout << "The output is " << getOutput();

}