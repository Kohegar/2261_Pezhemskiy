// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

class box {
private:
	double length;
	double width;
	double height;

public:
	box(double _length, double _width, double _height) :
		length(_length), width(_width), height(_height) {
	}

	double volume() const {
		return length * width * height;
	}

	double surface() const {
		return 2 * (length * width + length * height + width * height);
	}
};

int main() {
	box a(10, 6, 3);
	std::cout << "Size of box: " << sizeof(a) << std::endl;
	std::cout << "V (a): " << a.volume() << std::endl;
	std::cout << "S (a): " << a.surface() << std::endl;

	std::cout << "-------------------" << std::endl;

	box *x = new box(10, 6, 3);
	box *y = new box(8, 6, 8);

	if (y->volume() > x->volume()) {
		std::cout << "Volume y greater than volume x" << std::endl;
	}
	else if (x->volume() > y->volume()) {
		std::cout << "Volume x greater than volume y" << std::endl;
	}
	else {
		std::cout << "Volumes are equal" << std::endl;
	}
	delete x;
	delete y;
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
