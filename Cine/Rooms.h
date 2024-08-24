#pragma once
#include <iostream>
class Rooms
{
private:
	int roomNumber;
	int numberSeats;
	int price;

public:
	Rooms();
	Rooms(int _roomNumber, int _numberSeats, int _price);
	void setRoomNumber(int mRoomNumber);
	void setNumberOfSeat(int mNumberSeats);
	void setPrice(int mPrice);

	int getRoomNumber();
	int getNumberSeats();
	int getPrice();
};

