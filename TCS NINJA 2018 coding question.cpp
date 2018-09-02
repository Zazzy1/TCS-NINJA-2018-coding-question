/*
input 3 strings each in new line
convert the vowels in string1 to $
convert the consonants in string2 to #
convert string3 to uppercase*/
#include<iostream>
#include<string.h>

using namespace std;
int
main ()
{
  string s1, s2, s3;
  cin >> s1;
  cin >> s2;
  cin >> s3;
  int l1 = s1.length ();
  int l2 = s2.length ();
  int l3 = s3.length ();
  //strcat(s1, s2); for character data-type concatenation
  //s1+s2; + for string concatenation
  for (int i = 0; i < l1; i++)
    {
      if ((s1[i] == 'a') || (s1[i] == 'e') || (s1[i] == 'i') ||
	  (s1[i] == 'o') || (s1[i] == 'u') || (s1[i] == 'A') ||
	  (s1[i] == 'E') || (s1[i] == 'I') || (s1[i] == 'O')
	  || (s1[i] == 'U'))
	{
	  s1[i] = '$';

	}
    }

  for (int i = 0; i < l2; i++)
    {
      if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' ||
	  s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' ||
	  s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U')
	   {continue;}
	 else
	{
	  s2[i] = '#';
	}
    }
  for (int i = 0; i < l3; i++)
    {
      if (islower (s3[i]))
	{
	  s3[i] = toupper (s3[i]);
	}
    }
  cout << s1 + s2 + s3;

  return 0;
}
