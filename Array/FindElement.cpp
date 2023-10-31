#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
   for(int i=0;i<size;i++){
      if(arr[i]==target){

         //found
         return true;
      }
     
}
 //not found
      return false;
   }

int main(){

 int arr[5]={2,3,4,5,6};
   int size=5;
   int target=7;

   bool ans = linearSearch(arr,size,target);

   if(ans==1){
      cout<<"target found"<<endl;
   }else{
      cout<<"not found"<<endl;
   }

return 0;
}