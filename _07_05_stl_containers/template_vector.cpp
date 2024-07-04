#include<iostream>
#include<vector>
#include<string>

template <typename T>
void print_vector(const std::vector<T> &v){
  if(v.empty()) return;
  else {
    for(const T& elem : v) std::cout << elem << std::endl;
    std::cout << std::endl;
  }
}

void message(const char* s) { std::cout << s << std::endl;}

int  main() {
  std::cout << "Initilizing a vector" << std::endl;
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  std::cout << "These are the contents of the vector" << std::endl;
  print_vector(v);
}
