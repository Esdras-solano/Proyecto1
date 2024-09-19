#include "Rooms.h"

Rooms::Rooms()
{
	roomNumber = 0;
	price = 0;
	rows = 0;
	cols = 0;
	seatMatrix = nullptr;

}

void Rooms::createRooms(int _roomNumber, int _price, int _rows, int _cols)
{
	this->roomNumber = _roomNumber;
	this->price = _price;
	this->rows = _rows;
	this->cols = _cols;
	std::cout << rows << " " << cols << std::endl;

	seatMatrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		seatMatrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			seatMatrix[i][j] = 0;
		}
	}
}

Rooms::~Rooms()
{
	for (int i = 0; i < rows; i++) {
		delete[] seatMatrix[i];
	}
	delete[] seatMatrix;
}

void Rooms::setRoomNumber(int mRoomNumber)
{
	roomNumber = mRoomNumber;
}

void Rooms::setPrice(int mPrice)
{
	price = mPrice;
}

int Rooms::getRoomNumber()
{
	return roomNumber;
}

int Rooms::getNumberOfSeats()
{
	return rows * cols;
}

int Rooms::getPrice()
{
	return price;
}

int Rooms::getRows()
{
	return rows;
}

int Rooms::getCols()
{
	return cols;
}

void Rooms::showMatrixSeats()
{

	if (seatMatrix == nullptr) {
		std::cout << "Es nulo";
	}
	else
	{
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << seatMatrix[i][j];
			}
			std::cout << std::endl;
		}
	}
	system("pause");
}

void Rooms::reserveSeatMatrix(int &positionRows, int &positioCols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			seatMatrix[positionRows][positioCols] = 1 ;
		}
	}

}




