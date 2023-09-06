#include <iostream>
# define x 100

using namespace std;

void displayArray(int numbers[], int n){
   for( int i = 0; i < n; i++ ){
      cout << numbers[ i ] << ", ";
   }
   cout << endl;
}


int main() {
   int numbers[ x ] = {1,2,3,4,5,6,7,8,9,10};
   int n = 10;
   int pos=2;
   int z = 11;
   int i;
   for (i = n - 1; i >= pos; i--)
        numbers[i] = numbers[i - 1];
   numbers[pos - 1] = z;
   
   displayArray( numbers, n );
}
