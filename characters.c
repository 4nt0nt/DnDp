#include <stdio.h>

int characters()
{
  int player1,player2,player3,player4,player5;
  printf("CHOOSE A CHARACTER\n1.GODRIC\n2.MAGNUS\n3.CALLAN\n4.HECTOR\n5.DUNGEON MASTER");
  printf("\nPlayer 1 please enter your choice of Hero/Dungeon master: ");
  scanf("%d", &player1);

  while (player1 != 1 && player1 != 2 && player1 != 3 && player1 != 4 && player1 != 5)
  {

    printf("Please enter the correct option :");

    scanf("%d", &player1);
  }

  if (player1 == 1)
  {
    printf("PLAYER 1 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player1 == 2)
  {
    printf("PLAYER 1 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player1 == 3)
  {
    printf("PLAYER 1 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player1 == 4)
  {
    printf("PLAYER 1 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player1 == 5)
  {
    printf("The Player 1 have choosen to become The Dungeon Master");
  }
  printf("\n---------------------------------\n");

  printf("\nPlayer 2 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player2);

  while (player2 != 1 && player2 != 2 && player2 != 3 && player2 != 4 && player2 != 5)
  {

    printf("Please enter the correct option : ");
    scanf("%d", &player2);
  }

  while (player2 == player1)
  {
    printf("Enter the correct option : ");
    scanf("%i", &player2);
  }

  if (player2 == 1)
  {
    printf("PLAYER 2 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player2 == 2)
  {
    printf("PLAYER 2 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player2 == 3)
  {
    printf("PLAYER 2 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player2 == 4)
  {
    printf("PLAYER 2 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player2 == 5)
  {
    printf("The Player 2 have choosen to become The Dungeon Master");
  }

  printf("\n---------------------------------\n");

  printf("\nPlayer 3 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player3);

  while (player3 != 1 && player3 != 2 && player3 != 3 && player3 != 4 && player3 != 5)

  {
    printf("Please enter the correct option : ");

    scanf("%d", &player3);
  }

  while ((player3 == player1) || (player3 == player2))
  {
    printf("Enter the correct option :");
    scanf("%i", &player3);
  }

  if (player3 == 1)
  {
    printf("PLAYER 3 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player3 == 2)
  {
    printf("PLAYER 3 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player3 == 3)
  {
    printf("PLAYER 3 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player3 == 4)
  {
    printf("PLAYER 3 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player3 == 5)
  {
    printf("The Player 3 have choosen to become The Dungeon Master");
  }

  printf("\n---------------------------------\n");

  printf("\nPlayer 4 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player4);

  while (player4 != 1 && player4 != 2 && player4 != 3 && player4 != 4 && player4 != 5)
  {

    printf("Please enter the correct option : ");

    scanf("%d", &player4);
  }

  while ((player4 == player1) || (player4 == player2) || (player4 == player3))
  {
    printf("Enter the correct option :");
    scanf("%i", &player4);
  }
  if (player4 == 1)
  {
    printf("PLAYER 4 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player4 == 2)
  {
    printf("PLAYER 4 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player4 == 3)
  {
    printf("PLAYER 4 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player4 == 4)
  {
    printf("PLAYER 4 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player4 == 5)
  {
    printf("The Player 4 have choosen to become The Dungeon Master");
  }
  printf("\n---------------------------------\n");
  printf("\nPlayer 5 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player5);

  while (player5 != 1 && player5 != 2 && player5 != 3 && player5 != 4 && player5 != 5)
  {

    printf("Please enter the correct option : ");

    scanf("%d", &player5);
  }

  while ((player5 == player1) || (player5 == player2) || (player5 == player3) || (player5 == player4))
  {
    printf("Enter the correct option :");
    scanf("%i", &player5);
  }

  if (player5 == 1)
  {
    printf("PLAYER 5 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath\n");
  }

  else if (player5 == 2)
  {
    printf("PLAYER 5 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife\n");
  }
  else if (player5 == 3)
  {
    printf("PLAYER 5 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer\n");
  }
  else if (player5 == 4)
  {
    printf("PLAYER 5 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection\n");
  }
  else if (player5 == 5)
  {
    printf("The Player 5 have choosen to become The Dungeon Master\n");
  }
}