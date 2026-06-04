#include<iostream>
#include<iomanip>
#include<cstdlib>
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
void Sum_Row(int x[3][3]){
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum+=x[i][j];
        }
        cout<<"Sum Of Row "<<i+1<<": "<<sum<<endl;
    }
}

void run(){
    int x[3][3];
    Full_Matrix(x);
    print_matrix(x);
    Sum_Row(x);
}

int main(){
    srand(time(0));
    run();
    return 0;
}