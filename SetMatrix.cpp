
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include<algorithm>
using namespace std;





int main(){



    int abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,0,14,15},
            {16,17,18,19}
            };

    int temp[5][4];
    int m=5;
    int n=4;
    //Create temporary array and copy all items into it
    for(int i=0;i<m;i++){
        for(int j =0;j<n ;j++){
                temp[i][j]=abc[i][j];

        }
    }

    //Apply brute force approach
    for(int i=0;i<m;i++){
        for(int j =0;j<n ;j++){
                if(abc[i][j]==0){
                    for(int k=0;k<m;k++)
                        temp[k][j]=0;
                    for(int k=0;k<n;k++)
                        temp[i][k]=0;
                }
        }
    }
    //Again copy the same to previous array
    for(int i=0;i<m;i++){
        for(int j =0;j<n ;j++){
                if(temp[i][j]==0)
                    abc[i][j]=temp[i][j];

        }
    }

    for(int i=0;i<m;i++){
        for(int j =0;j<n ;j++){
                cout<<abc[i][j]<<" ";

        }
        cout<<"\n";
    }










    return 0;


}
