#include <stdio.h>
#include <stdlib.h>



int SnakePitRoom()
{
	printf("\nYou enter the room to find the floor covered in a layer\n"
			"of hundreds of venomous snakes. What do you do?\n\n"
			"1) Run across them frantically screaming and crying\n"
			"2) Cower in the doorway\n");

	int SnakeAnswer;
	scanf("%i", &SnakeAnswer);

	if(SnakeAnswer == 1){
		printf("\nYou run across their backs and crush them all while managing\n"
				"not to get bitten. You made it to the next door safely.\n"
				"You enter to find the room filled with gold.\n"
				"You found your treasure.\n"
				"YOU WIN!\n");
		exit(0);
	}
	else{
		printf("\nWell what did you expect to happen?\n"
				"You have nowhere to go, and the snakes kill you.\n"
				"Try to be a little more brave next time.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int TaylorSwiftRoom()
{
	printf("\nYou walk through the door to find Taylor Swift performing\n"
			"her latest hit to an empty room. What do you say to her?\n\n"
			"1) Lie and tell her you're her #1 fan\n"
			"2) Ask her if she'd like to date you\n");

	int TaylorAnswer;
	scanf("%i", &TaylorAnswer);

	if(TaylorAnswer == 1){
		printf("\nTaylor is very happy to hear your compliment.\n"
				"She doesn't get too many of those anymore.\n"
				"She gives you her autograph along with a key\n"
				"to the next room.\n");
		SnakePitRoom();
	}
	else{
		printf("\nTaylor gratiously accepts your offer but then dumps you\n"
				"after 10 minutes just like all her other boyfriends.\n"
				"Looks like you lose this time.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int LionRoom()
{
	printf("\nYou enter the next room to find what else but a\n"
			"massive lion sleeping on the floor as he keeps guard.\n"
			"What do you do?\n\n"
			"1) Quietly tiptoe past him and hope he doesn't wake up\n"
			"2) Throw some juicy meat into the corner to avert his attention\n");

	int LionAnswer;
	scanf("%i", &LionAnswer);

	if(LionAnswer == 1){
		printf("\nYou slipped past without making a sound. How stealthy of you.\n"
				"Nice job. You go through the next doorway.\n");
		SnakePitRoom();
	}
	else{
		printf("\nYou startled the lion out of his sleep and he has you\n"
				"for an appetizer before he eats that juicy meat you gave him.\n"
				"Looks like that one didn't pan out, did it.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int JabbaTheHutRoom()
{
	printf("\nYou walk into a room and what do you see but Jabba the Hut\n"
			"basking in his filth over in the corner.\n"
			"What do you do?\n\n"
			"1) Give him some food\n"
			"2) Flatter him--you hear it goes a long way\n"
			"3) Steal his newest slave for yourself\n");

	int JabbaAnswer;
	scanf("%i", &JabbaAnswer);

	if(JabbaAnswer == 1){
		printf("\nJabba is so busy stuffing his face, you are able to walk\n"
				"right past him into the adjoining room. Nice thinking.\n");
		TaylorSwiftRoom();
	}
	else if(JabbaAnswer == 2){
		printf("\nJabba is so flattered by your compliments he tells his\n"
				"minion to escort you to the next room. Upon entering,\n"
				"you see that it is filled with gold.\n"
				"You found your treasure.\n"
				"YOU WIN!");
		exit(0);
	}
	else{
		printf("\nIn a rage, Jabba sits on you and crushes you into a pulp.\n"
				"Better luck next time.\n"
				"GAME OVER.");
		exit(0);
	}

	return 0;
}



int CupcakeMonsterRoom()
{
	printf("\nYou enter the next room to find a giant cupcake monster\n"
			"blocking your way. What do you do?\n\n"
			"1) Smash him up into a big pile of mush\n"
			"2) Use his own candle to light him on fire\n"
			"3) Eat him\n");

	int CupcakeAnswer;
	scanf("%i", &CupcakeAnswer);

	if(CupcakeAnswer == 1){
		printf("\nThe cupcake monster is nothing but a messy glob on\n"
				"the floor now. Well done. You move on.\n");
		LionRoom();
	}
	else if(CupcakeAnswer == 2){
		printf("\nClever move. The cupcake monster goes up in smoke\n"
				"and you're free to go through the next doorway.\n"
				"You enter the room to find it filled with gold.\n"
				"You found your treasure.\n"
				"YOU WIN!\n");
		exit(0);
	}
	else{
		printf("\nLooks like this cupcake was a poisonous one.\n"
				"Your gluttony causes you a slow and painful death.\n"
				"Try to control your appetite next time.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int GoblinRoom()
{
	printf("\nYou enter a room full of a hundred little goblins.\n"
			"What do you do?\n\n"
			"1) Stomp on them\n"
			"2) Run from them\n");

	int GoblinAnswer;
	scanf("%i", &GoblinAnswer);

	if(GoblinAnswer == 1){
		printf("\nYou stomped all those little goblins into the ground.\n"
				"They're all dead now. Nice job. You get to move on.\n");
		JabbaTheHutRoom();
	}
	else{
		printf("\nYou try to outrun them, but their little legs are\n"
				"deceptively fast. They catch you and gobble you up.\n"
				"Run faster next time.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int FireRoom()
{
	printf("\nYou enter a room where the floor is ablaze with fire.\n"
			"What do you do?\n\n"
			"1) Use a bullwhip to swing across the room from the rafters\n"
			"2) Run through the fire quickly to avoid burns\n");

	int FireAnswer;
	scanf("%i", &FireAnswer);

	if(FireAnswer == 1){
		printf("\nThe bullwhip was just barely long enough to get you to the\n"
				"other side. You made it to the next doorway. Nice work.\n");
		CupcakeMonsterRoom();
	}
	else{
		printf("\nLooks like your slow self wasn't fast enough.\n"
				"You were burnt to a crisp. That's too bad.\n"
				"GAME OVER.\n");
		exit(0);
	}

	return 0;
}



int main(void)
{
	printf("\nOn a quest for hidden treasure, you approach a secret\n"
			"castle and walk through the large door into the parlor.\n"
			"The room is empty, but there are two doors on either side.\n"
			"Which do you take?\n\n"
			"1) The door to the left\n"
			"2) The door to the right\n");

	int MainAnswer;
	scanf("%i", &MainAnswer);

	if(MainAnswer == 1)
		GoblinRoom();
	else
		FireRoom();

	return 0;
}