#include<iostream>
#include<iomanip>
using namespace std;

bool detr(int x[3][3]){
    int ww = x[0][0];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][i] != ww){
                return 0;
            }
        }
    }
    return 1;
}

bool another(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(i != j){
                if(x[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

void Checker_true(int x[3][3]){
    if(another(x) && detr(x)){
        cout<<"The Matrix Is Scalar \n";
    }else{
        cout <<"The Matrix Is Not Scalar \n";
    }
}
int main(){
    int x[3][3]{
        {9,0,0},
        {0,9,0},
        {0,0,9}
    };

    Checker_true(x);
}