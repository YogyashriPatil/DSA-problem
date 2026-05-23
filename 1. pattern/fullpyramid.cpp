#include<iostream.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        // space
        for(int s=0;s<n-row-1;s++){
            cout<<"  ";
        }
        // star
        for (int st=0;st<row+1;st++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

// # n=int(input())
// # for row in range(n):
// #     for col in range(n-row-1):
// #         print("  ")
// #     for st in range(row+1):
// #         print("* ")
// #     print("\n")