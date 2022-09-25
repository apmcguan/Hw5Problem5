#include <iostream>
//#include <cmath>

using namespace std;

int main() {
  double c;//cost per seed
  cin>>c;
  int L;// number of lawns
  cin>>L;
  double l;//length
  double w;//width
  double A;//cost
  for(int i =0; i<L;i++)
    {
      double l;//length
      double w;//width
      
  cin>> l >> w;
      A += l*w;
      
      
     
      
      
    }
  
  
  cout.precision(6);
   cout<<fixed<<"Total cost  = "<< A * c<<endl;
    
  
}