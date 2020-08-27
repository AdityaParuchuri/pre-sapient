#include <vector>

using namespace std ; 

vector <long long int> wheatFromChaff (vector <long long int> values)
{
  // Your Code is Here .. Enjoy !! 
  int start=0;
  int end = values.size()-1;
  while(start<end){
    while(start<end && values[start]<0){start++;}
    while(end>start && values[end]>0){end--;}
    if(start<end){
      long long int temp = values[start];
      values[start] = values[end];
      values[end] = temp;
    }
  }
  return values ;
}