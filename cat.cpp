#include <iostream>
using namespace std;

class Cat { // робимо котика на С++
public:
	// властивостi (поля класу, змiннi класу)
	double tail_length = 0.5; // м
	int ears_count = 2;
	string fur_color = "white";
	string nick = "Snizhok";
	string eyes_color = "blue";
	// ...

	// поведiнка (методи класу, функцii класу)
	void MakeNoize() {
		cout << "MEOW!\n";
	}

	void Walk() {
		cout << "котик ходить!\n";
	}

	void Eat(string meal) {
		cout << "котик їсть " << meal << "\n";
	}
};

class Human {
public:
	double height = 1.72; // M
	int arms_count = 2;
	int legs_count = 2;
	string hair_color = "pink";
	string eyes_colour = "blue";

	void Talk() {
		cout << "Hi\n";
	}
	void sleap() {
		cout << "zzzz\n";
	}
	void work() {
		cout << "working";
	}
	void cook() {
		cout << "cooking omlet";
	}
	void eat() {
		cout << "eat omlet";
	}
};

class Room {
public:
	double square = 32;// m^2
	int bed = 2;
	string wall_colour = "black";
	int windows = 3;
	int table = 1;

	void rest() {
		cout << "sleep";
	}

	void party() {
		cout << "dance";
	}

	void play_PC() {
		cout << "";
	}

	void turnLight_off() {
		cout << "darkness";
	}

	void jump() {
		cout << " window is open";
	}
};

class Phone {
public:
	int screen_diagonal = 12;
	int weight = 0.5;
	string colour = "grey";
	int button_onoff = 1;
	int volume_button = 2;

	void Call() {
		cout << "call someone";
	}

	void Surf_internet() {
		cout << "nothig interesting";
	}

	void TikTok() {
		cout << "just kill the time";
	}

	void Games() {
		cout << "same to TikTok";
	}

	void Telegram() {
		cout << "communicate";
	}
};

class Table {
public:
	double height = 1.50;//m
	double lenght = 3.50;//m
	string colour = "yellow";
	double weight = 70;//kg
	int pc_on_table = 1;

	void play_pc() {
		cout << "";
	}

	void remove() {
		cout << "remove usless things";
	}

	void move() {
		cout << "move to the right";
	}

	void Break() {
		cout << "brek the table";
	}

	void repair() {
		cout << "repair the broken table";
	}
};

class Printerr {
public:
	string form = "square";
	string colour = "gray";
	int stickers_count = 14;
	int cables_count = 2;
	int papers_in_printer = 0;

	void print() {
		cout << "printing...";
	}

	void scan() {
		cout << "scaning documents";
	}

	void jam() {
		cout << "prnter jammed the paper";
	}

	void sit() {
		cout << "cat sit on printer";
	}

	void error() {
		cout << "printer is broken";
	}
};
int main()
{

}