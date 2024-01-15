//#include <climits>
#include <iostream>
using namespace std;


/*
ques2:
   Insert at 0th index:
   using heap memory, take an array of size n, take n and take n elements now make the element present at 0th index as any other number and shift other elements by one index
   if the array is already full then give massage "array is full, element can't be inserted."

*/


/*
int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=ele;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} */


/*

ques3:
insert element at kth position and shift elements after that to k+i position.

*/

/*
int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    int position;
    cin>>position;
    int ele;
    cin>>ele;
    for(int i=n-1;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=ele;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/*

ques4:
delete element at first position

*/

/*
int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

/*
ques4:
delete element at kith position

*/

/*
int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    int position;
    cin>>position;
    for(int i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

/*
ques5:
   running  su of array 
*/
/*by us
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    int sum_arr[100000];
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i]
        sum_arr[i]= sum;
    }
    for(int i = 0 ; i<n; i++){
        cout<<sum_arr[i]<<" ";
    }
}
*/

/*by sir by "prefix sum  concept"
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0 ; i<n;i++){
        cin>>a[i];
    }
    int pre[100000];
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];

    }
    for(int i=0 ; i<n;i++){
        cin>>pre[i];
    }
    return 0;
}*/

/*
 without using loop tell sum of elements from left index to right idex in an array

*/

/*
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0 ; i<n;i++){
        cin>>a[i];
    }
    int pre[100000];  //prefix[i] = a[0]+a[1]+a[2].........a[i]
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    int l,r;
    cin>>l>>r;
    cout<<pre[l-1]<<" "<<pre[r]<<endl;
    cout<<pre[r]-pre[l-1];
    return 0;
}
*/


//for n times left index  and right index sums 

/*
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0 ; i<n;i++){
        cin>>a[i];
    }
    int pre[100000];  //prefix[i] = a[0]+a[1]+a[2].........a[i]
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    int l,r;
    for(int i=0;i<5;i++){
        cin>>l>>r;
        if(l==0)
    }

    return 0;
}
*/
/*find minimum and maximum in an array
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0 ; i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0 ; i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
}
*/

//12-01/2024
//find time complexity for all the questions 

/*
Birnay Search

searching an element in a sorted array , either increasing or decreaing
for now we are taking increasing sorted array

step1: find middle element  
    search space: start and end in which we have to search element
    mid = (start  + end) / 2
check middle element
step2: conditions
     array[mid]== element , element is the element to be searched
     array[mid] >= element, search space is from  mid+1 to nth element
     array[mid] <= element, search space is from 0th  to mid-1

step: repeat all steps untill step 2
     divide the already divided element in 2 arrays  by mid
     change mid 
     find md
     search element
     if not found at mid then again untill element is found
*/

/*
 int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    int target;
    cout<<"element to be searched: ";
    cin>>target;
    int s=0, e=n-1;
    while(s<=e){
        //step1: find mid
        int mid=(s+e)/2;
        //step2: comparisions
        if(a[mid]==target){
            ans=mid;
            break;
        }
        if(a[mid]>target){
            e=mid-1;
        }
        if(a[mid]<target){
            s=mid+1;
        }
    }
    cout<<"Index of "<<target<<" in given array is: "<<ans;
    return 0;
 }
 */


 /*
first occurance of the element in a sorted array using binary search

 */

/*
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    int target;
    cout<<"enter the element for first occurace: ";
    cin>>target;
    int s=0, e=n-1;
    while(s<=e){
        //step1: find mid
        int mid=(s+e)/2;
        //step2: comparisions
        if(a[mid]==target){
            ans=mid;
            e=mid-1;
        }
        if(a[mid]>target){
            e=mid-1;
        }
        if(a[mid]<target){
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;
 }
 */

/*
last occurance of the element in a sorted array using binary search

int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    int target;
    cout<<"enter the element for first occurace: ";
    cin>>target;
    int s=0, e=n-1;
    while(s<=e){
        //step1: find mid
        int mid=(s+e)/2;
        //step2: comparisions
        if(a[mid]==target){
            ans=mid;
            s=mid+1;
        }
        if(a[mid]>target){
            e=mid-1;
        }
        if(a[mid]<target){
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;
 }
*/

/*
given an monotonic array(i.e not need to be sorted) by using binary search do,
if first k elements are even and rest all are odd then find how many even elements are present in the array.

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    int s=0, e=n-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]%2==0){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans+1;
}

*/

/*given a sorted array of 0s and 1s , you have to find total nos of 1s in the array using binary search


int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    int s=0, e=n-1;
    int mid;
    cout<<"total no. of 1s are: ";
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==0){
            s=mid+1;
        }
        else{
            e=mid-1;
            ans=n-mid;
        }
    }
    cout<<ans;
}
*/

/*
given a sorted array, of 0s 1s and 2s, find the total no. of 1susing binary search.


int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0, e=n-1;
    int last=0,first=0;
    //last occurance

    while(s<=e){
        //step1: find mid
        int mid=(s+e)/2;
        //step2: comparisions
        if(a[mid]==1){
            last=mid;
            s=mid+1;
        }
        if(a[mid]>1){
            e=mid-1;
        }
        if(a[mid]<1){
            s=mid+1;
        }
    }

    //first occurance 

    s=0, e=n-1;
    while(s<=e){
        //step1: find mid
        int mid=(s+e)/2;
        //step2: comparisions
        if(a[mid]==1){
            first=mid;
            e=mid-1;
        }
        if(a[mid]>1){
            e=mid-1;
        }
        if(a[mid]<1){
            s=mid+1;
        }
    }
    cout<<last-first+1;
    return 0;
}
*/

/*
find  the square root of a number N, in log(N) time complexity
*/

int main(){
    int n;
    cin>>n;
    int s=0, e=n;
    int mid;
    int ans;
    while(s<=n){
        //find mid

        mid=(s+e)/2;
        //check conditions

        if(mid==n){
            ans=mid;
            break;
        }
        else if (mid*mid>n)
        {
           e=mid-1; 
        }
        else if(mid*mid<n){
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;
}

/*
given a sorted array, the element which needs to  be searched is not present, 
find the elment which is just smaller than the target
*/
