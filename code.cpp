#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int add(int a, int b) {
     int r = a+b;
     return r;
}

int sub(int a, int b) {
    int r = a-b;
     return r;
}

int mul(int a, int b) {
    int r = a*b;
     return r;
}

int divide(int a, int b) {
    int r = a/b;
     return r;
}

int main() {

    int n1,n2,result;
    char op;
    cout<<" Calculator for 5 calculations : \n";


    for(int j=0; j<5; j++) {

        cout<<" \n Enter first number : \n";
        cin>>n1;

        cout<<" Enter the second number : \n";
        cin>>n2;

        cout<<"Enter the operation you want to apply for your entered numbers : \n \n";
        cout<<"1. Addition (+) \n 2. Subtraction (-) \n  3. Multiplication (*) \n  4. Division (/) \n 5. Exit(E) \n\n\n";
        cin>>op;

        if(op == '+') {

           result = add(n1,n2);
           cout<<"The answer after addition is : "<<result<<" \n "; 
           cout<<"You may press any key to exit the calculator :-) \n";
           break;

        }

        else if(op == '-') {

              result = sub(n1,n2);
           cout<<"The answer after subtraction is : "<<result<<" \n "; 
           cout<<"You may press any key to exit the calculator :-) \n";
           break;

        }

        else if(op == '*') {

            result = mul(n1,n2);
           cout<<"The answer after multiplication is : "<<result<<" \n "; 
           cout<<"You may press any key to exit the calculator :-) \n";
           break;

        }

        else if(op == '/') {

            result = divide(n1,n2);
           cout<<"The answer after division is : "<<result<<" \n "; 
           cout<<"You may press any key to exit the calculator :-) \n";
           break;

        }

        else if(op == 'E' || op =='e') {

           cout<<"Thanks a lot for using this calculator!";
           break;

        }

        else {
            cout<<"The input recieved was invalid, please try again :-( \n\n";
            cout<<"You may press any key to exit the calculator :-) \n";
            break;
        }



            


    }

            getch();

}

