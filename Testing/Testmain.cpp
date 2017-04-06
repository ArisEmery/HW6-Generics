//
// Created by Aris  Emery on 4/3/17.
//
#include <iostream>
#include "../Dictionary.h"
#include "../KeyValue.h"
#include "keyValueTester.h"
#include "dictionaryTester.h"

int main() {
    dictionaryTester myDictionaryTester;
    myDictionaryTester.testConstructor();
    myDictionaryTester.testAddAndGetByKey();
    myDictionaryTester.testGetByIndex();
    myDictionaryTester.testremoveByKey();
    myDictionaryTester.testRemoveByIndex();
    keyValueTester myKeyValueTester;
    myKeyValueTester.testGetKey();
    myKeyValueTester.testGetValue();


    /*
    std::cout << "Hello, World test!" << std::endl;
    int test=6;
    KeyValue<int, int> mKey;
    */
    return 0;
}