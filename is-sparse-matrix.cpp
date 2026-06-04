#include<iostream>
#include<math.h>
#include"MYlib.h"
using namespace std;
int counter(int x[3][3],int number){
    int counter = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][j] == number){
                counter++;
            }
        }
    }
    return counter;
}

bool Is_Spare(int x[3][3]){
    short matrix_size = 9;
    if(counter(x,0) >= ceil(matrix_size/2)){
        return 1;
    }
    return 0;
}
int main(){
    int x[3][3]= {{0,1,0},{1,1,1},{1,0,1}};
    matrix::print_matrix_value(x,3,3);
    if(Is_Spare(x)){
        cout<<"Is Spare \n";
    }else{
        cout<<"Not Spare \n";
    }
}