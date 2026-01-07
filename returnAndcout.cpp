#include<iostream>
using namespace std;

//diff bw return and cout(print)

void squareX(int x){
    cout << x * x;
}

// int squareX(int x){
//     return x * x;
// }


int main(){
    
    // 2^2 = 4 -> 2 * 2

    squareX(5); 

    //   int result = squareX(5); // result = 25
    //   cout << result;



    return 0;
}