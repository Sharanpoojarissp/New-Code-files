#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void merge( int arr1[] , int n , int arr2[] , int m , int arr3[]){
    int i =0 ; 
    int j =0 ;
    int k = 0;
    
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // when the largest array is n sized 
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // when the largest array is m sized 
    while(j<m){
        arr3[k]= arr2[j];
        k++;
        j++;
    }
}

void print(int arr[] , int n ){
    for(int i = 0 ; i< n ; i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    
    int arr1[6] = {1,5,6,7,8,9};
    

    int arr2[9] = {2,2,4,10,11,15,100,200,300,};
    

    int arr3[15] = {0};
    
    merge(arr1 , 6 , arr2 , 8 , arr3 );

    print(arr3 , 14 );
    return 0;
}