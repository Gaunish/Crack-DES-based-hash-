#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>


const int ASCII[52] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int main(int argc, string argv[])
{
   if(argc != 2)
   {
      printf("Error: please input 1 input only, not more not less.");
      return 1;
   }
   char currentComb[6];
   char salt[3] = {argv[1][0], argv[1][1], '\0'};
   int i[5] = {0};
   
   for(i[0] = 0; i[0] < 52; i[0]++)
  {
        currentComb[0] = ASCII[i[0]];
        currentComb[1] = '\0';
        if(!strcmp(crypt(currentComb, salt), argv[1]))
        {
            printf("Password is: %s \n", currentComb);
            return 0;
        }
        for(i[1] = 0; i[1] < 52; i[1]++)
        {
            currentComb[1] = ASCII[i[1]];
            currentComb[2] = '\0';
            if(!strcmp(crypt(currentComb, salt), argv[1]))
            {
                printf("Password is: %s \n", currentComb);
                return 0;
            }
            for(i[2] = 0; i[2] < 52; i[2]++)
            {
                currentComb[2] = ASCII[i[2]];
                currentComb[3] = '\0';
                if(!strcmp(crypt(currentComb, salt), argv[1]))
                {
                    printf("Password is: %s \n", currentComb);
                    return 0;
                }
                for(i[3] = 0; i[3] < 52; i[3]++)
                {
                    currentComb[3] = ASCII[i[3]];
                    currentComb[4] = '\0';
                    if(!strcmp(crypt(currentComb, salt), argv[1]))
                    {
                        printf("Password is: %s \n", currentComb);
                        return 0;
                    }
                    for(i[4] = 0; i[4] < 52; i[4]++)
                    {
                        currentComb[4] = ASCII[i[4]];
                        currentComb[5] = '\0';
                        if(!strcmp(crypt(currentComb, salt), argv[1]))
                        {
                             printf("Password is: %s \n", currentComb);
                             return 0;
                        }
                    }
                }
            }
        }
    }
   return 0;
}
