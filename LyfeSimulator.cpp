#include <iostream>
#include <stdio.h>   /* printf */
#include <stdlib.h>

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
    happinessLvl = percentBank + percentBoss + percentPosition + percentExhuastion + percentPartner + percentKids;\
    if(happinessLvl>100)
    {
      happinessLvl = 100;
    }
    return happinessLvl;

}

int rest(int exhaustion)
{
  cout << "Resting..." << endl;
  exhaustion-=2;
  if(exhaustion<=0)
  {
    exhaustion = 0;
  }
}

int work(int salaryLvl, int positionLvl, int boss)
{
  cout << "Working..." << endl;
  salaryLvl++;
  positionLvl++;
  boss+=5;
}

int workHard(int salaryLvl, int positionLvl, int boss, int partner, int kids, int exhaustion)
{
  cout << "Working...Hard..." << endl;
  salaryLvl+=2;
  positionLvl+=2;
  partner-=5;
  exhaustion++;
}

int suckUpToBoss(int positionLvl, int boss)
{
  cout << "Sucking Up..." << endl;
  positionLvl+=2;
  boss+=10;
}

int romance(int partner, int bank)
{
  cout << "Romancing..." << endl;
  partner+=10;
}

int spendTimeWithKids(int partner, int kids)
{
  cout << "Raising Kids..." << endl;
  partner+=5;
  kids+=5;
}

int buyKidsToys(int kids, int bank)
{
  cout << "Wasting Money On Kids..." << endl;
  kids+=10;
  bank-=20;
}

int lottery(int bank)
{
  int luckyNumber;
  int lotteryTickets[10];
  cout << "Striking It Rich..." << endl;
  bank-=10;
  for(int i=1; i<=10; i++)
  {
      lotteryTickets[i] = rand() % 1000000 + 1;
      if(lotteryTickets[i]==luckyNumber)
      {
        bank+=1000000;
      }
  }

}

int stats(int happiness, int bank, int dayCount, int boss, int salary, int position, int exhaustion, int partner, int kids)
{
  cout << "-Stats- \n" << "Happiness: " << happiness << "\n" << "Bank: " << bank << "\n" << endl;

}

int day(int happiness, int bank, int dayCount,
        int boss, int salary, int position, int salaryLvl, int positionLvl, int raiseCount,
        int exhaustion, int partner, int kids)
{
  char choice[6];
  int i;
  cout << "What do you wish to do today? Pick 6:" << endl;
  cout << "a) Rest \n b) Work \n c) Work Hard \n d) Suck Up To Boss \n e) Romance \n f) Spend Time With Kids \n g) Buy Kids Toys \n h) Lottery " << endl;
//  char restChoice='a', workChoice='b', workHardChoice='c', suckUpToBossChoice='d',
//    romanceChoice='e', spendTimeWithKidsChoice='f', buyKidsToysChoice='g', lotteryChoice='h';
  for(i=0; i<=5; i++)
  {
    cin >> choice[i];
  }
  for(i=0; i<=5; i++)
  {
    switch(choice[i]) {
      case 'a':
        rest(exhaustion);
        break;
      case 'b':
        work(salaryLvl, positionLvl, boss);
        break;
      case 'c':
        workHard(salaryLvl, positionLvl, boss, partner, kids, exhaustion);
        break;
      case 'd':
        suckUpToBoss(positionLvl, boss);
        break;
      case 'e':
        romance(partner, bank);
        break;
      case 'f':
        spendTimeWithKids(partner, kids);
        break;
      case 'g':
        buyKidsToys(kids, bank);
        break;
      case 'h':
        lottery(bank);
        break;
      default:
        rest(exhaustion);
     }
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

  //happiness = happinessCalculator(happiness, salary, bank, boss, position, exhaustion, partner, kids); //level of happiness

  for(dayCount = 0; dayCount <= gameLength; dayCount++)
  {
    happiness = happinessCalculator(happiness, salary, bank, boss, position, exhaustion, partner, kids);
    stats(happiness, bank, dayCount,
    boss, salary, position,
    exhaustion, partner, kids);

    day(happiness, bank, dayCount,
        boss, salary, position, salaryLvl, positionLvl, raiseCount,
        exhaustion, partner, kids);

  }
}
