#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        // space
        for(int s=0;s<n-row-1;s++){
            cout<<" ";
        }
        // star
        for (int st=0;st<row+1;st++){
            // print star for first and last col
            if(st==0 || st==row+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
