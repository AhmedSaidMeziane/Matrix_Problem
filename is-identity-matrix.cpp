#include<iostream>
#include<iomanip>
using namespace std;

bool detr(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(x[i][i] != 1){
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
        cout<<"The Matrix Is Identify \n";
    }else{
        cout <<"The Matrix Is Not Identify \n";
    }
}
int main(){
    int x[3][3]{
        {1,0,0},
        {0,1,9},
        {0,0,1}
    };

    Checker_true(x);
}