#pragma once
#include <iostream>
#include <conio.h>
 #include <string.h>
 using namespace std;

static string a[50][50];

void nhapsp(string a[50][50],int i, int n)
{
 //	static string a[50][50];
		for (int j=0;j<n;j++)
		{
			
		if (j%2==0)	
		{	
		cout << "Nhap masp: " ; cin >> a[i][j];
		}
		else 
		{
			cout << "Nhap so luong: " ;
			cin >> a[i][j];		
		}
	}
}
void insp(string a[50][50], int i, int n)
{
	 for (int j=0; j<n ; j++)
	 {
	 	if (j%2==0)	
		{	
		cout << "Masp: " ; cout << a[i][j]<<endl;
		}
		else 
		{
			cout << "So luong: ";
			cout << a[i][j] << endl;	
		}
	 }
}



struct Client
 {
     int num;
     int pointbill;
    string code; 
    string date;
    string staffcode;
    string customercode;  
 };
class PTLinkedList
{
    struct Node    // Khai báo 1 cấu trúc dữ liệu cho 1 node
    {
        Client data_;
        Node* p_next_;
    };
 
public:
    PTLinkedList() { p_head_ = NULL; }
    ~PTLinkedList()
    {
        Node* head = p_head_;
        while (head)
        {
            Node* temp = head;
            head = head->p_next_;
            delete temp;
            temp = NULL;
        }
    }
 
    void AddValue(Client val)  // Thêm 1 phần tử mới vào đầu danh sách
    {
        Node* new_node = new Node();
        new_node->data_ = val;
        new_node->p_next_ = p_head_;
        p_head_ = new_node;
    }
    void Remove()  // Loại bỏ phần từ đầu danh sách
    {
        if (p_head_ != NULL)
        {
            Node* temp = p_head_;
            p_head_ = p_head_->p_next_;
            delete temp;
        }
    }
    
    void Show()  // Viết thêm một hàm hiển thị
    {
        Node* temp = p_head_;
        while (temp != NULL)
        {
        //	string a[50][50];
        	int i=0;
        	int n;
            string showcode = temp->data_.code;
            string showdate = temp->data_.date;
            string showstaffcode = temp->data_.staffcode;
            string showcustomercode = temp->data_.customercode;           
            int shownum = temp->data_.num;
            n=shownum *2;
            cout << endl;
            cout << "Ma hoa don :" << showcode << endl;
            cout << "Ngay thang: " << showdate <<endl;
            cout << "Ma nhan vien thanh toan:" << showstaffcode<<endl;
            cout << "Ma khach hang: " << showcustomercode << endl;
            insp(a,i,n);     
            cout << endl;
            temp = temp->p_next_;
            i=i++;
        }
    }
private:
    Node* p_head_;   // Luôn có 1 con trỏ pHead quản lý phần tử đầu.
};




/*int main()
{
	int n;
	int c;
	 Client new_data;
    PTLinkedList data_list;
    //cout<<"Nhập dữ liệu khách hàng: "<<endl;
 //   nhapsp(a,0,2);
  //  insp(a,0,2);
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
    data_list.Show();
    
 
   // data_list.Remove();
 
   // std::cout << std::endl;
   // data_list.Show();
 

    return 0;
}*/
