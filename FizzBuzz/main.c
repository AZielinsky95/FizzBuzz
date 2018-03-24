//
//  main.c
//  FizzBuzz
//
//  Created by Alejandro Zielinsky on 2018-02-04.
//  Copyright © 2018 Alejandro Zielinsky. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("FIZZ BUZZ FROM 1-100 \n\n");
    
    for (int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            if(i % 5 == 0)
            {
                printf("FizzBuzz \n");
            }
            else
            {
            printf("Fizz \n");
            }
        }
        else if (i % 5 == 0)
        {
           printf("Buzz \n");
        }
        else
        {
            printf("%d \n",i);
            
        }
    }
    
    return 0;
}
