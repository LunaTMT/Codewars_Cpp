#include <tuple>

std::tuple<int, int, int> quadratic(int x1,int x2){
  x1 *= -1;
  x2 *= -1;
  return {1, x1 + x2, x1*x2}; 
}