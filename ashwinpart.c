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
  
  return 0;
}



int loot(struct currencydata currency[5], int playerinput1)
{
  char input[3];
  printf("\nPlease enter if you wanna continue with the challenge(yes/no): ");
  scanf("%s",input); 
  if (strcmp(input,"yes")==0)
  {
    char goblins[10];
    printf("\nPlease enter which goblin you wanna loot with: ");
    scanf("%s", goblins);
    while(strcmp(goblins,"azerz")!=0 && strcmp(goblins,"krod")!=0 && strcmp(goblins,"grorberg")!=0){
      printf("Enter a valid goblin name: ");
      scanf("%s",goblins);
    }
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
    
    if (goblindamage >= structurehealth)
    {
      if (playerinput1 == 1)
      {
        currency[0].barracks = currency[0].barracks + 200;
        currency[0].badges = currency[0].badges + 1;
        printf("\nThe amount of barracks recieved by player 1 : 200");
        printf("\nThe amount of badges received by player 1: 1");
      }
      else if (playerinput1 == 2)
      {
        currency[1].barracks = currency[1].barracks + 200;
        currency[1].badges = currency[1].badges + 1;
        printf("\nThe amount of barracks recieved by player 2 : 200");
        printf("\nThe amount of badges received by player 2: 1");
      }
      else if (playerinput1 == 3)
      {
        currency[2].barracks = currency[2].barracks + 200;
        currency[2].badges = currency[2].badges + 1;
        printf("\nThe amount of barracks recieved by player 3 : 200");
        printf("\nThe amount of badges received by player 3: 1");
      }
      else if (playerinput1 == 4)
      {
        currency[3].barracks = currency[3].barracks + 200;
        currency[3].badges = currency[3].badges + 1;
        printf("\nThe amount of barracks recieved by player 4 : 200");
        printf("\nThe amount of badges received by player 4: 1");
      }
      else if (playerinput1 == 5)
      {
        currency[4].barracks = currency[4].barracks + 200;
        currency[4].badges = currency[4].badges + 1;
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



int d3(int HP, struct currencydata currency[5], int playerinput1)
{
  char choice[3];
  printf("\nPLease enter if you wanna continue with the challenge(yes/no): ");
  scanf("%s",choice);
  if (strcmp(choice,"yes")==0)
  {

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
      currency[0].barracks = currency[0].barracks + 200;
      currency[0].badges = currency[0].badges + 1;
      printf("\nThe amount of barracks recieved by player 1 : 200");
      printf("\nThe amount of badges received by player 1: 1");
    }
    else if (playerinput1 == 2)
    {
      currency[1].barracks = currency[1].barracks + 200;
      currency[1].badges = currency[1].badges + 1;
      printf("\nThe amount of barracks recieved by player 2 : 200");
      printf("\nThe amount of badges received by player 2: 1");
    }
    else if (playerinput1 == 3)
    {
      currency[2].barracks = currency[2].barracks + 200;
      currency[2].badges = currency[2].badges + 1;
      printf("\nThe amount of barracks recieved by player 3 : 200");
      printf("\nThe amount of badges received by player 3: 1");
    }
    else if (playerinput1 == 4)
    {
      currency[3].barracks = currency[3].barracks + 200;
      currency[3].badges = currency[3].badges + 1;
      printf("The amount of barracks recieved by player 4 : 200");
      printf("The amount of badges received by player 4: 1");
    }
    else 
    {
      currency[4].barracks = currency[4].barracks + 200;
      currency[4].badges = currency[4].badges + 1;
      printf("\nThe amount of barracks recieved by player 5 : 200");
      printf("\nThe amount of badges received by player 5: 1");
    }
  }
  else
  {
    printf("\nYou chose not to do this challenge!");
  }
}