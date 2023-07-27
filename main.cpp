#include <iostream>
struct Address{
    std::string city;
    std::string street;
    int number_of_house{};
    int number_of_flat{};
    int index{};
};

void output(Address &address){
    std::cout << "Город: " << address.city << "\n" <<
        "Улица: " << address.street << "\n" <<
        "Номер дома: " << address.number_of_house << "\n" <<
        "Номер квартиры: " << address.number_of_flat << "\n" <<
        "Индекс: " << address.index << "\n" << "\n";
}

int main() {
    Address address1{"Москва", "Арбат", 12, 8, 123456};
    Address address2{"Ижевск", "Пушкина", 59, 143, 953769};

    output(address1);
    output(address2);
    return 0;
}
