// Greg Tarr | gatarr@dmacc.edu | C++ Text Adventure
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Room
{
private:

	//Class Variables
	string roomName;
	int numEnemies;
	int numItems;


public:
	//Getters and Setters
	void setRoomName(string n) { roomName = n; }
	string getRoomName() { return roomName; }

	void setNumEnemies(int e) { numEnemies = e; }
	int getNumEnemies() { return numEnemies; }

	void setNumItems(int i) { numItems = i; }
	int genNumItems() { return numItems; }

	//Member Functions
	void descRoom()
	{
		cout << roomName << " - " << numEnemies
			<< " Enemies & " << numItems << " Items." << endl;
	}

};

//int main()
//{
//	Room test1;
//	test1.setRoomName("Classroom");
//	test1.setNumEnemies(0);
//	test1.setNumItems(2);
//
//	Room test2;
//	test2.setRoomName("Hallway");
//	test2.setNumEnemies(1);
//	test2.setNumItems(1);
//
//	test1.descRoom();
//
//	test2.descRoom();
//    
//	return 0;
//}
