#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int Ran(int from,int to){
    return rand() % (to - from + 1) + from;
}

void Full_Matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x[i][j] = Ran(1,10);
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

void Mult(int x[3][3],int x1[3][3],int x3[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x3[i][j] = x[i][j] * x1[i][j];
        }
    }
}

int main(){
    srand(time(0));
    int x[3][3],x1[3][3],x3[3][3];
    Full_Matrix(x);
    Full_Matrix(x1);
    cout<<"Matrix Number 1 Is : \n";
    print_matrix(x);
    cout<<"Matrix Number 2 Is : \n";
    print_matrix(x1);
    Mult(x,x1,x3);
    cout<<"The Result Of Mult: \n";
    print_matrix(x3);
}