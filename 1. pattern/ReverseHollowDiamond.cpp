#include<iostream.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    int n=num/2;
    
    for(int row=0;row < n;row++){
        // inverted
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
         // full pyramid

        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }

       
        // inverted
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
    }


    for(int row=0;row < n;row++){
        // inverted
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
         // full pyramid

        for(int col=0;col<2*n-2*row-1;col++)
        {
            cout<<" ";
        }

       
        // inverted
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

    }

    return 0;
}

