#pragma once
#include<string>
#include<iostream>
using namespace std;

class product
{
public:
    product( ){}
    product(string code1, string name1, string cost1, int num1);
    product* getLink( )
    {
        return link;
    }
    void setLink(product *newLink)
    {
        link = newLink;
    }
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
  	void setCost(string newCost)
    {
        cost = newCost;
    }
    string getCost()
    {
        return cost;
    }
    void setNum(int newNum)
    {
        num = newNum;
    }
    int getNum()
    {
        return num;
    }
    void printInfo()
    {
        cout << code << "  ,  " << name << "  ,  " << cost << "  ,  " << num << endl;
    }
private:
    string code; 
    string name; 
    string cost; 
    int num; 
    product *link; 
};

product::product(string code1,string name1, string cost1, int num1)
{
    code = code1;
    name = name1;
    cost = cost1;
    num = num1;
}

class LinkedList2
{
public:
    LinkedList2()
    {
        head = NULL;
    }
    void insertproduct(product* e);
    product* search(string code);
    product* searchNodeBefore(string code);
    void printList();
private:
    product *head;
};

void LinkedList2::insertproduct(product* e)
{
    e->setLink(head);
    head = e;
}

product* LinkedList2::search(string code)
{
    product *here = head;
    while(here != NULL && here->getCode() != code)
        here = here->getLink();
    return here;
}

product* LinkedList2::searchNodeBefore(string code)
{
    product *here = head;
    while(here != NULL)
    {
        product *next = here->getLink();
        if(next->getCode()==code)break;
        else here = here->getLink();
    }
    return here;
}

void LinkedList2::printList()
{
    product *here = head;
    while(here != NULL)
    {
        here->printInfo();
        here = here->getLink();
    }
}




