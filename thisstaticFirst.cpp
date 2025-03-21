#include<iostream>
using namespace std;

class Player {
	static int player_id;
	char player_name[20];
	int runs;
	int wicket_taken;
	int innings_played;

public:
	Player();
	Player(char *name, int runs, int wicket_taken, int innings_played);
	void display();
};
int Player::player_id = 100;
Player::Player() {
	player_id++;
	strcpy(this->player_name,"NA");
	this->runs = 0;
	this->wicket_taken = 0;
	this->innings_played = 0;
}
Player::Player(char *name,int runs,int wicket_taken,int innings_played) {
	player_id++;
	strcpy(player_name, name);
	this->runs = runs;
	this->wicket_taken = wicket_taken;
	this->innings_played = innings_played;
}

void Player::display() {
	cout << Player::player_id << endl;
	cout << this->player_name << endl;
	cout << this->runs << endl;
	cout << this->wicket_taken << endl;
	cout << this->innings_played << endl;
}

int main() {

	Player p1;
	p1.display();

	cout << endl;

	char* name = new char[100];
	strcpy(name, "ASDF");

	Player p2(name, 100, 40, 268);
	p2.display();

}