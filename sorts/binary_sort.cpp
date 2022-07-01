#include <iostream>
#include <vector>

int binary_search(std::vector<int> list, int num){
    int guess = 0;
    int low = 0;
    int high = list.size();
    int mid = 0;

    while(low <= high){

        mid = (low + high) / 2;
        guess = list[mid];

        if(guess == num)
            return guess;
        if(guess > num)
            high = mid - 1;
        if(guess < num)
            low = mid + 1; //If guess is less than num then low is now mid + 1

    }

    return num;

}

int main(){
    std::vector<int> lis = {1, 3, 5, 7, 9};
    int num = 7;
    int anwer = binary_search(lis, num);
    std::cout << anwer << "\n";

}
