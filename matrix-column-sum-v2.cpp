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

int sum_each_row(int arr[3][3],int row){
    int sum = 0;
    for(int i = 0;i<3;i++){
        sum += arr[i][row];
    }
    return sum;
}

void append(int arr[3][3],int arr1[3]){
    for(int i = 0;i<3;i++){
        arr1[i] = sum_each_row(arr,i);
    }
}
void print_result(int arr1[3]){
    for(int i =0;i<3;i++){
        cout<<arr1[i]<<endl;
    }
}

void run(){
    int arr[3][3], arr1[3];
    Full_Matrix(arr);
    print_matrix(arr);
    append(arr,arr1);
    print_result(arr1);    
}

int main(){
    srand(time(0));
    run();
}