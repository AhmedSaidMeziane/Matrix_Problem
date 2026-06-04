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
            x[i][j] = Ran(1,10);
        }
    }
}

void print_matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<x[i][j]<<setw(8);
        }
        cout<<"\n";
    }    
}

int main(void){
    srand(time(0));
    int x[3][3];
    Full_Matrix(x);
    print_matrix(x);
}