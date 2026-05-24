#include<iostream.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    // for the both
    int n = num/2;
    for(int row=0;row<n;row++){
        // space
        for(int s=0;s<n-row-1;s++){
            cout<<" ";
        }
        // star
        for (int st=0;st<row+1;st++){
            cout<<"* ";
        }
        cout<<endl;
    }

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
