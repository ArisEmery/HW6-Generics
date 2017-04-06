//
// Created by Aris  Emery on 4/5/17.
//

#include "keyValueTester.h"
#include <iostream>
using namespace std;
void keyValueTester::testGetKey(){
    cout<<"Testing Get Key\n";
    KeyValue<string, string> myStringKeyValue("asdf","etugif");
    if(!(myStringKeyValue.getKey()=="asdf")){
        cout<<"Failed to return proper key value.\n";
        return;
    }
    KeyValue<int, int> myIntKeyValue(2,45);
    if(!(myIntKeyValue.getKey()==2)){
        cout<<"Failed to return proper key value.\n";
        return;
    }
    cout<<"Passed!\n";
}
void keyValueTester::testGetValue(){
    cout<<"Testing Get Value\n";

    KeyValue<string, string> myStringKeyValue("asdf","etugif");
    if(!(myStringKeyValue.getValue()=="etugif")){
        cout<<"Failed to return proper value field.\n";
        return;
    }KeyValue<int, int> myIntKeyValue(2,45);
    if(!(myIntKeyValue.getValue()==45)){
        cout<<"Failed to return proper key value.\n";
        return;
    }
    cout<<"Passed!\n";
}
/*
string testerString="sfdg";
int testerInt=0;
*/