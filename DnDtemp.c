#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char goblins[3][15] = {"azerz", "krod", "grorberg"};
char fairies[2][10] = {"ellie", "fayette"};



//CHARACTERS ---

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
    printf("\nPLAYER 1 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player1 == 2)
  {
    printf("\nPLAYER 1 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player1 == 3)
  {
    printf("\nPLAYER 1 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player1 == 4)
  {
    printf("\nPLAYER 1 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player1 == 5)
  {
    printf("\nThe Player 1 have choosen to become The Dungeon Master");
  }
  printf("\n\n---------------------------------\n");

  printf("\nPlayer 2 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player2);

  while (player2 != 1 && player2 != 2 && player2 != 3 && player2 != 4 && player2 != 5)
  {

    printf("\nPlease enter the correct option : ");
    scanf("%d", &player2);
  }

  while (player2 == player1)
  {
    printf("\nEnter the correct option : ");
    scanf("%i", &player2);
  }

  if (player2 == 1)
  {
    printf("\nPLAYER 2 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player2 == 2)
  {
    printf("\nPLAYER 2 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player2 == 3)
  {
    printf("\nPLAYER 2 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player2 == 4)
  {
    printf("\nPLAYER 2 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player2 == 5)
  {
    printf("\nThe Player 2 have choosen to become The Dungeon Master");
  }

  printf("\n\n---------------------------------\n");

  printf("\nPlayer 3 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player3);

  while (player3 != 1 && player3 != 2 && player3 != 3 && player3 != 4 && player3 != 5)

  {
    printf("\nPlease enter the correct option : ");

    scanf("%d", &player3);
  }

  while ((player3 == player1) || (player3 == player2))
  {
    printf("\nEnter the correct option :");
    scanf("%i", &player3);
  }

  if (player3 == 1)
  {
    printf("\nPLAYER 3 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player3 == 2)
  {
    printf("\nPLAYER 3 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player3 == 3)
  {
    printf("\nPLAYER 3 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player3 == 4)
  {
    printf("\nPLAYER 3 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player3 == 5)
  {
    printf("\nThe Player 3 have choosen to become The Dungeon Master");
  }

  printf("\n\n---------------------------------\n");

  printf("\nPlayer 4 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player4);

  while (player4 != 1 && player4 != 2 && player4 != 3 && player4 != 4 && player4 != 5)
  {

    printf("\nPlease enter the correct option : ");

    scanf("%d", &player4);
  }

  while ((player4 == player1) || (player4 == player2) || (player4 == player3))
  {
    printf("\nEnter the correct option :");
    scanf("%i", &player4);
  }
  if (player4 == 1)
  {
    printf("\nPLAYER 4 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath");
  }

  else if (player4 == 2)
  {
    printf("\nPLAYER 4 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife");
  }
  else if (player4 == 3)
  {
    printf("\nPLAYER 4 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer");
  }
  else if (player4 == 4)
  {
    printf("\nPLAYER 4 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection");
  }
  else if (player4 == 5)
  {
    printf("\nThe Player 4 have choosen to become The Dungeon Master");
  }
  printf("\n\n---------------------------------\n");
  printf("\nPlayer 5 please enter your choice of Hero/Dungeon master: ");

  scanf("%i", &player5);

  while (player5 != 1 && player5 != 2 && player5 != 3 && player5 != 4 && player5 != 5)
  {

    printf("\nPlease enter the correct option : ");

    scanf("%d", &player5);
  }

  while ((player5 == player1) || (player5 == player2) || (player5 == player3) || (player5 == player4))
  {
    printf("\nEnter the correct option :");
    scanf("%i", &player5);
  }

  if (player5 == 1)
  {
    printf("\nPLAYER 5 HAS CHOOSEN GODRIC \nSkills : Ray Of Forest,Druid craft,Eldritch Blast \nWeapons : Portion of Fire Breath\n");
  }

  else if (player5 == 2)
  {
    printf("\nPLAYER 5 HAS CHOOSEN Magnus \nSkills : Wish Gate,Meteor swarm \nWeapons :Rakdos ,Rite Knife\n");
  }
  else if (player5 == 3)
  {
    printf("\nPLAYER 5 HAS CHOOSEN Callan \nSkills : Find Familiar , Meteor, Acid Arrow,Swarm \nWeapons :Giant Slayer\n");
  }
  else if (player5 == 4)
  {
    printf("\nPLAYER 5 HAS CHOOSEN Hector\nSkills : Just Rogue,The Void\nWeapons :Scar protection\n");
  }
  else if (player5 == 5)
  {
    printf("\nThe Player 5 have choosen to become The Dungeon Master\n");
  }
}





// D2 DIE ---

int d2(char dragoninput1[10],char dragoninput2[10])
{   
  char dragons[6][10] = {"edna","hydra","medusa","echo","blizzard","odin"};
  int m,y;
  y = rand() % 6;

    strcpy(dragoninput1,dragons[y]);

  m = rand()%6;
  
  while (y == m)
  {
    m = rand() % 6;
  }

  strcpy(dragoninput2,dragons[m]);

  printf("%s\n",dragoninput1);
  printf("%s",dragoninput2);
  
  return 0;
}






//CHALLENGE NUMBER 1


int fightheroes(char dragoninput1[10], char dragoninput2[10], int currency[10], int playerinput1)
{
  char fightinput[3];
  printf("\nDo you wanna fight or not? (yes/no): ");
  scanf("%s", fightinput);
  if (strcmp(fightinput,"yes")==0)
  {
    int playerinput2;
    printf("\nEnter the player number: ");
    scanf("%d",&playerinput2);
    while (playerinput2 != 1 && playerinput2 != 2 && playerinput2 != 3 && playerinput2 != 4 && playerinput2 != 5)
    {
      printf("\nPlease enter the correct option");
      scanf("%d", &playerinput2);
    }
    char weaponinput1[10];
    printf("\nPlease enter your weapon of choice player1: ");
    scanf("%s", weaponinput1);
    char skillinput1[10];
    printf("\nPlease enter your choice of skill player1: ");
    scanf("%s", skillinput1);
    char weaponinput2[10];
    printf("\nPlease enter your weapon of choice player2: ");
    scanf("%s", weaponinput2);
    char skillinput2[10];
    printf("\nPlease enter your choice of skill player2: ");
    scanf("%s", skillinput2);
    printf("\nDETAILS OF FIRST PLAYER:\n %s \n %s \n %s", dragoninput1, weaponinput1, skillinput1);
    printf("\nDETAILS OF SECOND PLAYER:\n %s \n %s \n %s", dragoninput2, weaponinput2, skillinput2);
    int dragondamage1 = 0;
    int dragondamage2 = 0;
    if (strcmp(dragoninput1,"edna")==0)
    {
      dragondamage1 = 10;
    }
    else if (strcmp(dragoninput1,"hydra")==0)
    {
      dragondamage1 = 40;
    }
    else if (strcmp(dragoninput1,"medusa")==0)
    {
      dragondamage1 = 70;
    }
    else if (strcmp(dragoninput1,"echo")==0)
    {
      dragondamage1 = 100;
    }
    else if (strcmp(dragoninput1,"blizzard")==0)
    {
      dragondamage1 = 600;
    }
    else if (strcmp(dragoninput1,"odin")==0)
    {
      dragondamage1 = 1200;
    }
    else{
        printf("Enter a valid dragon name");
    }

  if (strcmp(dragoninput2,"edna")==0)
  {
    dragondamage2 = 10;
  }
  else if (strcmp(dragoninput2,"hydra")==0)
  {
    dragondamage2 = 40;
  }
  else if (strcmp(dragoninput2,"medusa")==0)
  {
    dragondamage2 = 70;
  }
  else if (strcmp(dragoninput2,"echo")==0)
  {
    dragondamage2 = 100;
  }
  else if (strcmp(dragoninput2,"blizzard")==0)
  {
    dragondamage2 = 600;
  }
  else if (strcmp(dragoninput2,"odin")==0)
  {
    dragondamage2 = 1200;
  }
  else{
        printf("\nEnter a valid dragon name");
    }

int damagecount1=0, damagecount2=0;
damagecount1 = 50 + dragondamage1;
damagecount2 = 50 + dragondamage2;
if (dragondamage1 > dragondamage2)
{
  if (playerinput1 == 1)
  {
    currency[0] = currency[0] + 200;
    currency[5] = currency[5] + 1;
    printf("\nPlayer number 1's damage was %d defeating the second player", damagecount1);
    printf("\nThe amount of barracks recieved by player 1 : 200");
    printf("\nThe amount of badges received by player 1: 1");
  }
  else if (playerinput1 == 2)
  {
    currency[1] = currency[1] + 200;
    currency[6] = currency[6] + 1;
    printf("\nPlayer number 2's damage was %d defeating the second player", damagecount1);
    printf("\nThe amount of barracks recieved by player 2 : 200");
    printf("\nThe amount of badges received by player 2: 1");
  }
  else if (playerinput1 == 3)
  {
    currency[2] = currency[2] + 200;
    currency[7] = currency[7] + 1;
    printf("\nPlayer number 3's damage was %d defeating the second player", damagecount1);
    printf("\nThe amount of barracks recieved by player 3 : 200");
    printf("\nThe amount of badges received by player 3: 1");
  }
  else if (playerinput1 == 4)
  {
    currency[3] = currency[3] + 200;
    currency[8] = currency[8] + 1;
    printf("\nPlayer number 4's damage was %d defeating the second player", damagecount1);
    printf("\nThe amount of barracks recieved by player 4 : 200");
    printf("\nThe amount of badges received by player 4: 1");
  }
  else if (playerinput1 == 5)
  {
    currency[4] = currency[4] + 200;
      currency[9]=currency[9]+1;
      printf("\nPlayer number 5's damage was %d defeating the second player", damagecount1);
      printf("\nThe amount of barracks recieved by player 5 : 200");
      printf("\nThe amount of badges received by player 5: 1");
  }
}
else if (dragondamage2 > dragondamage1)
{
  if (playerinput2 == 1)
  {
    currency[0] = currency[0] + 200;
    currency[5] = currency[5] + 1;
    printf("\nPlayer number 1's damage was %d defeating the first player", damagecount2);
    printf("\nThe amount of barracks recieved by player 1 : 200");
    printf("\nThe amount of badges received by player 1: 1");
  }
  else if (playerinput2 == 2)
  {
    currency[1] = currency[1] + 200;
    currency[6] = currency[6] + 1;
    printf("\nPlayer number 2's damage was %d defeating the first player", damagecount2);
    printf("\nThe amount of barracks recieved by player 2 : 200");
    printf("\nThe amount of badges received by player 2: 1");
  }
  else if (playerinput2 == 3)
  {
    currency[2] = currency[2] + 200;
    currency[7] = currency[7] + 1;
    printf("\nPlayer number 3's damage was %d defeating the first player", damagecount2);
    printf("\nThe amount of barracks recieved by player 3 : 200");
    printf("\nThe amount of badges received by player 3: 1");
  }
  else if (playerinput2 == 4)
  {
    currency[3] = currency[3] + 200;
    currency[8] = currency[8] + 1;
    printf("\nPlayer number 4's damage was %d defeating the first player", damagecount2);
    printf("\nThe amount of barracks recieved by player 4 : 200");
    printf("\nThe amount of badges received by player 4: 1");
  }
  else if (playerinput2 == 5)
  {
    currency[4] = currency[4] + 200;
      currency[9]=currency[9]+1;
      printf("\nPlayer number 5's damage was %d defeating the first player", damagecount2);
      printf("\nThe amount of barracks recieved by player 5 : 200");
      printf("\nhe amount of badges received by player 5: 1");
  }
}
else
{
  printf("\nThe match has been tied!");
}
  }
else{
    printf("\nYou chose not to fight!!");
}
}


//CHALLENGE NUMBER 2

int donate(int currency[10], int playerinput1)
{
  char dragondonate[10];
  printf("\nDo you accept this challenge?(yes/no): ");
  char choice[3];
  scanf("%s", choice);
  if (strcmp(choice,"yes")==0)
  {
    int playerinput2;
    printf("\nPlease enter the player number to whom you wanna donate: ");
    scanf("%d", &playerinput2);
    while (playerinput2 != 1 && playerinput2 != 2 && playerinput2 != 3 && playerinput2 != 4 && playerinput2 != 5)
    {
      printf("\nEnter a valid player number: ");
      scanf("%d", &playerinput2);
    }

    while(playerinput2==playerinput1){
      printf("Enter a valid player number");
      scanf("%d",&playerinput2);
    }
    int dragonqty1;
    printf("\nEnter the number of dragons the donor owns: ");
    scanf("%d",&dragonqty1);
    int dragonqty2;
    printf("\nEnter the number of dragons second player owns: ");
    scanf("%d",&dragonqty2);
    char dragons1[dragonqty1][10];
    char dragons2[dragonqty2 + 1][10];
    int y = 0;
    printf("\nEnter the name of each dragon donor owns:");
    while (y < dragonqty1)
    {
      scanf("%s",dragons1[y]);
      y++;
    }
    int m;
    m = 0;
    printf("\nEnter the name of each dragon second player owns:");
    while (m < dragonqty2)
    {
      scanf("%s", dragons2[m]);
      m++;
    }
  
    printf("\nPlease enter which dragon you wanna donate: ");
    scanf("%s",dragondonate);

    while (strcmp(dragondonate,"edna")!=0 && strcmp(dragondonate,"hydra")!=0 && strcmp(dragondonate,"medusa")!=0 && strcmp(dragondonate,"echo")!=0 && strcmp(dragondonate,"blizzard")!=0 && strcmp(dragondonate,"odin")!=0)
    {
      printf("\nEnter a valid dragon: ");
      scanf("%s", dragondonate);
    }

    printf("The dragons now owned by the reciever: \n");
    
    int x;
    for (x = 0; x < dragonqty1; x++)
    {
      for (int j=0; j<dragonqty1; j++){
        if (strcmp(dragons1[x],dragondonate)==0)
      {
        strcpy(dragons2[dragonqty2],dragons1[x]);
        break;
      }
      }
    }

    for (x = 0; x <= dragonqty2; x++)
    {
     
        printf("%s\n",dragons2[x]);

    }
    printf("\nPlayer has successfully donated the dragon!");

    if (playerinput1 == 1)
    {
      currency[0] = currency[0] + 200;
      currency[5] = currency[5] + 1;
      printf("\nThe amount of barracks recieved by player 1 : 200");
      printf("\nThe amount of badges received by player 1: 1");
    }
    else if (playerinput1 == 2)
    {
      currency[1] = currency[1] + 200;
      currency[6] = currency[6] + 1;
      printf("\nThe amount of barracks recieved by player 2 : 200");
      printf("\nThe amount of badges received by player 2: 1");
    }
    else if (playerinput1 == 3)
    {
      currency[2] = currency[2] + 200;
      currency[7] = currency[7] + 1;
      printf("\nThe amount of barracks recieved by player 3 : 200");
      printf("\nThe amount of badges received by player 3: 1");
    }
    else if (playerinput1 == 4)
    {
      currency[3] = currency[3] + 200;
      currency[8] = currency[8] + 1;
      printf("\nThe amount of barracks recieved by player 4 : 200");
      printf("\nThe amount of badges received by player 4: 1");
    }
    else if (playerinput1 == 5)
    {
      currency[4] = currency[4] + 200;
      currency[9]=currency[9]+1;
      printf("\nThe amount of barracks recieved by player 5 : 200");
      printf("\nhe amount of badges received by player 5: 1");
    }
  }
  else
  {
    printf("\nYou chose not to do this challenge!");
  }
}


//CHALLENGE NUMBER 3


int loot(int currency[10], int playerinput1)
{
  char input[3];
  printf("\nPlease enter if you wanna continue with the challenge(yes/no): ");
  scanf("%s",input); 
  if (strcmp(input,"yes")==0)
  {
    char goblins[10];
    printf("\nPlease enter which goblin you wanna loot with: ");
    scanf("%s", goblins);
    int structurehealth;
    printf("\nEnter the health point of the structure to be looted: ");
    scanf("%d",&structurehealth);
    int goblindamage = 0;
    if (strcmp(goblins,"azerz")==0)
    {
      goblindamage = 50;
    }
    else if (strcmp(goblins,"krod")==0)
    {
      goblindamage = 100;
    }
    else if (strcmp(goblins,"grorberg")==0)
    {
      goblindamage = 150;
    }
    else{
      printf("\nEnter a valid goblin name");
    }
    if (goblindamage >= structurehealth)
    {
      if (playerinput1 == 1)
      {
        currency[0] = currency[0] + 200;
        currency[5] = currency[5] + 1;
        printf("\nThe amount of barracks recieved by player 1 : 200");
        printf("\nThe amount of badges received by player 1: 1");
      }
      else if (playerinput1 == 2)
      {
        currency[1] = currency[1] + 200;
        currency[6] = currency[6] + 1;
        printf("\nThe amount of barracks recieved by player 2 : 200");
        printf("\nThe amount of badges received by player 2: 1");
      }
      else if (playerinput1 == 3)
      {
        currency[2] = currency[2] + 200;
        currency[7] = currency[7] + 1;
        printf("\nThe amount of barracks recieved by player 3 : 200");
        printf("\nThe amount of badges received by player 3: 1");
      }
      else if (playerinput1 == 4)
      {
        currency[3] = currency[3] + 200;
        currency[8] = currency[8] + 1;
        printf("\nThe amount of barracks recieved by player 4 : 200");
        printf("\nThe amount of badges received by player 4: 1");
      }
      else if (playerinput1 == 5)
      {
        currency[4] = currency[4] + 200;
              currency[9]=currency[9]+1;
              printf("\nThe amount of barracks recieved by player 5 : 200");
              printf("\nThe amount of badges received by player 5: 1");
      }
    }
    else{
      printf("\nThe goblin does not have enough damage!");
    }
  }
  else
  {
    printf("\nYou chose not to do this challenge!");
  }
}



//CHALLENGE 4 -----


int d3(int HP, int currency[10], int playerinput1)
{
  char choice[3];
  printf("\nPLease enter if you wanna continue with the challenge(yes/no): ");
  scanf("%s",choice);
  if (strcmp(choice,"yes")==0)
  {
    char fairies[2][5];
    fairies[0][5] = 'ellie';
    fairies[1][5] = 'fayette';
    int y;
    y = rand()%8+1;
    if (y >= 4)
    {
      printf("\nCongrats you have got the Fayette to heal you with 40 health points!!");
      HP = HP + 40;
    }
    else
    {
      printf("\nCongrats you have got ellie to heal you with 20 health points!!");
      HP = HP + 20;
    }
    if (playerinput1 == 1)
    {
      currency[0] = currency[0] + 200;
      currency[5] = currency[5] + 1;
      printf("\nThe amount of barracks recieved by player 1 : 200");
      printf("\nThe amount of badges received by player 1: 1");
    }
    else if (playerinput1 == 2)
    {
      currency[1] = currency[1] + 200;
      currency[6] = currency[6] + 1;
      printf("\nThe amount of barracks recieved by player 2 : 200");
      printf("\nThe amount of badges received by player 2: 1");
    }
    else if (playerinput1 == 3)
    {
      currency[2] = currency[2] + 200;
      currency[7] = currency[7] + 1;
      printf("\nThe amount of barracks recieved by player 3 : 200");
      printf("\nThe amount of badges received by player 3: 1");
    }
    else if (playerinput1 == 4)
    {
      currency[3] = currency[3] + 200;
      currency[8] = currency[8] + 1;
      printf("The amount of barracks recieved by player 4 : 200");
      printf("The amount of badges received by player 4: 1");
    }
    else 
    {
      currency[4] = currency[4] + 200;
      currency[9]=currency[9]+1;
      printf("\nThe amount of barracks recieved by player 5 : 200");
      printf("\nThe amount of badges received by player 5: 1");
    }
  }
  else
  {
    printf("\nYou chose not to do this challenge!");
  }
}



// CHALLENGES ---

int challenges(int HP, char dragoninput1[10], char dragoninput2[10], int currency[10])
{
  int playerinput1, y;
  printf("\nplease enter the player's number: ");
  scanf("%d", &playerinput1);
  while (playerinput1 != 1 && playerinput1 != 2 && playerinput1 != 3 && playerinput1 != 4 && playerinput1 != 5)
  {
    printf("\nPlease enter the correct option");
    scanf("%d", &playerinput1);
  }
  y = rand()%4 + 1;
  if (y == 1)
  {
    printf("\nFight a fellow hero with the skills and weapons you have got additionally with your dragons. If you complete the challenge you recieve 200 barracks and a badge.");
    fightheroes(dragoninput1, dragoninput2, currency, playerinput1);
  }
  else if (y == 2)
  {
    printf("\nDonate one of your dragons to one of your fellow hero. if you complete the challenge you will recieve 200 barracks and a badge");
    donate(currency, playerinput1);
  }
  else if (y == 3)
  {
    printf("\nLoot some barracks from the townhall with the goblins you own so far");
    loot(currency, playerinput1);
  }
  else if (y == 4)
  {
    printf("\nRoll the die 3 and if you end up with a number more than half of the total you will be lucky enough to get Fayette");
    d3(HP, currency, playerinput1);
  }

  return 0;
}




//HENCHMEN FIGHT

int henchmenfight(int viccounts[5], int currency[10])
{
  int pi, c1, dragoninput1, dragondamage1 = 0, damagecount1 = 0;
  printf("\nEnter your player number: ");
  scanf("%d", &pi);
  printf("\nSelect dragons\n 1. edna \n 2. hydra \n 3. medusa \n 4. echo \n 5. blizzard \n 6. odin \n");
  scanf("%d", &dragoninput1);
  if (dragoninput1  == 1)
  {
    dragondamage1 = dragondamage1 + 10;
  }
  else if (dragoninput1 == 2)
  {
    dragondamage1 = dragondamage1 + 40;
  }
  else if (dragoninput1 == 3)
  {
    dragondamage1 = dragondamage1 + 70;
  }
  else if (dragoninput1 == 4)
  {
    dragondamage1 = dragondamage1 + 100;
  }
  else if (dragoninput1 == 5)
  {
    dragondamage1 = dragondamage1 + 600;
  }
  else if (dragoninput1 == 6)
  {
    dragondamage1 = dragondamage1 + 1200;
  }
  c1 = 0;
  damagecount1 = dragondamage1 + 500;
  while (currency[pi+4] > 0 && c1 < 1)
  {
    if (currency[pi+4] == 1 && viccounts[pi-1] == 0)
    {
      printf("Fight Castor\n");
      if (damagecount1 >= 300)
      {
        printf("You've won\n");
        viccounts[pi-1] = viccounts[pi-1] + 1;
      }
      else
      {
        printf("You've lost\n");
      }
    }
    if (currency[pi+4] == 2 && viccounts[pi-1] == 1)
    {
      printf("Fight Niobe\n");
      if (damagecount1 >= 500)
      {
        printf("You've won\n");
        viccounts[pi-1] = viccounts[pi-1] + 1;
      }
      else
      {
        printf("You've lost\n");
      }
    }
    if (currency[pi+4] == 3 && viccounts[pi-1] == 2)
    {
      printf("Fight Kyros\n");
      if (damagecount1 >= 800)
      {
        printf("You've won\n");
        viccounts[pi-1] = viccounts[pi-1] + 1;
      }
      else
      {
        printf("You've lost\n");
      }
    }
    if (currency[pi+4] == 4 && viccounts[pi-1] == 3)
    {
      printf("Fight Darius\n");
      if (damagecount1 >= 1000)
      {
        printf("You've won\n");
        viccounts[pi-1] = viccounts[pi-1] + 1;
      }
      else
      {
        printf("You've lost\n");
      }
    }
    c1 = c1 + 1;
  }
  if (currency[pi+4] == 0)
  {
    printf("You do not have enough amount of badges\n");
  }
  printf("Exit Story mode\n");
  if (viccounts[pi-1] == 4)
  {
    printf("DM~ Congratulations, you've become the ruler!\n");
  }
  return 0;
} 



// TRADING ---

int trading(int currency[10])
{
  int option, playeri[7] = {1000, 0, 0, 0, 0, 0, 0};
  int choice;
  printf("Enter 1 for Edna\n2 for Hydra\n3 for Medusa\n4 for Echo\n5 for Blizzard\n6 for Odin\n\n");
  scanf("%d", &option);
  while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6)
  {
    printf("Enter a value from 1-6\n");
    scanf("%d", &option);
  }

  //Edna

  if (option == 1)
  {
    if (playeri[1] != 1)
    {
      printf("\nYou are about to buy Edna which costs 200 barracks and deals a damage of 10.\nEnter 1 if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 200)
        {
          playeri[0] = playeri[0] - 200;
          playeri[1] = 1;
          printf("\nYou have successfully purchased Edna\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("\nYou have already bought Edna\n");
    }
  }

  //Hydra

  else if (option == 2)
  {
    if (playeri[2] != 1)
    {
      printf("\nYou are about to buy Hydra which costs 400 barracks and deals a damage of 40.\nEnter '1' if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 400)
        {
          playeri[0] = playeri[0] - 400;
          playeri[2] = 1;
          printf("\nYou have successfully purchased Hydra\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("\nYou have already bought Hydra\n");
    }
  }

  //Medusa

  else if (option == 3)
  {
    if (playeri[3] != 1)
    {
      printf("\nYou are about to buy Medusa which costs 600 barracks and deals a damage of 70.\nEnter '1' if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 600)
        {
          playeri[0] = playeri[0] - 600;
          playeri[3] = 1;
          printf("\nYou have successfully purchased Medusa\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("\nYou have already bought Medusa\n");
    }
  }

  //Echo

  else if (option == 4)
  {
    if (playeri[4] != 1)
    {
      printf("\nYou are about to buy Echo which costs 800 barracks and deals a damage of 100.\nEnter '1' if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 800)
        {
          playeri[0] = playeri[0] - 800;
          playeri[4] = 1;
          printf("\nYou have successfully purchased Echo\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("You have already bought Echo\n");
    }
  }

  //Blizzard

  else if (option == 5)
  {
    if (playeri[5] != 1)
    {
      printf("\nYou are about to buy Blizzard which costs 1000 barracks and deals a damage of 600.\nEnter '1' if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 1000)
        {
          playeri[0] = playeri[0] - 1000;
          playeri[5] = 1;
          printf("\nYou have successfully purchased Blizzard\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("\nYou have already bought Blizzard\n");
    }
  }

  //Odin

  else if (option == 6)
  {
    if (playeri[6] != 1)
    {
      printf("\nYou are about to buy Odin which costs 1200 barracks and deals a damage of 1200.\nEnter '1' if you want to continue\n\n");
      scanf("%d", &choice);
      if (choice == 1)
      {
        if (playeri[0] >= 1200)
        {
          playeri[0] = playeri[0] - 1200;
          playeri[6] = 1;
          printf("\nYou have successfully purchased Odin\n");
        }
        else
        {
          printf("\nNot enough barracks\n");
        }
      }
    }
    else
    {
      printf("\nYou have already bought Odin\n");
    }
  }

  return 0;
}




//CONQUEROR FIGHT!!//

int fightconqueror(int currency[10])
{
  int playerinput1;
  printf("\nPlease enter the player number");
  scanf("%d", &playerinput1);
  while (playerinput1 != 1 && playerinput1 != 2 && playerinput1 != 3 && playerinput1 != 4 && playerinput1 != 5)
  {
    printf("\nEnter a valid option: ");
    scanf("%d", &playerinput1);
  }
  char isruleordm1[5];
  printf("\nAre you the ruler or dm? (ruler/dm)");
  scanf("%s", isruleordm1);
  while (strcmp(isruleordm1,"dm")==0 && strcmp(isruleordm1,"ruler")==0)
  {
    printf("\nEnter the valid option: ");
    scanf("%s", isruleordm1);
  }
  char dragoninput1[10];
  printf("\nEnter the dragon of player1: ");
  scanf("%s", dragoninput1);
  while (strcmp(dragoninput1,"edna")!=0 && strcmp(dragoninput1,"hydra")!=0 && strcmp(dragoninput1,"medusa")!=0 && strcmp(dragoninput1,"echo")!=0 && strcmp(dragoninput1,"blizzard")!=0 && strcmp(dragoninput1,"odin")!=0)
    {
      printf("\nEnter a valid dragon: ");
      scanf("%s", dragoninput1);
    }
  char weaponinput1[10];
  printf("\nEnter your weapon of choice: ");
  scanf("%s", weaponinput1);
  char skillinput1[10];
  printf("\nEnter your skill of choice: ");
  char ifbot[5];
  printf("Do you require a bot for the fight?");
  scanf("%s",ifbot);
  char isruleordm2[5];
  int playerinput2;
  int dragondamage2 = 0;
  int dragondamage1 = 0;
  if (strcmp(dragoninput1,"edna")==0)
    {
      dragondamage1 = 10;
    }
    else if (strcmp(dragoninput1,"hydra")==0)
    {
      dragondamage1 = 40;
    }
    else if (strcmp(dragoninput1,"medusa")==0)
    {
      dragondamage1 = 70;
    }
    else if (strcmp(dragoninput1,"echo")==0)
    {
      dragondamage1 = 100;
    }
    else if (strcmp(dragoninput1,"blizzard")==0)
    {
      dragondamage1 = 600;
    }
    else if (strcmp(dragoninput1,"odin")==0)
    {
      dragondamage1 = 1200;
    }
  if (strcmp(ifbot,"no")==0)
  {
    printf("\nPlease enter the player 2 number: ");
    scanf("%d", &playerinput2);
    while (playerinput2 != 1 && playerinput1 != 2 && playerinput1 != 3 && playerinput1 != 4 && playerinput1 != 5)
    {
      printf("\nEnter a valid player number: ");
      scanf("%d", &playerinput1);
    }
    printf("\nAre you the ruler or dm?(ruler/dm)");
    scanf("%s", isruleordm2);
    while (strcmp(isruleordm2,"dm")!=0 && strcmp(isruleordm2,"ruler")!=0)
    {
      printf("\nEnter the valid option: ");
      scanf("%s", isruleordm2);
    }
    while (isruleordm1 == isruleordm2)
    {
      printf("\nEnter a different option: ");
      scanf("%s", isruleordm2);
    }
    char dragoninput2[10];
    printf("\nEnter the dragon of player2: ");
    scanf("%s", dragoninput2);
    while (strcmp(dragoninput2,"edna")!=0 && strcmp(dragoninput2,"hydra")!=0 && strcmp(dragoninput2,"medusa")!=0 && strcmp(dragoninput2,"echo")!=0 && strcmp(dragoninput2,"blizzard")!=0 && strcmp(dragoninput2,"odin")!=0)
    {
      printf("\nEnter a valid dragon: ");
      scanf("%s", dragoninput2);
    }
    char weaponinput2[10];
    printf("\nEnter the weapon of your choice: ");
    scanf("%s", weaponinput2);
    char skillinput2[10];
    printf("\nEnter the skill of your choice: ");
    scanf("%s", skillinput2);
    if (strcmp(dragoninput2,"edna")==0)
    {
      dragondamage2 = 10;
    }
    else if (strcmp(dragoninput2,"hydra")==0)
    {
      dragondamage2 = 40;
    }
    else if (strcmp(dragoninput2,"medusa")==0)
    {
      dragondamage2 = 70;
    }
    else if (strcmp(dragoninput2,"echo")==0)
    {
      dragondamage2 = 100;
    }
    else if (strcmp(dragoninput2,"blizzard")==0)
    {
      dragondamage2 = 600;
    }
    else if (strcmp(dragoninput2,"odin")==0)
    {
      dragondamage2 = 1200;
    }
    else{
          printf("\nEnter a valid dragon name");
      }

  }
  int damagecount1;
  damagecount1 = damagecount1 + 700;
  int damagecount2;
  damagecount2 = damagecount2 + 700;
  if (strcmp(ifbot,"yes")==0)
  {
    if (damagecount1 >= 1500)
    {
      printf("YOU WON THE FIGHT!! YOUR DAMAGE WAS MORE THAN 1500!");
      printf("\nCONGRATS!! YOU HAVE WON THE GAME AND BECAME THE CONQUEROR!!");
    }
    else
    {
      printf("YOU LOST THE FIGHT! YOUR DAMAGE WAS LESS THAN 1500!");
      printf("\nGAME OVER!!\n\nYour barracks and badges will be snatched away!\n\nYou may choose to restart the game");
      if (playerinput1 == 1)
      {
        currency[0] = 0;
        currency[5] = 0;
      }
      else if (playerinput1 == 2)
      {
        currency[1] = 0;
        currency[6] = 0;
      }
      else if (playerinput1 == 3)
      {
        currency[2] = 0;
        currency[7] = 0;
      }
      else if (playerinput1 == 4)
      {
        currency[3] = 0;
        currency[8] = 0;
      }
      else
      {
        currency[4] = 0;
        currency[9] = 0;
      }
    }
  }
  else
  {
    if (damagecount1 > damagecount2)
    {
      if (playerinput2 == 1)
      {
        currency[0] = 0;
        currency[5] = 0;
      }
      else if (playerinput2 == 2)
      {
        currency[1] = 0;
        currency[6] = 0;
      }
      else if (playerinput2 == 3)
      {
        currency[2] = 0;
        currency[7] = 0;
      }
      else if (playerinput2 == 4)
      {
        currency[3] = 0;
        currency[8] = 0;
      }
      else
      {
        currency[4] = 0;
        currency[9] = 0;
      }

      if (strcmp(isruleordm1,"ruler")==0)
      {
        printf("\nRULER,YOU WON THE FIGHT!!\n\nThe ruler's damage was: %d\nThe Dragon master's damage was not enough\n\nCONGRATS RULER!!\nYou have become the conqueror!\nYour health has now increased to 3000\nKeep ruling the village :))", damagecount1);
      }
      else
      {
        printf("\nDRAGON MASTER YOU WON THE FIGHT!!\n\nThe Dragon Master's damage was: %d\nThe Ruler's damage was not enough\n\nCONGRATS RULER!!\nYou have become the conqueror!\nYour health has now increased to 3000\nKeep ruling the village :))", damagecount1);
      }
    }
    else if (damagecount2 > damagecount1)
    {
      if (playerinput1 == 1)
      {
        currency[0] = 0;
        currency[5] = 0;
      }
      else if (playerinput1 == 2)
      {
        currency[1] = 0;
        currency[6] = 0;
      }
      else if (playerinput1 == 3)
      {
        currency[2] = 0;
        currency[7] = 0;
      }
      else if (playerinput1 == 4)
      {
        currency[3] = 0;
        currency[8] = 0;
      }
      else
      {
        currency[4] = 0;
        currency[9] = 0;
      }
      if (strcmp(isruleordm2,"dm")==0)
      {
        printf("\nDRAGON MASTER, YOU WON THE FIGHT!!\n\nThe Dragon Master's damage was: %d\nThe Ruler's damage was not enough\n\nCONGRATS RULER!!\nYou have become the conqueror!\nYour health has now increased to 3000\nKeep ruling the village :))", damagecount2);
      }
      else
      {
        printf("\nRULER, YOU WON THE FIGHT!!\n\nThe ruler's damage was: %d\nThe Dragon master's damage was not enough\n\nCONGRATS RULER!!\nYou have become the conqueror!\nYour health has now increased to 3000\nKeep ruling the village :))", damagecount2);
      }
    }
    else
    {
      printf("Your damage was equal to 1500\n");
      printf("\nThe match has been tied!");
    }
  }
}




//MAIN MODULE 


int main()
{
  char dragoninput1[10];
  char dragoninput2[10];
  int HP = 0;
  int currency[10]= {0};
  int viccounts[5]= {0};
  int x;
  srand(time(0));
  printf("WELCOME TO DUNGEONS AND DRAGONS...");
  printf("\n\nHERE ONLY THE BRAVE AND FEARLESS SOULS TEND TO SURVIVE");
  printf("\n\nCOMPLETE THE CHALLENGES AND DEFEAT THE RULER AND HIS HENCHMEN");
  printf("\n\nGET A CHANCE TO RULE THE VILLAGE..");
  d2(dragoninput1,dragoninput2);
  printf("\nLet's select our respective heroes shall we??..");
  characters();
  printf("\nCHALLENGES!!\n\n");
  printf("Complete the challenges and earn barracks to trade as well as badges to fight the henchmen!\n");
  challenges(HP,dragoninput1,dragoninput2,currency);
  char repeatchallenges[3];
  printf("\nDo you wanna repeat the challenges?(yes/no): ");
  scanf("%s", repeatchallenges);
  while (strcmp(repeatchallenges,"no")==0 && strcmp(repeatchallenges,"yes")==0)
  {
    printf("\nPlease choose a valid option: ");
    scanf("%s", repeatchallenges);
  }
  while (strcmp(repeatchallenges,"yes")==0)
  {
    challenges(HP, dragoninput1, dragoninput2, currency);
    printf("\nDo you wanna repeat the challenges?(yes/no): ");
    scanf("%s", repeatchallenges);
  }
  printf("\n\nTHE VAULT\n\n"); 
  char vaultchoice[3];
  printf("\nPlease choose if you want to view the amount of barracks and badges has been accumulated so far (yes/no): ");
  scanf("%s", vaultchoice);
  while (strcmp(vaultchoice,"no")==0 && strcmp(vaultchoice,"yes")==0)
  {
    printf("\nPlease choose a valid option: ");
    scanf("%s", vaultchoice);
  }
  if (strcmp(vaultchoice,"yes")==0)
  {
    int vaultplayerinput;
    printf("\nPlease enter your player number: ");
    scanf("%d", &vaultplayerinput);
    while (vaultplayerinput != 1 && vaultplayerinput != 2 && vaultplayerinput != 3 && vaultplayerinput != 4 && vaultplayerinput != 5)
    {
      printf("\nPlease enter your player number: ");
      scanf("%d",&vaultplayerinput);
    }
    if (vaultplayerinput == 1)
    {
      printf("\nThe amount of barracks accumulated so far: %d",currency[0]);
      printf("\nThe amount of badges accumulated so far: %d",currency[5]);
    }
    else if (vaultplayerinput == 2)
    {
      printf("\nThe amount of barracks accumulated so far: %d", currency[1]);
      printf("\nThe amount of badges accumulated so far: %d", currency[6]);
    }
    else if (vaultplayerinput == 3)
    {
      printf("\nThe amount of barracks accumulated so far: %d", currency[2]);
      printf("\nThe amount of badges accumulated so far: %d", currency[7]);
    }
    else if (vaultplayerinput == 4)
    {
      printf("\nThe amount of barracks accumulated so far: %d", currency[3]);
      printf("\nThe amount of badges accumulated so far: %d", currency[8]);
    }
    else
    {
      printf("\nThe amount of barracks accumulated so far: %d", currency[4]);
      printf("\nThe amount of badges accumulated so far: %d", currency[9]);
    }
  }
  char storychoice[3];
  int mentorchoice,tradechoice;
  printf("\nWould you like to enter the story mode? (yes/no)");
  scanf("%s",storychoice);
  if(strcmp(storychoice,"yes")==0){
    henchmenfight(viccounts, currency);
  }
  else if(strcmp(storychoice,"no")==0){
    printf("\nEnter 1 to go back to mentor mode: ");
    scanf("%d",&mentorchoice);
    if(mentorchoice==1){
        challenges(HP, dragoninput1, dragoninput2, currency);
        char repeatchallenges[3];
        printf("\n\nDo you wanna repeat the challenges?(yes/no): ");
        scanf("%s", repeatchallenges);
        while (strcmp(repeatchallenges,"no")==0 && strcmp(repeatchallenges,"yes")==0)
        {
          printf("\nPlease choose a valid option: ");
          scanf("%s", repeatchallenges);
        }
        while (strcmp(repeatchallenges,"yes")==0)
        {
          challenges(HP, dragoninput1, dragoninput2, currency);
          printf("\nDo you wanna repeat the challenges?(yes/no): ");
          scanf("%s", repeatchallenges);
        }
      }
      else{
        printf("\nSORRY!you can't enter the mentor mode");
      }
    }
    else{
        printf("\nYou chose to walk past a great oppurtunity");
      }
    printf("\nEnter 1 to trade: ");
    scanf("%d",&tradechoice);
      if(tradechoice==1){
        trading(currency);
      }
      else{
        printf("\nYou chose not to trade :(");
      }
  printf("\n\nTHE FINAL FIGHT!! \n\n Congrats so far..This is the final battle..Try your best and have fun :)");
  fightconqueror(currency);
}