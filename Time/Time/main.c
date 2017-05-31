//
//  main.c
//  Time
//
//  Created by Endia Irizarry on 5/1/17.
//  Copyright © 2017 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <time.h>

//Calculate what the date will be in 4 million seconds

int main(int argc, const char * argv[]) {
    // find out how many seconds since 1970
    long secondsSince1970 = time(NULL);
    
    // calculate how many more 4M seconds is
    long futureTime = secondsSince1970 + 4000000;
    
    
    struct tm future;
    localtime_r(&futureTime, &future);
    printf("In 4 million seconds, the date will be %d-%d-%d.\n", future.tm_mon + 1, future.tm_mday, future.tm_year + 1900);
    
    
    return 0;
}
