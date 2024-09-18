#include <iostream>

int main() {
  if (__cplusplus == 202101L)
    std::cout << "C++23";
  else if (__cplusplus == 202002L)
    std::cout << "C++20";
  else if (__cplusplus == 201703L)
    std::cout << "C++17";
  else if (__cplusplus == 201402L)
    std::cout << "C++14";
  else if (__cplusplus == 201103L)
    std::cout << "C++11";
  else if (__cplusplus == 199711L)
    std::cout << "C++98";
  else
    std::cout << "pre-standard C++." << __cplusplus;
  std::cout << "\n";
}

// int - integer, caˆe liczby
// (long) double, liczby z przecinkiem (kropk¥)
// char - pojedyncze znaki ('A')
// boolean - true/false, tak/nie, 1/0
// std::string - ci¥g znak¢w ("Aha xd")
//
// const double LIGHT_SPEED=299792458 - tylko do odczytu, nie da si© zmieni†
//                                    - parameter that is effectively read-only
//                                      code is more secure & conveys intent
//                                      useful for references and pointers
// (nazwy z du¾ych liter)
//
//
// std::cout << "aha";      nowa linia- << endl << "\n";
// std::cin >> x;
// namespace - provides a solution for preventing name conflicts in large
// projects. Each entity needs a  unique name. A namespace allows for iden4cally
// named entities as long as the namespaces are different.
//
// namespace jeden{     namespace dwa{
// int x = 1;           int x = 2;                          std::cout <<
// jeden::x;      using std::cout; }                    }                   albo
// na g¢rze   using namespace jeden;      using std::string;
//
// typedef/using - reserved keyword used to create an additional name (alias)
// for another data type. New identifier for an existing type Helps with
// readability and reduces typos Use when there is a clear benefit Replaced with
// ' using' (work better w/ templates)
//
// typedef std::string text_t;
// typedef int numer_t;
//
// using text_t = std::string;
// using numer_t = int;
//
// main(){
// text_t imi© = "Karol";
// numer_t wiek = 12;
// }
//   x = x + 1      x+=1      x++
//   x = x + 2      x+=2
//
//   double x = (int) 3.14
//
//  std::getline(std::cin>>std::ws, name);         >>ws ekstraktuje white spaces
//  np. \n
//
// ********maths: https://cplusplus.com/reference/cmath/ ***********
//
// if () {}
// else if (){}
// else {}
// variable = (condition) ? expressionTrue : expressionFalse;          kr¢tka
// wersja
//
// switch(){
//  case 1:           liczby (int)
//  case 'A':
//  brake;
//  default:
// }
//
// %%   ligiczne 'and'    ||    logiczne 'or'   !   logiczne 'not'
//
// std::string name;;       name.lenght() .empty()(1 lub 0)   .clear()
// .append("@gmail.com")
//                              .at(0) wy˜wietla pierwszy znak tekstu
//                              .insert(0, "@") dodaje @ jako pierwszy znak
//                              .find(' ')  wyszukuje np. spacje
//                              .erase(0,3) usuwa znaki od 0 do 3 <1;3)
//
// while(){                     do{                                     for(int
// i; 1<=3; i++){
//
// }                            }while();                               }
//
// break;      break out of a loop
// continue;   skip current iteration
//
// srand(time(NULL))  0 jak z obecnego
// rand() % zakres
//
// void funkcja(){}   w () paramrtry jak chcemy co˜ "wˆo¾y†" do tej funkcji,
// takie same
//
// array - a data structure that can hold multiple values, values are accessed
// by an index number, "kind of like a variable that holds multiple values"
//  std::string car[]={"Audi", "BMW", "Seat"};
//  cout << car[1];
//  car[1]="Camaro";
//
//  sizeof(); in bytes
//
//  char grades[]={'A', 'B', 'C', 'D', 'F'};
//
//  for(int i=0; i<sizeof(grades)/sizeof(char); i++){
//      cout<<grades[i]<<"\n";
// }
//
//
//  foreach loop - loop that eases the traversal over an iterable data set
//
//  for(std::string student : students){
//      cout << student <<'\n';
// }
//
//  memory address = a location in memmory where data is stored
//  a memory address can accessed with & (address-of operator)
//
//  int age = 21;
//  std::cout << &age;
//
//  pointer = variable that stores a memory address of another variable,
//  sometimes it's easier to work with an address
//
//    & address-of operator
//    * dereference operator
//
//    string food = "Pizza";  // Variable declaration
//    string* ptr = &food;    // Pointer declaration
//
//     Reference: Output the memory address of food with the pointer (0x6dfed4)
//     cout << ptr << "\n";
//
//     Dereference: Output the value of food with the pointer (Pizza)
//     cout << *ptr << "\n";
//
//    NULL pointer      int* pointer = nullptr;
//
//    int* some_ptr;
//    ...
//    if (some_ptr == NULL){
//    // Handle null-pointer error
//    }
//    else{
//    // Proceed
//    }
//
//    dynamic memory = Memory that is allocated aftr the program is already
//    compiled & running. Use the 'new' operator to allocate memory in the heap
//    rather than the stack. Useful when don't know how much memory we will
//    need. Makes our programs more flexible, espacially when accepting user
//    input.
//    
//    pNum = new int;
//
//    delete pNum;
//    delete[] pString;
//
//
//    template <typename T, typename U>
// 
//    auto max(T x, U y){
//    return (x > y)? x: y;
//    }
//
//
//    struct = A structure that group related variables under one name, structs can contain many different data types (strings, int, char, bool, ...), variables in a struct are known as "memners", members can be access with . "Class Member Access Operator"
//
//    struct student{
//    std::string name;
//    double gpa;
//    bool enrolled;
//    };
//
//    student student1;
//    student1.name = "Spongebob";
//    student1.gpa = 3.2;
//    ...
//
//
//    enums = a user-defined data type that consists of pair named-integers constants. GREAT if you have a lot of potential options
//
//    enum Day {sunday = 0, monday = 1, ...};
//
//    Day today = friday;
//
//    switch(today){
//      case sunday:
//      case 2:
//
//
//    object = a collection of attributes and methods. They can have characteristics and could peform actions. Can be used to mimic real world items (ex. phone, book, dog). Created from a class witch acts as a "blue-print".
//
//      class main
//      {
//       public:
//         main(/* args */);
//         
//       };
//    
//  constructor = 
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//