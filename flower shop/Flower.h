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
		cout << "выберите какой вид роз вы хотите" << endl;


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
		cout << "выберите вид тюльпанов которые вы хотите" << endl;
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
		cout << "какие Анемоны  вы хотите?" << endl;
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
		cout << "какие Бегонии  вы хотите?" << endl;
		cin >> name;

	}
};