#include <iostream>
#include <string>
int main() { return 0; }

// int - integer, ca�e liczby
// (long) double, liczby z przecinkiem (kropk�)
// char - pojedyncze znaki ('A')
// boolean - true/false, tak/nie, 1/0
// std::string - ci�g znak�w ("Aha xd")
//
// const double LIGHT_SPEED=299792458 - tylko do odczytu, nie da si� zmieni�
// (nazwy z du�ych liter)
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
// na g�rze   using namespace jeden;      using std::string;
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
// text_t imi� = "Karol";
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
// variable = (condition) ? expressionTrue : expressionFalse;          kr�tka
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
//                              .at(0) wy�wietla pierwszy znak tekstu
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
// void funkcja(){}   w () paramrtry jak chcemy co� "w�o�y�" do tej funkcji,
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
// }                                                                 to samo
// tylko inaczej
//                                                                           ||
//  foreach loop - loop that eases the traversal over an iterable data set   \/
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
//
//
//