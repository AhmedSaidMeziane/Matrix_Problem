#include<iostream>
#include"MYlib.h"
using namespace std;
bool is_palindrom(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] != x[i][3-1-j]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int Matrix1[3][3] = { {1,2,1},{5,5,9},{7,3,7} };
    matrix::print_matrix_value(Matrix1,3,3);
    if(is_palindrom(Matrix1)){
        cout<<"Palindrom \n";
    }
    return 0;
}