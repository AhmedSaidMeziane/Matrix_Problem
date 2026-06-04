#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int Ran(int from,int to){
    return rand() % (to - from + 1) + from;
}

void Full_Matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x[i][j] = Ran(1,100);
        }
    }
}

void print_matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<setw(7)<<x[i][j]<<setw(7);
        }
        cout<<"\n";
    }    
}

bool checker(int x[3][3],int x1[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] != x1[i][j]){
                return 0;
            }
        }
    }
    return 1;    
}

void checker_true(int x[3][3],int x1[3][3]){
    if(checker(x,x1)){
        cout<<"Yesssssssssssssssssssssssssssssssssss \n";
    }else{
        cout<<"Noooooooooooooooooooooooooooooooooooo \n";
    }
}

int main(){
    srand(time(0));
    int x[3][3],x1[3][3];
    Full_Matrix(x);
    Full_Matrix(x1);
    cout<<"Matrix 1: \n";
    print_matrix(x);
    cout<<"Matrix 2: \n";
    print_matrix(x1);    
    checker_true(x,x1);
}