#include<iostream>
using namespace std;
int
four (int i)
{
  while (i != 0)
    {
      int rem = i % 10;
      if (rem == 4)
	{
	  return 1;
	}
      i = i / 10;
    }
  return 0;
}

int
divFour (int i)
{
  int sum = 0;
  while (i != 0)
    {
      int rem = i % 10;
      sum = sum + rem;
      i = i / 10;
    }
  if (sum % 4 == 0)
    {
      return 1;

    }
  return 0;
}

int
main ()
{
  int count = 0;
  for (int i = 1; i <= 88; i++)
    {

      if (four (i) || divFour (i))
	{

	  cout << i << " ";
	  count++;
	}
    }
  cout << "\n" << count;
  return 0;
}
