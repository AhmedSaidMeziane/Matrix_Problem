#include<iostream>
#include<iomanip>
using namespace std;
void Full_Arr(int x[3][3]){
    int counter = 1;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x[i][j] = counter;
            counter++;
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
void Full_Arr_col(int x[3][3]){
    int counter = 1;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            x[j][i] = counter;
            counter++;
        }
    }
}
int main(){
    int x[3][3];
    Full_Arr(x);
    print_matrix(x);
    cout<<"Col \n";
    Full_Arr_col(x);
    print_matrix(x);
    return 0;
}