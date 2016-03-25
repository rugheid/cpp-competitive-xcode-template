//
//  ___FILENAME___
//  ___PACKAGENAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    #ifdef USE_INPUT_AND_OUTPUT_FILES
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    return 0;
}