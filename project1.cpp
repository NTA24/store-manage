#include "staff.h"
#include "customer.h"
#include "product.h"
//#include "bill.h"
#include "bill1.h"
int main()
{
	string code, name, address, phone,cost;
	int checkin,point;
	int num;
	string oldcode, newcode;
	staff* e;
	customer* e1;
	product* e2;
	LinkedList list;
	LinkedList1 list1;
	LinkedList2 list2;
	//LinkedList3 list3;
	int n;
	int c;
	 Client new_data;
    PTLinkedList data_list;
	
	cout <<"CHON CHUC NANG" <<endl;
	cout <<"1 - Nhan vien" <<endl;
	cout <<"2 - Khach hang" <<endl;
	cout <<"3 - San pham" <<endl;
	cout <<"4 - Hoa don" <<endl;
	cout <<"5 - Thoat" << endl;
	
	int pick;
	do 
	{	cout <<"Chon chuc nang: ";
		cin >> pick;
		cout << endl;
		if (pick==1)
		{
    		cout << "1 - Them nhan vien" << endl;
    		cout << "2 - Xoa nhan vien" << endl;
    		cout << "3 - Sua nhan vien" << endl;
    		cout << "4 - In ra thong tin toan bo nhan vien" << endl;
    		cout << "5 - Tim kiem nhan vien" << endl;
    		cout << "6 - Thoat" << endl;

			int pick1;
			do
			{
				cout << "Chon chuc nang: ";
        		cin >> pick1;
       			cout << endl;
        		switch(pick1)
        	{
        		case 1:
        	
				int n;
				cout<<"Nhap so nhan vien: ";
				cin>>n;
				cout<<endl;
				for(int i=0;i<n;i++)
					{  	
						cin.ignore();
						cout << "Nhap thong tin nhan vien thu "<<i+1<<endl;
            			cout << "Nhap ma: "; cin>>code;
            			cin.ignore();
            			cout << "Nhap ten: "; getline(cin,name);
            			cout << "Nhap dia chi: "; cin >> address;
            			cout << "Nhap sdt: "; cin >> phone;
            			cout << "Nhap cham cong: "; cin >> checkin;
            			cout<<endl;
            			list.insertstaff(new staff(code, name, address, phone,checkin));            			
					}
			break;
			
			case 2:
				cin.ignore();
                cout << "Nhap ma nhan vien can xoa: "; cin>>code;
                list.deletestaff(code);
                cout << "Thong tin cua nhan vien: " << endl;
                list.printList();
                break;
            case 3:
            	cin.ignore();
                cout << "Nhap ma nhan vien can sua: "; getline(cin, oldcode);
                e = list.search(oldcode);
                if(e == NULL)
                {
                    cout << "Khong co nhan vien co ma " << oldcode;
                    break;
                }
                else
                {
                    cout << "Thong tin cu cua nhan vien: ";
                    e->printInfo();
                    cout << "Nhap ma moi: "; cin >> code;
                    cin.ignore();
                    cout << "Nhap ten moi: "; getline(cin,name);
                    cout << "Nhap dia chi moi: "; cin >> address;
                    cout << "Nhap sdt moi: "; cin >> phone;
                    cout << "Nhap cham cong moi: "; cin >> checkin;
                    e->setCode(newcode);
                    e->setName(name);
                    e->setAddress(address);
                    e->setPhone(phone);
                    e->setCheckin(checkin);
                }
                break;
                
			case 4:
               cout << "Thong tin cua nhan vien:" << endl;
               list.printList();
         
                break;
			break;
			
			case 5:
                cout << "Nhap ma nhan vien can tim:"; cin>>code;
                e = list.search(code);
                if(e == NULL)
				cout << "Khong co nhan vien nao co ma " << code<<endl;
                else
                {
                    cout << "Thong tin tim thay ve nhan vien:";
                    e->printInfo();
                }
                break;
			case 6:
                break;
            default:
                cout << "Nhap sai, hay nhap lai!"<<endl;
		}
	}
	while(pick1!=6);
}
        
	if (pick==2)
	{
				cout << "1 - Them khach hang" << endl;
    			cout << "2 - Xoa khach hang" << endl;
    			cout << "3 - Sua khach hang" << endl;
    			cout << "4 - In ra thong tin toan bo khach hang" << endl;
    			cout << "5 - Tim kiem khach hang" << endl;
   				cout << "6 - Thoat" << endl;

	int pick2;
	do
	{
		cout << "Chon chuc nang: ";
        cin >> pick2;
       	cout << endl;
        switch(pick2)
        {
        	case 1:
        	
				int n;
				cout<<"Nhap so khach hang: ";
				cin>>n;
				for(int i=0;i<n;i++)
					{  	
						cin.ignore();
						cout << "Nhap thong tin khach hang thu  "<<i+1<<endl;
            			cout << "Nhap ma: "; cin>>code;
            			cin.ignore();
            			cout << "Nhap ten: "; getline(cin,name);
            			cout << "Nhap dia chi: "; cin >> address;
            			cout << "Nhap sdt: "; cin >> phone;
            			cout << "Nhap tich diem:"; cin >> point;
            			cout<<endl;
            			list1.insertcustomer(new customer(code, name, address, phone,point));            			
					}
			break;
			
			case 2:
				cin.ignore();
                cout << "Nhap ma khach hang can xoa: "; cin>>code;
                list1.deletecustomer(code);
                cout << "Thong tin cua khach hang: " << endl;
                list1.printList();
                break;
            case 3:
            	cin.ignore();
                cout << "Nhap ma khach hang can sua: "; getline(cin, oldcode);
                e1 = list1.search(oldcode);
                if(e1 == NULL)
                {
                    cout << "Khong co khach hang co ma " << oldcode;
                    break;
                }
                else
                {
                    cout << "Thong tin cu cua khach hang: ";
                    e1->printInfo();
                    cout << "Nhap ma moi: "; cin >> code;
                    cin.ignore();
                    cout << "Nhap ten moi: "; getline(cin,name);
                    cout << "Nhap dia chi moi: "; cin >> address;
                    cout << "Nhap sdt moi: "; cin >> phone;
                    cout << "Nhap cham cong moi:"; cin >> point;
                    e1->setCode(newcode);
                    e1->setName(name);
                    e1->setAddress(address);
                    e1->setPhone(phone);
                    e1->setPoint(point);
                }
                break;
                
			case 4:
                cout << "Thong tin cua khach hang:" << endl;
                list1.printList();
                break;
			break;
			
			case 5:
                cout << "Nhap ma khach hang can tim:"; cin>>code;
                e1 = list1.search(code);
                if(e1 == NULL)
				cout << "Khong co khach hang nao co ma " << code<<endl;
                else
                {
                    cout << "Thong tin tim thay ve khach hang:";
                    e1->printInfo();
                }
                break;
			case 6:
                break;
            default:
                cout << "Nhap sai, hay nhap lai!"<<endl;
		}
	}
	while(pick2!=6);
}
		
	if (pick==3)
	{
				cout << "1 - Them san pham" << endl;
    			cout << "2 - Sua san pham" << endl;
    			cout << "3 - In ra thong tin toan bo san pham" << endl;
    			cout << "4 - Tim kiem san pham" << endl;
   				cout << "5 - Thoat" << endl;

	int pick3;
	do
	{
		cout << "Chon chuc nang: ";
        cin >> pick3;
       	cout << endl;
        switch(pick3)
        {
        	case 1:
        	
				int n;
				cout<<"Nhap so san pham: ";
				cin>>n;
				for(int i=0;i<n;i++)
					{  	
						cin.ignore();
						cout << "Nhap thong tin san pham  "<<i+1<<endl;
            			cout << "Nhap ma: "; cin>>code;
            			cin.ignore();
            			cout << "Nhap ten: "; getline(cin,name);
            			cout << "Nhap don gia: "; cin >> cost;
            			cout << "Nhap so luong:"; cin >> num;
            			cout<<endl;
            			list2.insertproduct(new product(code, name, cost, num));            			
					}
			break;
			
            case 2:
            	cin.ignore();
                cout << "Nhap ma san pham can sua: "; getline(cin, oldcode);
                e2 = list2.search(oldcode);
                if(e2 == NULL)
                {
                    cout << "Khong co san pham co ma " << oldcode;
                    break;
                }
                else
                {
                    cout << "Thong tin cu cua khach hang: ";
                    e2->printInfo();
                    cout << "Nhap ma moi: "; cin >> newcode;
                    cin.ignore();
                    cout << "Nhap ten moi: "; getline(cin,name);
                    cout << "Nhap don gia moi: "; cin >> cost;
                    cout << "Nhap so luon moi: "; cin >> num;
                    e2->setCode(newcode);
                    e2->setName(name);
                    e2->setCost(cost);
                    e2->setNum(num);
                }
                break;
                
			case 3:
                cout << "Thong tin cua san pham:" << endl;
                list2.printList();
                break;
			break;
			
			case 4:
                cout << "Nhap ma san pham can tim:"; cin>>code;
                e2 = list2.search(code);
                if(e2 == NULL)
				cout << "Khong co san pham nao co ma " << code<<endl;
                else
                {
                    cout << "Thong tin tim thay ve san pham:";
                    e2->printInfo();
                }
                break;
			case 5:
                break;
            default:
                cout << "Nhap sai, hay nhap lai!"<<endl;
						
		}
	}
	while(pick3!=5);
}


if (pick==4)
	{
				cout << "1 - Them hoa don" << endl;
    			cout << "2 - In ra thong tin toan bo hoa don" << endl;
   				cout << "3 - Thoat" << endl;
   				
   	int pick4;
	do
	{
		cout << "Chon chuc nang: ";
        cin >> pick4;
       	cout << endl;
        switch(pick4)
        {
        	case 1:
        		 cout << "Nhap so hoa don: ";
 				cin >>n;
   				for (int i=0; i<n; i++)
  	{
  	cout << "Ma hoa don :" ; cin>> new_data.code;
    cout << "Ngay thang: " ; cin>> new_data.date;
    cout << "Ma nhan vien thanh toan:" ; cin>> new_data.staffcode;
    cout << "Ma khach hang: " ; cin>> new_data.customercode;
    cout<<  "So luong san pham: "; cin>>new_data.num;
    c= new_data.num *2;
    nhapsp(a,i,c);
    data_list.AddValue(new_data);
	}
			case 2:				
				data_list.Show();
			case 3:
				break;
    }
}
    while(pick4!=3);
}
    if (pick==5) exit(0);  		
}
    while(true);		

	return 0;
}
