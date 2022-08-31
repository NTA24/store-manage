#pragma once
#include "person1.h"

class staff : public person
{
public:
	staff(){};	
	staff(string code1, string name1, string address1, string phone1, int checkin1);
	staff* getLink( )
    {
        return link;
    }
    void setLink(staff *newLink)
    {
        link = newLink;
    }		
	void setCheckin(int newCheckin)
    {
        checkin = newCheckin;
    }
    int getCheckin()
    {
        return checkin;
    }
    void printInfo()
    {
        cout << code << "  ,  " << name << "  ,  " << address << "  ,  " << phone << "  ,  "<< checkin << endl;
    }
private:
    int checkin;
    staff *link; 
};

staff::staff(string code1,string name1, string address1, string phone1,int checkin1)
{
    code = code1;
    name = name1;
    address = address1;
    phone = phone1;
    checkin = checkin1;
}

class LinkedList
{
public:
    LinkedList()
    {
        head = NULL;
    }
    void insertstaff(staff* e);
    void deletestaff(string code);
    staff* search(string code);
    staff* searchNodeBefore(string code);
    void printList();
private:
    staff *head;
};

void LinkedList::insertstaff(staff* e)
{
    e->setLink(head);
    head = e;
}

void LinkedList::deletestaff(string code)
{
    staff* discard = search(code);
    if(discard == NULL)
    {
        cout << "Khong tim thay ma can xoa" << endl;
        return;
    }
    else
    {
        staff* before = searchNodeBefore(code);
        before->setLink(discard->getLink());
        delete discard;
    }
}


staff* LinkedList::search(string code)
{
    staff *here = head;
    while(here != NULL && here->getCode() != code)
        here = here->getLink();
    return here;
}

staff* LinkedList::searchNodeBefore(string code)
{
    staff *here = head;
    while(here != NULL)
    {
        staff *next = here->getLink();
        if(next->getCode()==code)break;
        else here = here->getLink();
    }
    return here;
}

void LinkedList::printList()
{
    staff *here = head;
    while(here != NULL)
    {
        here->printInfo();
        here = here->getLink();
    }
}

