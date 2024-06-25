#include<iostream>
using namespace std;

int largestelement( int arr[], int n){
     int largest = arr[0];
     for( int i=0;i<n;i++){
        if( arr[i]> largest){
            largest = arr[i];
        }
     }

     return largest;
}
   
int main(){

    int n;
    cout<< " Enter number of Element";
    cin>>n;

    int arr[n]; // Declare size of array
     cout<<" Enter the element of array";

     for(int i=0;i<n;i++){
        cin>>arr[i]; //Input array element
     }

     int  largest = largestelement(arr,n);
        cout<< " The largest element is"<< largest<<endl;
     
 
 return 0; 
}