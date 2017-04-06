//
// Created by Aris  Emery on 4/3/17.
//

#ifndef HW6_KEYVALUE_H
#define HW6_KEYVALUE_H

template <class K, class V>
class KeyValue {
public:
    K m_key;
    V m_value;
    KeyValue(){};
    KeyValue(K key, V value){
        m_key=key;
        m_value=value;
    };
    K getKey(){return m_key;};
    V getValue(){return m_value;};



};


#endif //HW6_KEYVALUE_H
