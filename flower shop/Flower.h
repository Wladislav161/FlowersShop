#pragma once
#include<string>
#include<iostream>

using namespace std;

class FlowerShop
{
public:

	virtual string Humidity() = 0;
	virtual string Temperature() = 0;
	virtual string Shine() = 0;


};
class Shipovnik :public FlowerShop
{
public:

	virtual string Humidity() = 0;
	virtual string Temperature() = 0;
	virtual string Shine() = 0;

	string Name;
	int Prace;

	Shipovnik() {
		cout << "�������� ����� ��� ��� �� ������" << endl;


	}

};
class Tulips :public FlowerShop
{
public:

	virtual string Humidity() = 0;
	virtual string Temperature() = 0;
	virtual string Shine() = 0;

	string Name;
	int Prace;

	Tulips()
	{
		cout << "�������� ��� ��������� ������� �� ������" << endl;
	}

};
class Anemone :public FlowerShop
{

	virtual string Humidity() = 0;
	virtual string Temperature() = 0;
	virtual string Shine() = 0;

	string name;
	int Prace;
	Anemone(string name)
	{
		name = name;
		cout << "����� �������  �� ������?" << endl;
		cin >> name;

	}

};


class Begonia :public FlowerShop
{

	virtual string Humidity() = 0;
	virtual string Temperature() = 0;
	virtual string Shine() = 0;

	string name;
	int Prace;
	Begonia(string name)
	{
		name = name;
		cout << "����� �������  �� ������?" << endl;
		cin >> name;

	}
};