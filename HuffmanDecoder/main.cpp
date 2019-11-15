//
//  main.cpp
//  HuffmanDecoder
//
//  Created by Nathan Molby on 11/8/19.
//  Copyright © 2019 Nathan Molby. All rights reserved.
//

#include <iostream>
#include "HuffmanDecoder.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    string inFileName;
    string outFileName;

    if(argc < 2){
        cout << "Enter infile name: ";
        cin >> inFileName;
        cout << "Enter outfile name: ";
        cin >> outFileName;
    } else{
        inFileName = string(argv[1]);
        outFileName = string(argv[2]);
    }
    
    HuffmanDecoder decoder(inFileName, outFileName);
    
    decoder.decode();
    
    return 0;
}
