#pragma once
#include <iostream>
class Rooms
{
private:
	int roomNumber;
	int price;
	int rows;         
	int cols;
	int** seatMatrix;
public:
	Rooms();
	void createRooms(int _roomNumber, int _price, int _rows, int _cols);
	~Rooms();
	void setRoomNumber(int _RoomNumber);
	void setPrice(int _Price);


	int getRoomNumber();
	int getNumberOfSeats();
	int getPrice();
	int getRows();
	int getCols();

	void showMatrixSeats();
	void reserveSeatMatrix(int &positionRows, int &positioCols);
	
};

