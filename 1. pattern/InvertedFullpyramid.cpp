#include<iostream.h>
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
        for (int st=0;st<n-row;st++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
