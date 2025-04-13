#include <iostream>
using namespace std;
// void insertBigin(int[], int &, int);
// const int maxSize = 10;
// int main()
// {
//     int size = 3;
//     int arr[maxSize] = {0, 8, 4};
//     int element;
//     cout << "element to insert";
//     cin >> element;
//     insertBigin(arr, size, element);

//     return 0;
// }
// void insertBigin(int arr[], int &size, int element)
// {
//     if (size >= maxSize)
//     {
//         cout << "the array is full ";
//         return;
//     }
//     for (int i = size-1; i >= 0; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[0] = element;
//     size++;
//     for (int i = 0; i < size; i++)
//     {
//         cout <<" " <<arr[i];1
//     }
// }

// void insertEnd(int[], int &, int);
// const int MAX_SIZE = 10;
// int main()
// {
//     int size = 3;
//     int arr[MAX_SIZE] = {0, 8, 4};
//     cout << "element to insert";
//     int elementToInsert;
//     cin >> elementToInsert;
//     insertEnd(arr, size, elementToInsert);
//     return 0;
// }

// void insertEnd(int arr[], int &size, int element)
// {
//     if (size >= MAX_SIZE)
//     {
//         cout << "array is full";
//     }
//     else
//     {
//         arr[size] = element;
//         size++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i];
//     }
// }
// void deletArr(int[], int &);
// const int MAX_SIZE = 10;
// int main()
// {
//     int size = 5;
//     int arr[MAX_SIZE] = {2, 4, 8, 3, 5};
//     deletArr(arr, size);
//     return 0;
// }

// void deletArr(int arr[], int &size)
// {

//     if (size > 0)
//     {
//         for (int i = 0; i < size - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }

//         size--;
//         for (int i = 0; i < size - 1; i++)
//         {
//             cout << "element is " << (i + 1);
//         }
//     }
//     else
//     {
//         cout << "the array is empity ";
//     }
// }
// const int MAX_SIZE=10;
// void deletEle(int [],int&, int);
// int main()
// {
//     int size=4;
//     int arr[MAX_SIZE]={1,2,3,4};
//     int index=2;
//     deletEle(arr,size,index);
// }
// void deletEle(int arr[],int &size,int index){
//     if(index>=0 && index<size){
//         for(int i=index;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         size--;

//     }
// }
// void deletBegin(int [],int &);
// const int max_size=10;
// int main(){
//     int size=5;
//     int arry[max_size]={2,4,8,3,5};
//     deletBegin(arry,size);
//     return 0;
// }
// void deletBegin(int arry[],int &size)
// {
//     if(size>0){
//         for(int i=0;i<size-1;i++){
//             arry[i]=arry[i+1];
//         }
//         size--;
//         for(int i=0;i<size;i++){
//             cout<<arry[i]<<" ";
//         }
//     }else{
//         cout<<"the array is impety "<<endl;
//     }
// }
// void deletBegin(int [],int &);
// const int max_size=10;
// int main(){
//     int size=5;
//     int arry[max_size]={2,4,8,3,5};
//     deletBegin(arry,size);
//     return 0;
// }
// void deletBegin(int arry[],int &size)
// {
//     if(size>0){
//         size--;
//         for (int i=0;i<size;i++){
//             cout<<arry[i];
//         }
        
//     }
//     else{
//         cout<<"the array is empty"<<endl;
//     }
// }
// const int max_size=10;
// void deletPosition(int[],int&,int);
// void displayArray(int arry[],int size);
// int main()
// {
//     int size=5;
//      int arry[max_size]={2,4,8,3,5};
//      int deletIndex=2;
//     deletPosition(arry,size,deletIndex);
//     return 0;
// }
// void deletPosition(int arry[],int &size,int deletIndex)
// {
//     if(deletIndex>=0 && deletIndex<size)
//     {
//         for(int i=deletIndex;i<size-1;i++){
//             arry[i]=arry[i+1];
//         }
//         size--;
//     }
//     else{
//         cout<<"deletion failed "<<endl;
//     }
// }
// void displayArray(int arry[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arry[i]<<endl;
//     }
// }
// void bubbleSort(int[],int);
// void swap(int&,int&);
// void printArray(int [],int);
// const int maxSise=5;

// int main()
// {
//     int size=5;
//     int array[maxSise]={2,9,8,3,5};
//     bubbleSort(array,size);
//     printArray(array,size);

// }
// void swap(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void bubbleSort(int array[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(array[j]>array[j+1]){
//                 swap(array[j],array[j+1]);
//             }
//         }
//     }
// }
// void printArray(int array[],int size)
// {
//     for(int i=0;i<size;i++){
//     cout<<array[i]<<" ";
// }
//  cout<<endl;
// }
// void bubblSort(int arry[],int size){
//     bool swaped;
//     for(int i=0;i<size-1;i++){
//         swaped=false;
//     for(int j=0;j<size-1-i;j++){
//         if(arry[j]>arry[j+1]){
//             swap(arry[j],arry[j+1]);
//             swaped=true;
//         }

//     }
//     if(swaped==false)
//     break;
//     }
// }
// void insertionSort(int [],int);
// void printArray(int[],int);
// const int maxSize=5;
// int main()
// {
//     int size=5;
//     int array[maxSize]={2,8,5,3,9};
//     insertionSort(array, size);
//     printArray( array, size);
// }
// void insertionSort(int array[],int size)
// {
//     int temp,j;
//     for(int i=1;i<size;i++){
//         temp=array[i];
//         for(j=i-1;j>=0 && array[j]>temp;j--){
//             array[j+1]=array[j];
//         }
//         array[j+1]=temp;
//     }
// }
// void printArray(int array[],int size){
//     for(int i=0;i<size;i++){
//         cout<<array[i]<<" ";

//     }
//     cout<<endl;
    
// }
//some question of quiez
// void insertEnd(int[],int &,int);
// const int max_size=6;
// int main()
// {
//     int size=5;
//     int array[max_size]={1,2,3,4,5};
//     cout<<" element to insert ";
//     int element;
//     cin>>element;
//     insertEnd(array,size,element);
//     return 0;
// }
// void insertEnd(int array[],int &size,int element)
// {
// if (element>=0 && element<=100){
//     cout<<"the number is ";

// }
// else{
//     cout<<"exit the loop ";
// }
// for(int i=size-1;i>=0;i--){
//     array[i+1]=array[i];
// }
// array[0]=element;
// size++;
// for(int i=0;i<size;i++){
//     cout<<array[i]<<" ";
// }

// }
// void searchByArray(int [],int,int);
// int main()
// {
//     const int size=4;
//     int array[size]={1,2,3,4};
//     int searchIndex;
//     int result;
//     searchByArray(array,size,search);
//     return 0;
// }
// void searchByIndex(int array[],int size,int search)
// {
//     if(int search>=0 && search<size){
//         cout<<"the result of array is "<<array[search];
//     }
// }
// 
// const int maxSize=10;
// void ensertEnd(int [],int&,int);
// int main()
// {
//     int size=5;
//     int array[maxSize]={1,2,3,4,5};
//     int newElement;
//     ensertEnd(array,size,newElement);
//     return 0;
// }
// void ensertEnd(int array[],int &size,int newElement){
//     if(size>=maxSize){
//         cout<<"the array is full"<<endl;
//     }
//     else 
//     {
//         array[size]=element;
//         size++;
//     }
//     for(int i=0;i<size;i++){
//         cout<<array[i];
//     }
    
// }
//new subject;

