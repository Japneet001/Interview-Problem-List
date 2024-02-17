#include <bits/stdc++.h> 
void sort012(int *arr, int n){
   // count number of 0, 1 and 2
   int count_0 = 0;
   int count_1 = 0;
   int count_2 = 0;
   for (int i = 0 ; i < n ; i++){
      if (arr[i] == 0) count_0++;
      else if (arr[i] == 1) count_1++;
      else count_2++;
   }
   // fill with 0
   for (int i = 0 ; i < count_0; i++){
      arr[i] = 0;
   }

   // fill with 1
   for (int i = count_0 ; i < (count_0 + count_1); i++){
      arr[i] = 1;
   }
   
   // fill with 2
   for (int i = n - count_2 ; i < n; i++){
      arr[i] = 2;
   }
}