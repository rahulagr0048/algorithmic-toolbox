#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    int max_index1 = -1;
    for (int first = 0; first < n; ++first) {
        if(max_index1 == -1 || numbers[max_index1]< numbers[first])
        {
            max_index1 = first;
        }
    }

    int max_index2 = -1;
    for (int second = 0; second < n; ++second) {
        if((second != max_index1) && (max_index2 == -1 || numbers[max_index2]< numbers[second]))
        {
            max_index2 = second;
        }
    }
    return ((long long)numbers[max_index1] * numbers[max_index2]);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
