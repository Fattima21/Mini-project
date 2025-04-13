void insertBigin(int[], int &, int);
const int maxSize = 10;
int main()
{
    int size = 3;
    int arr[maxSize] = {0, 8, 4};
    int element;
    cout << "element to insert";
    cin >> element;
    insertBigin(arr, size, element);

    return 0;
}
void insertBigin(int arr[], int &size, int element)
{
    if (size >= maxSize)
    {
        cout << "the array is full ";
        return;
    }
    for (int i = size-1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
    size++;
    for (int i = 0; i < size; i++)
    {
        cout <<" " <<arr[i];1
    }
}