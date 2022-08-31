#pragma once
#include<string>
#include<iostream>
using namespace std;

class person
{
public:
    person( ){}
    person(string code1, string name1, string address1, string phone1);
   /* person* getLink( )
    {
        return link;
    }
    void setLink(person *newLink)
    {
        link = newLink;
    }*/
    void setCode(string newCode)
    {
        code = newCode;
    }
    string getCode()
    {
        return code;
    }
    void setName(string newName)
    {
        name = newName;
    }
    string getName()
    {
        return name;
    }
  	void setAddress(string newAddress)
    {
        address = newAddress;
    }
    string getAddress()
    {
        return address;
    }
    void setPhone(string newPhone)
    {
        phone = newPhone;
    }
    string getPhone()
    {
        return phone;
    }
    void printInfo()
    {
        cout << code << "  ,  " << name << "  ,  " << address << "  ,  " << phone << endl;
    }
protected:
    string code; 
    string name; 
    string address; 
    string phone; 
};

person::person(string code1,string name1, string address1, string phone1)
{
    code = code1;
    name = name1;
    address = address1;
    phone = phone1;
}
