#include <iostream>
#include <stdio.h>   /* printf */
#include <stdlib.h>

using namespace std;

int happiness, bank, dayCount, gameLength,
    boss, salary, position, salaryLvl, positionLvl, raiseCount,
    exhaustion, partner, kids;

int happinessCalculator()
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
    if(happinessLvl>=100)
    {
      happinessLvl = 100;
    }
    return happinessLvl;

}
int jobPromotionCalculator()
{
  if(salaryLvl>=10)
  {
    salary=salary+(10*raiseCount);
    raiseCount++;
    salaryLvl = 0;
  }
  if(positionLvl>=15)
  {
    position++;
    salary=salary*1.5;
    raiseCount++;
    positionLvl = 0;
  }
}

int rest()
{
  cout << "Resting..." << endl;
  exhaustion-=2;
  if(exhaustion<=0)
  {
    exhaustion = 0;
  }
}

int work()
{
  cout << "Working..." << endl;
  salaryLvl++;
  positionLvl++;
  jobPromotionCalculator();
  boss+=5;
}

int workHard()
{
  cout << "Working...Hard..." << endl;
  salaryLvl+=2;
  positionLvl+=2;
  jobPromotionCalculator();
  partner-=5;
  exhaustion++;
}

int suckUpToBoss()
{
  cout << "Sucking Up..." << endl;
  positionLvl+=2;
  jobPromotionCalculator();
  boss+=10;
}

int romance()
{
  cout << "Romancing..." << endl;
  partner+=10;
  bank-=20;
}

int spendTimeWithKids()
{
  cout << "Raising Kids..." << endl;
  partner+=5;
  kids+=5;
}

int buyKidsToys()
{
  cout << "Wasting Money On Kids..." << endl;
  kids+=10;
  bank-=20;
}

int lottery()
{
  int luckyNumber;
  int lotteryTickets[25];
  cout << "Striking It Rich..." << endl;
  bank-=25;
  for(int i=0; i<=24; i++)
  {
      lotteryTickets[i] = rand() % 1000000 + 1;
      if(lotteryTickets[i]==luckyNumber)
      {
        bank+=1000000;
      }
  }

}

int stats()
{
  cout << "-Stats- \n" << "Happiness: " << happiness << "   " << "Bank: " << bank << "\n" << endl;
  cout << "Boss: " << boss << "   " << "Partner: " << partner << "\n" << endl;
  cout << "Position: " << position << "   " << "Kids: " << kids << "\n" << endl;
  cout << "Salary: " << salary << "   " << "Exhaustion: " << exhaustion << "\n" << endl;



}

int day()
{
  char choice[6];
  int i;
  cout << "What do you wish to do today? Pick 6:" << endl;
  cout << "a) Rest \n b) Work \n c) Work Hard \n d) Suck Up To Boss \n e) Romance \n f) Spend Time With Kids \n g) Buy Kids Toys \n h) Lottery " << endl;
//  char restChoice='a', workChoice='b', workHardChoice='c', suckUpToBossChoice='d',
//    romanceChoice='e', spendTimeWithKidsChoice='f', buyKidsToysChoice='g', lotteryChoice='h';
  exhaustion++;
  bank-=(.8*salary);
  happiness-=10;
  partner-=5;
  kids-=5;
  boss-=5;
  for(i=0; i<=5; i++)
  {
    cin >> choice[i];
  }
  for(i=0; i<=5; i++)
  {
    switch(choice[i]) {
      case 'a':
        rest();
        break;
      case 'b':
        work();
        break;
      case 'c':
        workHard();
        break;
      case 'd':
        suckUpToBoss();
        break;
      case 'e':
        romance();
        break;
      case 'f':
        spendTimeWithKids();
        break;
      case 'g':
        buyKidsToys();
        break;
      case 'h':
        lottery();
        break;
      default:
        rest();
     }
  }




}

int main()
{

  happiness = 0; //happiness level
  bank = 100; //money
  boss = 50; //boss opinion
  salary = 10; //current salary
  position = 1; //starting job position
  salaryLvl = 0; //step towards raise
  positionLvl = 0; //step towards promotion
  raiseCount = 1; //number of previous raises
  exhaustion = 0; //level of exhaustion from lack of rest
  partner = 50; //partner's opinion
  kids = 50; //kid's opinion
  cout << "Enter desired game length: ";
  cin >> gameLength;


  for(dayCount = 0; dayCount <= gameLength; dayCount++)
  {
    happiness = happinessCalculator();
    stats();
    day();

  }
}
