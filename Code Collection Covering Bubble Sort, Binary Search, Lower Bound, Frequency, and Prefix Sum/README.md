Recently, I was explaining fundamental algorithms like Bubble Sort, Binary Search, Lower Bound, Frequency, and Prefix Sum to my friends. It occurred to me that sharing these algorithms on Codeforces could be beneficial to others as well. So, I decided to share the code, as it might serve as a useful resource for anyone interested in learning these concepts.

Bubble Sort: compares adjacent elements and swaps them if in the wrong order until the list is sorted.


```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    for (int i = 0; i < n; i++) { // --> O(N^2)
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array using Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```


------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

Sort with Built-in Function: Sorting the array using the built-in `std::sort` function from the `<algorithm>` library. It automatically rearranges the elements in ascending order.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort using built-in function
    sort(arr, arr + n);

    cout << "Sorted array using Built-in Function: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

Linear Search: Searching for a target element in the array by iterating through each element one by one (linearly) until the element is found or the end of the array is reached.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 90;

    // Linear Search
    int index = -1;
    for (int i = 0; i < n; i++) { // O(N)
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Element " << target << " found at index " << index;
    } else {
        cout << "Element not found.";
    }

    return 0;
}
```

------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Binary Search: Efficiently finds a target element in a sorted array by dividing the search space in half at each step.


```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {200, 50, 11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

	sort(arr, arr + n);

    // Binary Search
    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid =  (low + high) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else if(arr[mid] > target)  {
            high = mid - 1;
        }
    }

    if (index != -1) {
        cout << "Element " << target << " found at index " << index;
    } else {
        cout << "Element not found.";
    }

    return 0;
}
```

------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Binary Search (Built-in): Efficiently finds a target element in a sorted array using `std::binary_search`

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

	sort(arr, arr + n);
    // Check if the target exists in the sorted array using binary search
    bool found = binary_search(arr, arr + n, target);

    if (found) {
        cout << "Element " << target << " found in the array.";
    } else {
        cout << "Element not found in the array.";
    }

    return 0;
}
```



------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

Lower Bound (Binary Search): Uses binary search to find the leftmost index of the target element in a sorted array or the first element greater than or equal to the target.

```cpp
#include <iostream>
using namespace std;

int main() {
	//           0   1   2   3   4   5   6   7   8
    int arr[] = {11, 12, 22, 25, 34, 34, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

    // Sort the array
    sort(arr, arr + n);

    int low = 0, high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= target) {
            index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (index == -1) {
        cout << "-1\n";
    } else {
        cout << "Lower bound of " << target << " is at index: " << index << endl;
    }

    return 0;
}
```



------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

  
Lower Bound (Built-in): Utilizes `std::lower_bound` to find the leftmost index of the target element in a sorted array or the first element greater than or equal to the target.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {11, 12, 22, 25, 34, 34, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

	sort(arr, arr + n);
    // Find the lower bound of the target element
    int index = lower_bound(arr, arr + n, target) - arr;

    if (index == n) {
        cout << "-1\n";
    } else {
        cout << "Lower bound of " << target << " is at index: " << index << endl;
    }

    return 0;
}
```


------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

Upper Bound (Binary Search): Uses binary search to find the leftmost index of the target element in a sorted array or the first element greater than to the target.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {11, 12, 22, 25, 34, 34, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

    // Sort the array
    sort(arr, arr + n);

    int low = 0, high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > target) {
            index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (index == -1) {
        cout << "-1\n";
    } else {
        cout << "Upper bound of " << target << " is at index: " << index << endl;
    }

    return 0;
}
```

------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Upper Bound (Built-in): Utilizes `std::upper_bound` to find the leftmost index of the target element in a sorted array or the first element greater to the target.


```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {11, 12, 22, 25, 34, 34, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

    // Sort the array (Note: Ensure that the array is sorted before using upper_bound)
    sort(arr, arr + n);

    // Find the upper bound of the target element
    int index = upper_bound(arr, arr + n, target) - arr;

    if (index == n) {
        cout << "-1\n";
    } else {
        cout << "Upper bound of " << target << " is at index: " << index << endl;
    }

    return 0;
}
```


------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------

Count Occurrence of Number 5

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 5, 3, 2, 5, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    // Count occurrence of number 5
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Number of occurrences of " << target << ": " << count;

    return 0;
}
```


------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Frequency Array: Calculates the occurrences of each element in the array by creating a separate array (frequency array) to store the count of each element. It then prints the frequencies of each element.

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int arr[] = {5, 5, 3, 2, 5, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Frequency Array
    int freq[MAX_SIZE] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequency of elements:" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << endl;
        }
    }

    return 0;
}
```


------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Summation of Numbers from Index L to R Using Loop:

```cpp
#include <iostream>
using namespace std;

int main() {
	//           0  1  2  3  4  5  6  7  8  9
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 2; // Starting index
    int r = 7; // Ending index

    // Print the summation of numbers from index l to r using loop
    int sum = 0;
    for (int i = l; i <= r; i++) { 
        sum += arr[i];
    }

    cout << "Sum from index " << l << " to " << r << ": " << sum;

    return 0;
}
```

------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------


Prefix Sum: A technique that makes every element in the array equal to the summation of all previous elements.

```cpp
#include <iostream>
using namespace std;

int main() {
//           0  1  2  3  4  5  6  7  8  9 10  11
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array starts from index 1
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 2; // Starting index
    int r = 7; // Ending index

    // Calculate prefix sum
    for (int i = 2; i <= n; i++) { // Start the loop from index 2
        arr[i] += arr[i - 1];
    }

	// The array after prefix sum will be:
	//          0  1  2  3  4   5   6   [7] 8   9   10	
	// arr[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55}

    // Print the summation of numbers from index l to r using prefix sum
    int sum = arr[r] - arr[l - 1];

    cout << "Sum from index " << l << " to " << r << ": " << sum;

    return 0;
}
```


