// GEEKS FOR GEEKS
// Largest element in an array
#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>& nums){
    int n = nums.size();
    int largest = nums[0];
    for(int i = 1; i<n; i++){
        if(nums[i]> largest){
            largest = nums[i];
        }
    }
    return largest;
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
    int result = largest(nums);
    cout<<"The largest element in the array is: "<<result<<endl;
    return 0;


}