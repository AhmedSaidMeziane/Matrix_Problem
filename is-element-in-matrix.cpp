#include<iostream>
#include"MYlib.h"
using namespace std;

bool IS_Found(int x[3][3],int number){
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            if(x[i][j] == number){
                return true;
            }
        }
    }
    return false;
}
int main(){
    srand(time(0));
    int x[3][3];
    int l;
    matrix::Full_Matrix_Random(x,3,3,1,10);
    matrix::print_matrix_value(x,3,3);
    cout<<"Enter Number Want To find: \n";
    cin>>l;
    if(IS_Found(x,l)){
        cout<<"Yes \n";
    }else{
        cout<<"No \n";
    }
}