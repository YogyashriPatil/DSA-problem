#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        // space
        for(int s=0;s<row;s++){
            cout<<" ";
        }
        // star
        int totalCol = n-row;
        for (int st=0;st<totalCol;st++){
            // print star for first and last col
            if(st==0 || st==totalCol-1){
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
