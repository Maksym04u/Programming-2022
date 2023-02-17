#include<iostream>
#include<string>
using namespace std;

class Product {
private:
	string name;
	int price;
	int code;
public:
	Product() : name(""), price(0), code(1) {}
	Product(string A, int B, int C) : name(A), price(B), code(C) {}
	friend istream& operator>>(istream& is, Product& data) {
		is >> data.name >> data.price >> data.code;
		return is;
	}
	friend ostream& operator<<(ostream& os, Product& data1) {
		os << data1.name << "\t" << data1.price << "\t" << data1.code;
		return os;
	}
	bool operator!=(Product& object) {
		return not (name == object.name and price == object.price and code == code);
	};
	int Get_price() {
		return price;
	}
};


class Cart {
private:
	Product* products = new Product[100];
	int total_price;
	int* counts;
	int current;
public:
	Cart() : current(0), total_price(0) { products = new Product[100]; counts = new int[100]; };

	void addProduct(Product item, int count) {
		products[current] = item;
		counts[current] = count;
		total_price += item.Get_price() * count;
		current++;
	};
	void delProduct(Product item, int quantity) {
		int i = 0;
		for (i; products[i] != item; i++) {
			if (i > sizeof(products) / sizeof(products[0])) {
				cout << "There is no such product." << endl;
				break;
			}
		}
		if (counts[i] == quantity) {
			for (i; i < current; i++) {
				products[i] = products[i + 1];
			}
			total_price -= item.Get_price() * quantity;
		}
		else {
			counts[i] -= quantity;
			total_price -= item.Get_price() * quantity;
		}
	};
	void show_cart() {
		for (int i = 0; i != current; i++) {
			cout << products[i] << endl;
		}
	}
	void final_price() {
		cout << total_price << endl;
	}

};

int main() {
	Cart cart;
	bool flag = true;
	while (flag) {
		cout << "Choose action:" << endl;
		cout << "buy   " << "delete   " << "show   " << "price   " << "finish" << endl;
		string command;
		cin >> command;
		if (command == "buy") {
			cout << "Enter product name" << endl;
			string name;
			cin >> name;
			cout << "Enter product price" << endl;
			int price;
			cin >> price;
			cout << "Enter product code" << endl;
			int code;
			cin >> code;
			Product temp(name, price, code);
			cout << "Enter quantity" << endl;
			int n;
			cin >> n;
			cart.addProduct(temp, n);

			continue;
		};
		if (command == "delete") {
			cout << "Enter product name" << endl;
			string name;
			cin >> name;
			cout << "Enter product price" << endl;
			int price;
			cin >> price;
			cout << "Enter product code" << endl;
			int code;
			cin >> code;
			Product temp(name, price, code);
			cout << "Enter quantity" << endl;
			int n;
			cin >> n;
			cart.delProduct(temp, n);
			continue;
		};
		if (command == "show") {
			cart.show_cart();
			continue;
		};
		if (command == "price") {
			cart.final_price();
			continue;
		};
		if (command == "finish") {
			break;
		};

		return 0;
	};
}

