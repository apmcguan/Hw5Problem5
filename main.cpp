#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int c;
  int L;
  cin>>c;
  cin>>L;
  
  for(int i =0; i<L;i++)
    {
      int l;//length
      int w;//width
      double C;//cost
      cin>> l >> w;
      C = (l*w)*c;
      cout<<"Total cost of seeds = "<<C<<endl;
      
      
    }
    
  
}