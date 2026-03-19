#include <iostream>
#include <string>

/*int main() {
	setlocale(LC_ALL, "");
	int num1[5] = { 1, 2, 8, 4, 5 };
	int num2[5] = { 3, 2, 5, 9, 1 };
	int num3[10];
	int i = 0;
	while (i < 5) {
		num3[i] = num1[i];
		std::cout << num3[i] << std::endl;
		i++;
	}	
	while (i < 10) {
		num3[i] = num2[i - 5];
		std::cout << num3[i] << std::endl;
		i++;
	}
	int t;
	for (int a = 1; a < 10; a++) {
		for (int b = 9; b >= a; b--) {
			if (num3[b - 1] > num3[b]) {
				t = num3[b - 1];
				num3[b - 1] = num3[b];
				num3[b] = t;
			}
		}
	}
	for (t = 0; t < 10; t++) std::cout << num3[t] << ' ';
}*/

//2 задание

int main() {
	setlocale(LC_ALL, "ru");
	std::string str = "some text in here";
	int i = 0;
	int count = 0;
	int min = 100;
	int c = 0;
	while (i < str.length()) {
		while (str[i] != ' ' && i < str.length()) {
			count++;
			i++;
		}
		
		if (count < min && count != 0) {
			min = count;
		}
		count = 0;
		i++;
	}
	//std::cout << min;
	i = 0;
	while (i < str.length()) {
		while (str[i] != ' ' && i < str.length()) {
			count++;
			i++;
		}
		if (count == min) {
			c++;
		}
		count = 0;
		i++;
	}
		std::cout << "Количество слов с минимальной длиной: " << c;
}