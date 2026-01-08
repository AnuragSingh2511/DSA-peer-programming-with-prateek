#include<iostream>
using namespace std;

// sum of digits
//feature - 

//data types - int , float, double, bool
//return types - int , float, double, bool , void

int sumOfDigits(int num){

    int sum = 0;

    while( num != 0){
       int digit = num % 10;

       sum = sum + digit; 

       num = num / 10;
    }

    return sum;
}  


int main(){
   
    //driver function

    //i/p - 699

    // sum , digits , num

    /*
       divisor )      dividend    ( quotient
  
        ------------   =>  Dividend = quo * divisor + remainder
        remainder
    */

    /*
    num = 699
    digits = num % 10 = 699 % 10 = 9 
    num = num / 10 = 699 / 10 = 69
    digits = num % 10 = 69 % 10 = 9
    num = num / 10 = 69 / 10 = 6
    digits = num % 10 = 6 % 10 = 0

    sum = 0 
    sum + 9 + 9 + 6 = 24  ...    
    */  
    

    int num = 123; // 1 + 2 + 3 = 6

    int ans = sumOfDigits(num);

    cout << ans;
   

    return 0;
}