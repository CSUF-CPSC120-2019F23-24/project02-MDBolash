// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

int main()
{

//State Variables.
 unsigned double hotel, meal, total, cost, food;
  int days;
  const int SIZE = 100;
  char location[SIZE];
  //Intro.
  std::cout << "Welcome to the Business Trip Tracker! ";

  //Get location
  std::cout << "Where are you heading? ";
  std::cin.getline (location, SIZE);
  //Turn location into a string
  std::string tlocation(location);
  //Get Var days
  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //Get Hotel cost I'm not sure if the hotal cost was supposed to be per day but it makes sense that it is.
  std::cout << "How much does the hotel cost per day? ";
  std::cin >> hotel;
  double htotal = hotel*days ;
  // Get the food cost.
  std::cout << "how much did you spend on food? ";
  std::cin >> food;
  double ftotal = food ;

  //calculate total for Business expenses.
  total = ftotal+htotal;
  //display total business expenses
  std::cout << std::setw(17) << "location"
      << std::setw(17) << "days"
      << std::setw(17) << "hotel"
      << std::setw(17) << "food"
      << std::setw(17) << "total" << '\n' ;
      std::cout << std::setw(19) << tlocation.substr(0,20) ;
      std::cout  << std::setw(15) << std::setprecision (2) << std::fixed << days ;
      std::cout  << std::setw(11) << "$" << std::setprecision (2) << std::fixed << htotal ;
      std::cout  << std::setw(11) << "$" << std::setprecision (2) << std::fixed << ftotal ;
      std::cout  << std::setw(11) << "$" << std::setprecision (2) << std::fixed << total ;


return 0;
  }
