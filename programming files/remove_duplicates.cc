#include <iostream>
#include <vector>
#include <algorithm>
// Bugs Introduced: LA
/**Description A clear and concise description of what the issue/bug is.

Steps to Reproduce

First step to reproduce the issue/bug
Second step to reproduce the issue/bug
Third step to reproduce the issue/bug
Expected Behavior A clear and concise description of what you expected to happen.

Actual Behavior A clear and concise description of what actually happened.

Screenshots If applicable, add screenshots to help explain the issue/bug.

Additional Information

Operating System:
Browser:
Version:
Any other relevant information
Possible Solution If you have any suggestions for a possible solution, please include them here.

Related Issues Are there any related issues? If so, please link to them here.

Priority How critical is this issue/bug? Low, medium, or high priority?

Reproducibility How often can this issue/bug be reproduced? Always, sometimes, or random?

Impact What is the impact of this issue/bug? Low, medium, or high?
*/
using namespace std;
// function that takes in two vectors, goes through the first one, and removes duplicate values, and returns a vector of only the unique ones
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){  
    vector<int> unique_arr; // vector of unique values
    sort(arr.begin(),arr.end());//
    int n = arr.size() + 1;
    for(int i=0; i<n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        else{
            removed_elements.push_back(arr[i]);
        }
    }
    return unique_arr;
}
// tests the function above
int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
