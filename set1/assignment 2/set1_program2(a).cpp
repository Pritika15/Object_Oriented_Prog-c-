#include<iostream>
class ComplexNumbers {
    
    private :
    int real;
    int imaginary;
    
    public :
    ComplexNumbers(int r,int i){
        real=r;
        imaginary=i;
    }
    
    void plus(ComplexNumbers c2){
        real = real + c2.real;
        imaginary += c2.imaginary;
    }
    void print(){
            cout << real << " + " << "i" << imaginary << endl;
    }
};
    
