// GEEKS FOR GEEKS
// Second largest element in an array
//Given an array of positive integers arr[], return the second largest
// element from the array. If the second largest element doesn't exist then return -1.
#include<iostream>
#include<vector>
using namespace std;
int secondLargest(vector<int>& nums){
    int n = nums.size();
    if(n<2){
        return -1;
    }
    int largest = nums[0];
    int secondLargest = -1;
    for(int i = 1; i<n; i++){
        if(nums[i]> largest){
            secondLargest = largest;
            largest = nums[i];
        }else if(nums[i]> secondLargest && nums[i]!= largest){
            secondLargest = nums[i];
        }
    }
    return secondLargest;
};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++){
        cin>>nums[i];
    }
    int result = secondLargest(nums);
    if(result != -1){
        cout<<"The second largest element in the array is: "<<result<<endl;
    }else{
        cout<<"The second largest element doesn't exist in the array."<<endl;
    }
    
    return 0;
}