```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Class to manage basic data processing
class BasicDataProcessor {
    private:
        std::vector<int> data;

    public:
        // Constructor
        BasicDataProcessor() {}

        // Load data
        void LoadData(std::vector<int> newData) {
            data = newData;
        }

        // Print data
        void PrintData() {
            for (int i=0; i<data.size(); i++)
                std::cout << data[i] << " ";
            std::cout << std::endl;
        }

        // Calculate sum of data
        int SumData() {
            return std::accumulate(data.begin(), data.end(), 0);
        }

        // Find maximum value in data
        int MaxValue() {
            return *std::max_element(data.begin(), data.end());
        }

        // Find minimum value in data
        int MinValue() {
            return *std::min_element(data.begin(), data.end());
        }

        // Sort data in ascending order
        void SortData() {
            std::sort(data.begin(), data.end());
        }

        // Reverse data
        void ReverseData() {
            std::reverse(data.begin(), data.end());
        }

        // Filter data by a given value, remove all elements greater than the value
        void FilterData(int value) {
            data.erase(std::remove_if(data.begin(), data.end(), [value](int x){ return x > value; }), data.end());
        }
};

int main() {
    BasicDataProcessor dataProcessor;

    // Load data
    std::vector<int> data = {5, 3, 9, 1, 6, 8, 7, 2, 4};
    dataProcessor.LoadData(data);

    // Print data
    std::cout << "Original data: ";
    dataProcessor.PrintData();

    // Calculate sum of data
    std::cout << "Sum of data: " << dataProcessor.SumData() << std::endl;

    // Find maximum value in data
    std::cout << "Maximum value: " << dataProcessor.MaxValue() << std::endl;

    // Find minimum value in data
    std::cout << "Minimum value: " << dataProcessor.MinValue() << std::endl;

    // Sort data
    dataProcessor.SortData();
    std::cout << "Sorted data: ";
    dataProcessor.PrintData();

    // Reverse data
    dataProcessor.ReverseData();
    std::cout << "Reversed data: ";
    dataProcessor.PrintData();

    // Filter data by a value
    dataProcessor.FilterData(5);
    std::cout << "Filtered data (remove elements > 5): ";
    dataProcessor.PrintData();

    return 0;
}
```

Цей код на C++ створює клас для основної обробки даних. Він включає методи для завантаження, друку, обчислення суми, знаходження максимального і мінімального значення, сортування, перевертання, а також фільтрації даних.