#include <iostream>
#include <stdio.h>      /* printf */

using namespace std;

int happinessCalculator(int happiness, int salary, int bank, int boss, int position, int exhaustion, int partner, int kids)
{
    int happinessLvl = 0;
    int percentBank, percentBoss, percentPosition, percentExhuastion, percentPartner, percentKids;
    percentBank = 25*(bank/(10*salary));
    percentBoss = 10*(boss/100);
    percentPosition = 20*(position/100);
    percentExhuastion = -1*(exhaustion*10);
    percentPartner = 25*(partner/100);
    percentKids = 20*(kids/100);
    happinessLvl = percentBank + percentBoss + percentPosition + percentExhuastion + percentPartner + percentKids;
    return happinessLvl;

}

int stats(int happiness, int bank, int dayCount, int boss, int salary, int position, int exhaustion, int partner, int kids)
{
  cout << "-Stats- \n" << "Happiness: " << happiness << endl;

}

int day(int happiness, int bank, int dayCount,
        int boss, int salary, int position, int salaryLvl, int positionLvl, int raiseCount,
        int exhaustion, int partner, int kids)
{
  char choice[6];
  cout << "What do you wish to do today? Pick 6:" << endl;
  cout << "a) Rest \n b) Work \n c) Work Hard \n d) Suck Up To Boss \n e) Romance \n f) Spend Time With Kids \n g) Buy Kids Toys \n h) Lottery " << endl;
  for(int i=0; i<=5; i++)
  {
    cin >> choice[i];

  }

}

int main()
{
  int happiness, bank, dayCount, gameLength,
    boss, salary, position, salaryLvl, positionLvl, raiseCount,
    exhaustion, partner, kids;

  happiness = 0; //happiness level
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

  happiness = happinessCalculator(happiness, salary, bank, boss, position, exhaustion, partner, kids); //level of happiness

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
