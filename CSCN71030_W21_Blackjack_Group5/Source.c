//CSCN71030 - Project II 
//
//Group 5




#include "Player.h"
#include "fileIO.h"
#include "GUI.h"

int main(int argc, char** argv) {

	pPLAYERLIST playerList = initializePlayerList();	//Creates, inisitalizes, and reads from the file and returns a playerList

	read(playerList);

	pPLAYER player = selectPlayerMenu(argv, playerList);	//Selects the player from the list either through the menu or through the command line argument

	while (1) {

		mainMenu(playerList, player);

	}



	return 0;
}
