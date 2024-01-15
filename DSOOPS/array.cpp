
#include<iostream>
using namespace std;


/*
why we need array: 
   when we want to store to many data and we want to access it 
   it will  be difficult to do so , that's why we need array


if we declare and initialise array in one step the giving size is optional
but if we declare array in one line and initialise it in next line 
then while declaring the array if is compulsory to give the size of the array in stakc

when we initialise the array of size 5 by only one element then the other elements will be stored as 0
int a[5] = {3}
here,
a= {3,0,0,0,0}

int a[] = {1,2,3,4,5} size optional
int a[10]; size if compulsory
a[]={1,2,3,0,45,2,56} 
*/

/*
int main(){
    int a[]={1,2,3,4,5,6,7};
    for(int i=0; i<7;i++){
       cout<<a[i];
    }
    
    int b[10]={1,2,334,4};
    for(int i=0;i<10;i++){
        cout<<a[i];
    }
   //memeory initialisation happends on compile time while  and we are providing size at run time that's why its  notgood to give memory on run time
   //heap memory 
   //new do: 
   //we can not give name of any variabe in heap
   //it returns the address of first block
   //new int [5];
   //to store the address the new keyword returns we can access by giving it to a pointer as:
   //max size for array in stack 10^6 and in heap 10^7

   int *p = new int[5];
   for(int i=0;i<5;i++){
    p[i]=i+1;
   }
   for(int i=0; i<5 ; i++){
    cout<<p[i]<<" ";
   }
   delete p;
   return 0;

}  */

/*

que1:
using heap memory, given an array and target , print the position of target if the target is pesent otherwise print "target is not present"

*/


/*
int main(){
    int n;
    cin>>n;
    int * p = new int [n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int target;
    cin>>target;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(p[i]==target){
            cout<<"target is present at: "<<i<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"target is not pesent."<<endl;
    }
    return 0;
}
*/


