#include <iostream>
# define x 100

using namespace std;

void displayArray(int numbers[], int n){
   for(int i= 0;i<n;i++){
      cout<<numbers[ i ]<<", ";
   }
   cout<<endl;
}
   void append(int numbers[],int &n, int a ){
   if(n<x) {
      numbers[ n ] = a;
   }
   n+=1;
}


int main() {
   int numbers[ x ] = {1,2,3,4,5,6,7,8,9,10};
   int n = 10;
   int i;
   append(numbers,n,11);
   displayArray( numbers, n );
}

