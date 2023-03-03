#include <iostream>
#include <stdio.h>
using namespace std;

//function calculator
float calculator_function(float x,float y, string z){
     float first_number =  x;
     float second_number =  y;
     string operation =  z;
     float result ;
     if (operation == "+"){
          result = first_number + second_number;
     }else if(operation == "-"){
          result = first_number - second_number;
     }else if(operation == "*"){
          result = first_number * second_number;
     }else if(operation == "/"){
          result = first_number / second_number;
     }else{
          result = 0;
     }

     return result;
}

int main()
{
     /*
          x = first number
          y = second number
          z = operation symbiol
     */
     float x, y;
     string z ;
     cout << "Tugas Kalkulator Fungsi" << endl;
     cout << "Nama = Mario Aprilnino Prasetyo" << endl;
     cout << "NIM = A11.2022.13990 \n" << endl;
     cout << "=============Calculator===============" << endl;
     //input first_number
     cout << "Enter the first number = " ; 
     cin >> x;
     //input operation
     cout << "Enter the operation symbol(+,-,*,/) = " ;
     cin >> z;
     //input first_number
     cout << "Enter the second number = " ; 
     cin >> y;
     cout << "======================================" << endl;
     //output result 
     if( calculator_function(x,y,z)== 0 ){
          cout << "Sorry your input is wrong, \nplease check your variable and operation symbol" << endl;
     }else{
          cout << "Result of " << x << " " << z << " " << y << " = " <<  calculator_function(x,y,z) << endl;
     }
     cout << "======================================" << endl;
    cin.get();
    return 0;
}