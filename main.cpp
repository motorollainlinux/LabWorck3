
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
     FILE *num , *output;
     num = fopen("startgame.txt", "r");
     output = fopen("endgame.txt","w");
     int  gamenumber = 0, number = 0;
     fscanf(num,"%d",&gamenumber);
     for (;;) 
     {
         cin >> number;
         if (number > gamenumber) 
         {
             cout <<"введите число меньше";
         } else if () 
         {
             
         }
     }
     return 0;
}