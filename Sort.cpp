#include <iostream>

using namespace std;

int main() {
   int numbers[] = {5,4,3,2,1};
   int n = 5;
   
   for( int i = 4; i >= 0; i-- ){
      cout << numbers[ i ] << ", ";
   }
   cout << endl;
}
