#include <iostream>
using namespace std;
class Heap
{
private:
    /* data */
public:
    int arr[101];
    int size;
    Heap()
    {
        size = 0;
    }
    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
    int deletion()
    {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;
            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }
            if (largest == index)
            {
                break;
            }
            else
            {
                swap(arr[largest], arr[index]);
                index = largest;
            }
        }
        return ans;
    }
};
void heapify(int arr[], int size, int i)
{
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;
    int largest = index;
    if (leftIndex <= size && arr[largest] < arr[leftIndex])
    {
        largest = leftIndex;
    }
    if (rightIndex <= size && arr[largest] < arr[rightIndex])
    {
        largest = rightIndex;
    }
    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}
void buildHeap(int arr[], int size){
    for (int i = size / 2; i > 0; i--)
    {
        heapify(arr, size, i);
    }
}
int main()
{
    int arr[] = {-1, 12, 33, 42, 55, 65, 76};
    int n =6;
    buildHeap(arr, n);
    cout << "Printing the heap: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}