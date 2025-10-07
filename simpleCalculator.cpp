#include<iostream>
using namespace std ;


double add(double x, double y){
    return x+y; 
}

double subtract(double x, double y){
    return x -y ;
}

double multiply(double x , double y){
    return x*y ;
}

double divide(double x , double y){
    return x/y ;
}

int main(){
    cout << "First, choose what operation you want to perform on 2 inputs that you will provide shortly after:" ;
    cout << " 1: a + b, 2: a-b , 3: a*b , 4: a/b ?"; 
    int operation ;
    cin >> operation; 
    cout << "Enter a :" ;
    double a;
    cin >> a ;
    cout << "Enter b :" ;
    double b ; 
    cin >> b ;

    cout << "calculating ..." ;
    int count = 0 ;
    while(count != 1000000000){
        count++ ;
    }
    cout << "The result is: ";

    if(operation == 1){
        cout << add(a , b) ;
    }
    else if(operation == 2){
        cout << subtract(a , b) ;
    }
    else if(operation == 3){
        cout << multiply(a , b) ;
    }
    else if(operation == 4){
       cout <<  divide(a , b) ;
    }
    else{
        cout << "Invalid operation entered!" ;
    }
}