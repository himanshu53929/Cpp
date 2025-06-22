//By Himanshu Chand
//6-22-25
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class matrix{
    private:
        int mat[3][3];

    public:

        void getdata(){
            cout<<"Enter the elements of the matrix: "<<endl;
            for (int i=0; i<3; i++){
                for (int j=0; j<3; j++){
                    cout<<"Enter the "<<i+1<<"x"<<j+1<<" member of the matrix: ";
                    cin>>mat[i][j];
                }
            }
        }

        void showdata(){
            cout<<"The elements of the matrix are: "<<endl;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout<<mat[i][j]<<"\t";
                }
                cout<<endl;
            }
        }

        matrix operator*(matrix m){
            matrix t;
            int sum = 0;
            for(int j = 0; j<3; j++){
                for(int k = 0; k<3; k++){
                    for(int i=0; i<3; i++){
                         sum = sum + (mat[j][i] * m.mat[i][k]);
                     }
                     t.mat[j][k] = sum;
                     sum = 0;
                }
            }
            return t;
        }
};

int main(){
    matrix m1, m2, m3;
    m1.getdata();
    m2.getdata();
    cout<<"The first matrix is: "<<endl;
    m1.showdata();
    cout<<"The second matrix is "<<endl;
    m2.showdata();
    m3 = m1 * m2;
    cout<<"The value of the matrix three is: "<<endl;
    m3.showdata();
    return 0;
}