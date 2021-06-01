#include <iostream>

int main() 
{
  using std::cout;
  int AGE = 29;
  const int DAYS_IN_YEAR = 365;
  float age_in_days = 0;

  age_in_days = AGE * DAYS_IN_YEAR;

  cout << age_in_days << " days old";

  return 0;
}
