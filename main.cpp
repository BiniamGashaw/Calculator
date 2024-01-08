#include "calculator.h"

void add(Calculator, float, float);
void subtract(Calculator, float, float);
void multiply(Calculator, float, float);
void divide(Calculator, float, float);

int main(){
    char userChar;
    float inputA, inputB;
    Calculator operation;
    do{
        cout << endl << endl << endl << endl << "Welcome to Calculator !!" << endl;
        cout << "Please choose which opertation needs to be done" << endl;
        cout << "\nAddition (A)\n\nSubtraction (S)\n\nMultiplication (M)\n\nDivision (D)\n\nExit (X)\n\nChoice: ";
        cin >> userChar;
        switch(userChar){
            case 'X':
                case 'x' : 
                    return 0;
            case 'A' :
                case 'a': 
                    add(operation, inputA, inputB);
                break;
            case 'S' : 
                case 's':
                    subtract(operation, inputA, inputB);
                break;

            case 'M' :
                case 'm': 
                    multiply(operation, inputA, inputB);

                break;

            case 'D' :
                case 'd':
                    divide(operation, inputA, inputB);

                break;

        }
    }while(userChar != 0);

return 0;
}


void add(Calculator operation, float inputA, float inputB){

    cout << endl <<  "Addtion" << endl << "=============" << endl;
    cout << "Input A: ";
    cin >> inputA;
    operation.setInputA(inputA);
    cout << endl << "Input B: ";
    cin >> inputB;
    operation.setInputB(inputB);
    operation.add();
    

}
void subtract(Calculator operation, float inputA, float inputB){
    cout << endl <<  "Subtraction" << endl << "=============" << endl;
    cout << "Input A: ";
    cin >> inputA;
    operation.setInputA(inputA);
    cout << endl << "Input B: ";
    cin >> inputB;
    operation.setInputB(inputB);
    operation.subtract();
    

}
void multiply(Calculator operation, float inputA, float inputB){
    cout << endl <<  "Multiply" << endl << "=============" << endl;
    cout << "Input A: ";
    cin >> inputA;
    operation.setInputA(inputA);
    cout << endl << "Input B: ";
    cin >> inputB;
    operation.setInputB(inputB);
    operation.multiply();


}
void divide(Calculator operation, float inputA, float inputB){
    cout << endl <<  "divison" << endl << "=============" << endl;
    cout << "Input A: ";
    cin >> inputA;
    operation.setInputA(inputA);
    cout << endl << "Input B: ";
    cin >> inputB;
    operation.setInputB(inputB);
    operation.divide();

}