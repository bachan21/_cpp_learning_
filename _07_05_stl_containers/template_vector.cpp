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

//This shows function/method overloading
void message(const char* s) { std::cout << s << std::endl;}
void message(const char* s, const int n) { std::cout << s << " : " << n << std::endl;}


int  main() {
  #ifdef BASIC
  std::cout << "Initilizing a vector" << std::endl;
  std::vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
  std::cout << "These are the contents of the vector" << std::endl << std::endl;
  print_vector(v1);
  #endif

  #ifdef FRONT_BACK
  //Vector infos
  message("Size of integer vector v", (int) v1.size());
  message("Front value", v1.front());
  message("Last element", v1.back());
  #endif

  #ifdef INSERT_ERASE_CLEAR
  //index and values
  message("Value at 5th index", v1.at(5));
  message("Value at 5th index", v1[5]);

  //Insert/Remove elements into a vector
  //Insert interface take two argument: Iterator & Value
  v1.insert(v1.begin(), 100);
  message("Inserted 100 in the beginning");
  //print_vector(v);
  message("New value at 0th index", v1.front());
  message("Removing new value from 0th index");

  //Provide the iterator pointer to erase function
  v1.erase(v1.begin());
  message("Current value at 0th index", v1.front());
  message("Check if the vector is empty");

   message("Adding a vector into a vector");
  v1.insert(v1.begin(), {10,20,30,40,50});
  print_vector(v1);
  //Removing a series of elements
  message("Removing the inserted elements");
  v1.erase(v1.begin(), v1.begin()+5);
  print_vector(v1);

  v1.clear();
  if(!v1.empty()) message("The vecctor instance not empty");
  else message("The Vector instance is empty");
  #endif

  #ifdef CONSTRUCTOR
  std::vector<std::string> v2 (3,"String");
  print_vector(v2);

  //Copy the the vector from another vector
  message("Copying one vector from another");
  std::vector<std::string> v3(v2);
  print_vector(v3);

  message("Move vector to another vector");
  std::vector<std::string> v4(std::move(v3));
  message("v4 after moving");
  print_vector(v4);
  message("v3 after moving");
  print_vector(v3);
  #endif
}
