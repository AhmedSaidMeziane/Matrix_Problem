#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int Rnd(int from , int to){
    return rand() % (to - from + 1)+from;
}
namespace matrix{

    void Full_Matrix_Random(int x[3][3],int cols,int rows,int from,int to){
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                x[i][j] = Rnd(from,to);
            }
        }
    }

    void print_matrix_value(int x[3][3],int cols,int rows){
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                cout<<setw(5)<<x[i][j]<<setw(5);
            }
            cout<<"\n";
        }        
    }
    
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

};