#include <iostream>

struct adress
{
	std::string city;
	std::string street;
	int house;
	int apartment;
	int index;
};
void adress1(adress& a)
{
	a.city = "Москва";
	a.street = "Арбат";
	a.house = 12;
	a.apartment = 8;
	a.index = 123456;

}
void adress2(adress& a)
{
	a.city = "Ижевск";
	a.street = "Пушкина";
	a.house = 59;
	a.apartment = 143;
	a.index = 953769;
}
void print_adress(adress& a)
{
	std::cout << "Город: " << a.city << std::endl;
	std::cout << "Улица: " << a.street << std::endl;
	std::cout << "Номер дома: " << a.house << std::endl;
	std::cout << "Номер квартиры: " << a.apartment << std::endl;
	std::cout << "Индекс: " << a.index << std::endl;
	std::cout << std::endl;
}
	int main() {

		setlocale(LC_ALL, "Russian");
		adress a1, a2;
		adress1(a1);
		print_adress(a1);
		adress2(a2);
		print_adress(a2);
		return 0;
	}