/*
 * Name: Taylor Ferguson
 * Date: 3/15/2016
 * Project 1: (Reverse a string) Enter a string and the program will
 *                               reverse it and print it out.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // str will hold the string to be reversed
   // str_reverse will hold the reversed str
   string str;
   string str_reverse = "";

   // read in a string to str
   cout << "Please enter a word to be reversed." << endl;
   cin >> str;
   cout << "string " << str << ".length() = " << str.length() << endl;
   cout << str << " reveresed is ";

   // for loop starts at str.length()-1
   // grabs each character, then concatenates
   // str[i] with str_reverse starting from
   // the end of str to the beginning.
   for(int i = str.length() - 1; i >= 0; i--) {
      str_reverse += str[i];
   }
   
   cout << str_reverse << endl;

   return 0;
}
