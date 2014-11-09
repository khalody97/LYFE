#include <iostream>
//#include <stdio.h>      /* printf */

using namespace std;

int happinessCalculator(int bank, int boss, int position, int exhaustion, int partner, int kids)
{
  return 10;

}
int stats(int happiness, int bank, int dayCount, int boss, int salary, int position, int exhaustion, int partner, int kids)
{
  cout << "Hello Stats" << endl;

}
int day(int happiness, int bank, int dayCount,
        int boss, int salary, int position, int salaryLvl, int positionLvl, int raiseCount,
        int exhaustion, int partner, int kids)
{
  //int choice [6];
  cout << "What do you wish to do today? Pick 6:" << endl;
  cout << "a) Rest \n b) Work \n c) Work Hard \n d) Suck Up To Boss \n e) Romance \n f) Spend Time With Kids \n g) Buy Kids Toys \n h) Lottery " << endl;


}

int main()
{
  int happiness, bank, dayCount, gameLength,
    boss, salary, position, salaryLvl, positionLvl, raiseCount,
    exhaustion, partner, kids;

  bank = 100; //money
  boss = 50; //boss opinion
  salary = 10; //current salary
  position = 1; //starting job position
  salaryLvl = 0; //step towards raise
  positionLvl = 0; //step towards promotion
  raiseCount = 0; //number of previous raises
  exhaustion = 0; //level of exhaustion from lack of rest
  partner = 50; //partner's opinion
  kids = 50; //kid's opinion
  cout << "Enter desired game length: ";
  cin >> gameLength;

  happiness = happinessCalculator(bank, boss, position, exhaustion, partner, kids); //level of happiness

  cout << "Hello World" << endl;
  for(dayCount = 0; dayCount <= gameLength; dayCount++)
  {
    stats(happiness, bank, dayCount,
    boss, salary, position,
    exhaustion, partner, kids);

    day(happiness, bank, dayCount,
        boss, salary, position, salaryLvl, positionLvl, raiseCount,
        exhaustion, partner, kids);

  }
}
