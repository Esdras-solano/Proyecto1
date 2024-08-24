#include "Rooms.h"

Rooms::Rooms(): roomNumber(0), numberSeats(0), price(0)
{
}

Rooms::Rooms(int _roomNumber, int _numberSeats, int _price)
{
	this->roomNumber = _roomNumber;
	this->numberSeats = _numberSeats;
	this->price = _price;
}

void Rooms::setRoomNumber(int mRoomNumber)
{
	roomNumber = mRoomNumber;
}

void Rooms::setNumberOfSeat(int mNumberSeats)
{
	numberSeats = mNumberSeats;
}

void Rooms::setPrice(int mPrice)
{
	price = mPrice;
}

int Rooms::getRoomNumber()
{
	return roomNumber;
}

int Rooms::getNumberSeats()
{
	return numberSeats;
}

int Rooms::getPrice()
{
	return price;
}
