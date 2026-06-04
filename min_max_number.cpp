#include<iostream>
#include"MYlib.h"
#include<cstdlib>
using namespace std;

int min(int x[3][3]){
    int min = x[0][0];
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] <= min){
                min = x[i][j];
            }
        }
    }
    return min;
}

int max(int x[3][3]){
    int max = x[0][0];
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] >= max){
                max = x[i][j];
            }
        }
    }
    return max;
}
int main(){
    srand(time(0));
    int x[3][3];
    matrix::Full_Matrix_Random(x,3,3,1,100);
    matrix::print_matrix_value(x,3,3);
    cout<<"Min Number: "<<min(x);
    cout<<"\n";
    cout<<"Max Number: "<<max(x);
    return 0;
}