#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap( int* x, int* y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

// Bubble sort
void bubbleSort(int a[], int n)
{
 for ( int i = 0; i < n - 1; i++) {
  for ( int j = 0; j < n - 1 - i; j++) {
   if (a[j] > a[j + 1]) {
    swap(&a[j], &a[j + 1]);
   }
  }
 }

}


// Selection sort
void selectionSort( int arr[], int n)
{
  int min;

 for (int i = 0; i < n - 1; i++) {

  min = i;

  for (int j = i + 1; j < n; j++)
   if (arr[j] < arr[min])
    min = j;
  swap(&arr[min], &arr[i]);
 }
}

int main()
{
 int n = 50000;
 int test = 4;
 printf("Select 1 for already sorted data and 2 for randomly generated data :\n");
 int select;
 scanf("%d",&select);

 int time1[10], time2[10];
 printf(" Array_size, Selection, Bubble, \n");
    if(select==2){
 while (test-- ) {
   int arr1[n], arr2[n];
  for (int i = 0; i < n; i++) {
    int x = rand() % n + 1;
   arr1[i] = x;
   arr2[i] = x;}

  clock_t start, end;

   //Time for Selection sort
  start = clock();
  selectionSort(arr1, n);
  end = clock();
       int t1=end-start;

  // Time for Bubble sort
  start = clock();
  bubbleSort(arr2, n);
  end = clock();
      int t2=end-start;
  printf(" %d %f %f\n",n,(double)t1/(double)CLOCKS_PER_SEC,(double)t2/(double)CLOCKS_PER_SEC);
  n += 50000;
 }}
 else if(select==1) {
  while (test-- ) {
   int arr1[n], arr2[n];
  for (int i = 0; i < n; i++) {

   arr1[i] = i;
   arr2[i] = i;}

  clock_t start, end;

   //Time for Selection sort
  start = clock();
  selectionSort(arr1, n);
  end = clock();
       int t1=end-start;

  // Time for Bubble sort
  start = clock();
  bubbleSort(arr2, n);
  end = clock();
      int t2=end-start;
  printf(" %d %f %f\n",n,(double)t1/(double)CLOCKS_PER_SEC,(double)t2/(double)CLOCKS_PER_SEC);
  n += 50000;
 }

 }

 return 0;
}
© 2021 GitHub, Inc.
Terms
Privacy
