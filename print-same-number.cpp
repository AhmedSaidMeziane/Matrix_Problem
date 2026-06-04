#include<iostream>
#include"MYlib.h"
using namespace std;

bool Is_Found(int x[3][3],int numborr){
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] == numborr){
                return true;
            }
        }
    }
    return false;
}

void print_same_number(int x[3][3],int x1[3][3]){
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            int number = x1[i][j];
            if(Is_Found(x,number)){
                cout<<number<<"    ";
            }
        }
    }    
}

int main(){
    int x[3][3],x1[3][3];
    matrix::Full_Matrix_Random(x,3,3,1,10);
    matrix::Full_Matrix_Random(x1,3,3,1,10);
    cout<<"Matrix Number 1: \n";
    matrix::print_matrix_value(x,3,3);
    cout<<"Matrix Number 2: \n";
    matrix::print_matrix_value(x1,3,3);
    cout<<"Same Value \n";
    print_same_number(x,x1);
    return 0;
}