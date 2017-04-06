//
// Created by Aris  Emery on 4/5/17.
//

#include "dictionaryTester.h"
using namespace std;

void dictionaryTester::testConstructor(){
    string myString="hey there";
    cout<<"Testing constructor\n";
    Dictionary<string, string> myDictionary  (20);
    if(!(myDictionary.getNumKeyValuePairs()==20)){
        cout<<"Constructor failed!\n";
        return;
    }
    cout<<"Passed!\n";
    return;
}

void dictionaryTester::testAddAndGetByKey() {
    cout<<"testing add function and get by key."<<endl;
    Dictionary<int, string> myDictionary(20);
    myDictionary.add(4, "Michael");
    string string2="Michael";
    if(!(myDictionary.getValueByKey(4)==string2)){
        cout<<"Either add or get by Key is failing!\n";
        return;
    }
    if(!(myDictionary.getValueByKey(4)==string2)){
        cout<<"Either add or get by Key is failing!\n";
        return;
    }
    myDictionary.add(2, "Jason");

    if(!(myDictionary.getValueByKey(2)=="Jason")){
        cout<<"Either add or get by Key is failing!\n";
        return;
    }
    Dictionary<string, string> myStringKeyDictionary(20);
    myStringKeyDictionary.add("older bro", string2);
    if(!(myStringKeyDictionary.getValueByKey("older bro")==string2)){
        cout<<"Either add or get by Key is failing!\n";
        return;
    }
    myStringKeyDictionary.add("myself", "Aris");
    if(!(myStringKeyDictionary.getValueByKey("myself")=="Aris")){
        cout<<"Either add or get by Key is failing!\n";
        return;
    }
    bool caught=false;
    try{
        myDictionary.getByKey(78);
    }
    catch( const std::invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error when nonexistent element tried to be found"<<endl;
    }
    cout<<"Passed!\n";
    return;
}
void dictionaryTester::testGetByIndex(){
    cout<<"Testing get by index.\n";
    bool caught=false;
    Dictionary<string, string> myDictionary(20);
    myDictionary.add("hair color", "brown");
    try{
        myDictionary.getByIndex(-1);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error where bad id was given to find KeyValue."<<endl;
    }
    try{
        myDictionary.getByIndex(78);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error where bad id was given to find KeyValue."<<endl;
    }
    cout<<"passed!\n";
}

void dictionaryTester:: testremoveByKey(){
    Dictionary<string, string> myDictionary(20);
    bool caught=false;
    try {
        myDictionary.removeByKey("test");
    }
    catch( const std::invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error when nonexistent element tried to be removed"<<endl;
    }
    caught=false;
    myDictionary.add("hair color", "brown");
    if(!(myDictionary.getValueByKey("hair color")=="brown")){
        cout<<"failure! add didn't work\n";
        return;
    }
    myDictionary.removeByKey("hair color");



    cout<<"Passed!\n";
    return;
};
void dictionaryTester:: testRemoveByIndex(){
    cout<<"Testing remove by index.\n";
    bool caught=false;
    Dictionary<string, string> myDictionary(20);
    myDictionary.add("hair color", "brown");
    try{
        myDictionary.removeByIndex(-1);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error where bad id was given to remove KeyValue."<<endl;
    }
    try{
        myDictionary.removeByIndex(78);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failed to catch error where bad id was given to remove KeyValue."<<endl;
    }
    cout<<"Passed!\n";
    return;
}

