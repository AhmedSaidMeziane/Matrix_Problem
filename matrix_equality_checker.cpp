#include<iostream>
#include<cstdlib>
using namespace std;

int Rnd(int from , int to){
    return rand() % (to - from + 1) + from;
}

void full_matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x[i][j] = Rnd(1,15);
        }
    }
}

void print_matrix(int x[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<x[i][j]<<" | ";
        }
        cout<<"\n";
        
    }
}

int sum_matrix(int x[3][3]){
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            sum+=x[i][j];
        }
    }
    return sum;    
}

bool checker(int sum,int sum2){
    if(sum == sum2){
        return 1;
    }else{
        return 0;
    }
}

void checker_confirm(int sum,int sum2){
    if(checker(sum,sum2)){
        cout<<"The Matrix Are Equality \n";
    }else{
        cout<<"No \n";
    }
}

int main(void){
    srand(time(0));
    int x[3][3],x1[3][3];
    full_matrix(x);
    full_matrix(x1);
    cout<<"Matrix Number 1: \n";
    print_matrix(x);
    cout<<"Matrix Number 2: \n";
    print_matrix(x1);
    cout<<"Sum Matrix 1: "<<sum_matrix(x)<<"\n";
    cout<<"Sum Matrix 2: "<<sum_matrix(x1)<<"\n";
    checker_confirm(sum_matrix(x),sum_matrix(x1));
    return 0;
}