#include <iostream>
#include "Dictionary.h"
using namespace std;
int main() {
    cout<<"Welcome to your favorite Generic dictionary program!\n";
    Dictionary<string, string> myDictionary(200);
    cout<<"Here is a dictionary initialized with <string, string>\n";
    string value1, value2;
    cout<<"What would you like to put for the key(must be string)?\n";
    cin>>value1;
    cout<<"What would you like to put for the value(must be string)?\n";
    cin>>value2;
    myDictionary.add(value1, value2);
    KeyValue<string,string>* temp = new KeyValue<string,string>(value1, value2);

    bool done=false;
    int option=0;
    while(done==false){
        cout<<"Now you can play around with it a little using these commands:\n";
        cout<<"1: View number of KeyValue pairs in dictionary\n";
        cout<<"2: View the value field of your key value pair\n";
        cout<<"3: View the key field in your key value pair\n";
        cout<<"4: Move on.";
        cin>>option;
        switch (option){
            case 1:
                cout<<myDictionary.currentKeyValuePairs<<endl;
            break;
            case 2:
                cout<<temp->getValue()<<endl;
                //cout<<myDictionary.getByKey(value1).m_value<<endl;
            break;
            case 3:
                cout<<temp->getKey()<<endl;
            break;
            case 4:
                cout<<"Moving on...\n";
                done=true;
            break;
            default:
                cout<<"Well I didn't want a valid number anyway. So done rn.\n";
                done=true;
            break;
    }
    }
    cout<<"Now we are going to use the exact same code to do the same thing, but with integers!\n";
    Dictionary<int, int> myDictionary2(200);
    cout<<"Here is a dictionary initialized with <int, int>\n";
    int intValue1, intValue2;
    cout<<"What would you like to put for the key(must be int)?\n";
    cin>>intValue1;
    cout<<"What would you like to put for the value(must be int)?\n";
    cin>>intValue2;
    myDictionary2.add(intValue1, intValue2);
    KeyValue<int,int>* temp2 = new KeyValue<int,int>(intValue1, intValue2);
    done=false;
    int option2=0;
    while(done==false){
        cout<<"Now you can play around with it a little using these commands:\n";
        cout<<"1: View number of KeyValue pairs in dictionary\n";
        cout<<"2: View the value field of your key value pair\n";
        cout<<"3: View the key field in your key value pair\n";
        cout<<"4: Quit.";
        cin>>option2;
        switch (option2){
            case 1:
                cout<<myDictionary2.currentKeyValuePairs<<endl;
                break;
            case 2:
                cout<<temp2->getValue()<<endl;
                //cout<<myDictionary.getByKey(value1).m_value<<endl;
                break;
            case 3:
                cout<<temp2->getKey()<<endl;
                break;
            case 4:
                cout<<"Done\n";
                done=true;
                break;
            default:
                cout<<"Well I didn't want a valid number anyway. So done rn.\n";
                done=true;
                break;
        }
    }
}