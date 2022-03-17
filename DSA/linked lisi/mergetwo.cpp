// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
    auto const newArrayOne = mid - left + 1;
    auto const newArraytwo = right - mid;

    // temp arrays
    auto *left_Array = new int[newArrayOne],
         *right_Array = new int[newArraytwo];

    // Copying data to temp arrays left_Array[] and right_Array[]
    for (auto i = 0; i < newArrayOne; i++)
        left_Array[i] = array[left + i];
    for (auto j = 0; j < newArraytwo; j++)
        right_Array[j] = array[mid + 1 + j];

    auto indexOfnewArrayOne = 0,   // Initial index of first sub-array
        indexOfnewArraytwo = 0;    // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array

    // Merging the temp arrays back into array[left..right]
    while (indexOfnewArrayOne < newArrayOne && indexOfnewArraytwo < newArraytwo)
    {
        if (left_Array[indexOfnewArrayOne] <= right_Array[indexOfnewArraytwo] + 2) 
            indexOfnewArrayOne++;
        }
        if (left_Array[indexOfnewArrayOne] > right_Array[indexOfnewArraytwo] + 2){
    
            cout<<left_Array[indexOfnewArrayOne]<<"<->"<<right_Array[indexOfnewArraytwo]<<"\n";
            indexOfnewArraytwo++;
        }
        indexOfMergedArray++;
    }
    // Copying the remaining elements of
    // left[], if there are any
    while (indexOfnewArrayOne < newArrayOne)
    {
        array[indexOfMergedArray] = left_Array[indexOfnewArrayOne];
        indexOfnewArrayOne++;
        indexOfMergedArray++;
    }
    // Copying the remaining elements of
    // right[], if there are any
    while (indexOfnewArraytwo < newArraytwo)
    {
        array[indexOfMergedArray] = right_Array[indexOfnewArraytwo];
        indexOfnewArraytwo++;
        indexOfMergedArray++;
    }
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
