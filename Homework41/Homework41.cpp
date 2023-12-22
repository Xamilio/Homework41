#include <iostream>
using namespace std;

//1
//class Contact
//{
//	int HomeNumber;
//	int WorkNumber;
//	int OwnNumber;
//	char* Name;
//	char* LastName;
//	char* SurName;
//public:
//	Contact()
//	{
//		Name = nullptr;
//		LastName = nullptr;
//		SurName = nullptr;
//		HomeNumber = 0;
//		WorkNumber = 0;
//		OwnNumber = 0;
//	}
//	Contact(const Contact& copy)
//	{
//		SetFIO(copy.Name, copy.LastName, copy.SurName);
//		SetNum(copy.HomeNumber, copy.WorkNumber, copy.OwnNumber);
//	}
//	Contact(int homen, int workn, int ownn)
//	{
//		SetNum(homen, workn, ownn);
//	}
//	Contact(const char* name, const char* lastname, const char* surname) : Contact(0, 0, 0)
//	{
//		SetFIO(name, lastname, surname);
//	}
//	Contact(const char* name, const char* lastname, const char* surname, int homen, int workn, int ownn) : Contact(name, lastname, surname)
//	{
//		SetFIO(name, lastname, surname);
//		SetNum(homen, workn, ownn);
//	}
//	inline void SetNum(int homen, int workn, int ownn)
//	{
//		if (homen < 0)
//		{
//			cout << "Error";
//		}
//		else
//		{
//			HomeNumber = homen;
//		}
//
//		if (workn < 0)
//		{
//			cout << "Error";
//		}
//		else
//		{
//			WorkNumber = workn;
//		}
//		if (ownn < 0)
//		{
//			cout << "Error";
//		}
//		else
//		{
//			OwnNumber = ownn;
//		}
//	}
//	inline void SetFIO(const char* name, const char* lastname, const char* surname)
//	{
//		if (Name == nullptr)
//		{
//			delete[] Name;
//		}
//		Name = new char[strlen(name) + 1];
//		strcpy_s(Name, strlen(name) + 1, name);
//		if (LastName == nullptr)
//		{
//			delete[] LastName;
//		}
//		LastName = new char[strlen(lastname) + 1];
//		strcpy_s(LastName, strlen(lastname) + 1, lastname);
//		if (SurName == nullptr)
//		{
//			delete[] SurName;
//		}
//		SurName = new char[strlen(surname) + 1];
//		strcpy_s(SurName, strlen(surname) + 1, surname);
//	}
//	void OutPut()
//	{
//		cout << "\nФИО: ";
//		if (LastName == nullptr) cout << " ";
//		else cout << LastName << " ";
//
//		if (Name == nullptr) cout << " ";
//		else cout << Name << " ";
//
//		if (SurName == nullptr) cout << " ";
//		else cout << SurName << " " << endl;
//
//		cout << "Домашний номер: " << HomeNumber << endl;
//		cout << "Рабочий номер: " << WorkNumber << endl;
//		cout << "Личный номер: " << OwnNumber << endl;
//	}
//
//
//	~Contact()
//	{
//		if (Name == nullptr)
//		{
//			delete[] Name;
//		}
//		if (LastName == nullptr)
//		{
//			delete[] LastName;
//		}
//		if (SurName == nullptr)
//		{
//			delete[] SurName;
//		}
//	}
//};
//
//
//Contact* Add(Contact* list, int size, Contact contact)
//{
//	Contact* result = new Contact[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		result[i] = list[i];
//	}
//	result[size] = contact;
//	delete[] list;
//	return result;
//}
//
//Contact* Delete(Contact* list, int size, int pos)
//{
//	if (pos < 0 || pos >= size)
//	{
//		cout << "Error";
//		return list;
//	}
//	Contact* result = new Contact[size - 1];
//	for (int i = 0; i < pos; i++)
//	{
//		result[i] = list[i];
//	}
//	for (int i = pos; i < size - 1; i++)
//	{
//		result[i] = list[i + 1];
//	}
//	delete[] list;
//	return result;
//}
//void Print(Contact* list, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		list[i].OutPut();
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int homen;
//	int workn;
//	int ownn;
//	int size = 0;
//	char name[100];
//	char lastname[100];
//	char surname[100];
//	cout << "Введите Номера телефона" << endl;
//	cout << "Домашный: ";
//	cin >> homen;
//	cout << "Рабочий: ";
//	cin >> workn;
//	cout << "Личный: ";
//	cin >> ownn;
//	cout << "ФИО" << endl;
//	cout << "Фамилия: ";
//	cin >> lastname;
//	cout << "Имя: ";
//	cin >> name;
//	cout << "Отчество: ";
//	cin >> surname;
//	Contact* mas = new Contact[size];
//	Contact obj(name, lastname, surname, homen, workn, ownn);
//	mas = Add(mas, size, obj);
//	size++;
//	Contact obj1(name, lastname, surname, homen, workn, ownn);
//	mas = Add(mas, size, obj);
//	size++;
//	Contact obj2(name, lastname, surname, homen, workn, ownn);
//	mas = Add(mas, size, obj);
//	size++;
//	Print(mas, size);
//	mas = Delete(mas, size, 0);
//	size--;
//	Print(mas, size);
//	Contact obj3(obj2);
//	obj3.OutPut();
//	obj.~Contact();
//	obj1.~Contact();
//	obj2.~Contact();
//	obj3.~Contact();
//	delete[] mas;
//}




//2
//class MyString
//{
//	int size;
//	char* str;
//
//public:
//	static int count;
//	MyString()
//	{
//		Clear();
//		this->str = new char[80];
//		this->size = 80;
//		count++;
//	}
//	MyString(const MyString &r)
//	{
//		Clear();
//		SetStr(r.str);
//		count++;
//	}
//	MyString(int size)
//	{
//		Clear();
//		this->str = new char[size + 1];
//		this->size = size;
//		count++;
//	}
//	MyString(const char* str)
//	{
//		SetStr(str);
//		count++;
//	}
//	~MyString()
//	{
//		Clear();
//		count--;
//	}
//	void SetStr(const char* str)
//	{
//		Clear();
//		int length = strlen(str);
//		this->str = new char[length + 1];
//		this->size = length;
//		for (int i = 0; i <= length; i++)
//		{
//			this->str[i] = str[i];
//		}
//	}
//	void Clear()
//	{
//		if (str != nullptr)
//		{
//			delete[] str;
//		}
//	}
//	void Print()
//	{
//		cout << str << endl;
//	}
//	static int GetCount()
//	{
//		return count;
//	}
//	void Read(const char* mesagge)
//	{
//		char mas[250];
//		cout << mesagge << ": ";
//		cin.getline(mas, 250);
//		SetStr(mas);
//	}
//};
//
//int MyString::count = 0;
//
//int main()
//{
//	MyString str1;
//	str1.Read("Введите 1 строку");
//	str1.Print();
//	MyString str2(200);
//	MyString str3("This is thirt string");
//	MyString str4(str3);
//	cout << str1.GetCount() << endl;
//	cout << str2.GetCount() << endl;
//	cout << str3.GetCount() << endl;
//	str3.Print();
//	str4.Print();
//}