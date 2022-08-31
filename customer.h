#pragma once
#include "person1.h"

class customer : public person
{
public:
	customer(){};
	
	customer(string code1, string name1, string address1, string phone1, int point1);

	customer* getLink( )
    {
        return link;
    }
    void setLink(customer *newLink)
    {
        link = newLink;
    }		
	void setPoint(int newPoint)
    {
        point = newPoint;
    }
    int getPoint()
    {
        return point;
    }
    void printInfo()
    {
        cout << code << "  ,  " << name << "  ,  " << address << "  ,  " << phone << "  ,  "<< point << endl;
    }
private:
    int point;
    customer *link; 
};

customer::customer(string code1,string name1, string address1, string phone1,int point1)
{
    code = code1;
    name = name1;
    address = address1;
    phone = phone1;
    point = point1;
}

class LinkedList1
{
public:
    LinkedList1()
    {
        head = NULL;
    }
    void insertcustomer(customer* e);
    void deletecustomer(string code);
    customer* search(string code);
    customer* searchNodeBefore(string code);
    void printList();
private:
    customer *head;
};

void LinkedList1::insertcustomer(customer* e)
{
    e->setLink(head);
    head = e;
}

void LinkedList1::deletecustomer(string code)
{
    customer* discard = search(code);
    if(discard == NULL)
    {
        cout << "Khong tim thay ma can xoa" << endl;
        return;
    }
    else
    {
        customer* before = searchNodeBefore(code);
        before->setLink(discard->getLink());
        delete discard;
    }
}
customer* LinkedList1::search(string code)
{
    customer *here = head;
    while(here != NULL && here->getCode() != code)
        here = here->getLink();
    return here;
}

customer* LinkedList1::searchNodeBefore(string code)
{
    customer *here = head;
    while(here != NULL)
    {
        customer *next = here->getLink();
        if(next->getCode()==code)break;
        else here = here->getLink();
    }
    return here;
}

void LinkedList1::printList()
{
    customer *here = head;
    while(here != NULL)
    {
        here->printInfo();
        here = here->getLink();
    }
}
