#include <stdio.h>
#include <stdbool.h>

int main()
{
	int p1move1 = 0;
	int p1move2 = 0;
	int p2move1 = 0;
	int p2move2 = 0;
	int i,j;
	bool game = true;
	char spaces[3][3];
	char takenSpaces[3][3];
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
            	{
			spaces[i][j] = '_';
			printf("%c ", spaces[i][j]);
            	}
		printf("\n");
        }
        
    	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
            	{
			takenSpaces[i][j] = '_';
            	}
            	printf("\n");
        }
	while(game)
	{
		printf("player one's move: ");
		scanf("%d %d", &p1move1, &p1move2);
		if(p1move1 > 2 || p1move2 > 2 || p1move1 < 0 || p1move2 < 0)
		{
		    	printf("please enter 2 numbers from 0-2 ");
		    	scanf("%d %d", &p1move1, &p1move2);
		}
	
		if(takenSpaces[p1move1][p1move2] != 'X' && takenSpaces[p1move1][p1move2] != 'O' )
		{
		    	takenSpaces[p1move1][p1move2] = 'X';
		    	spaces[p1move1][p1move2] = 'X';
		}
		else
		{
		   	printf("that space is already taken, please choose another one ");
		   	scanf("%d %d", &p1move1, &p1move2);
			spaces[p1move1][p1move2] = 'X';
			takenSpaces[p1move1][p1move2] = 'X';
		}

	    	for (i = 0; i < 3; i++) 
		{
			for (j = 0; j < 3; j++) 
            		{
				printf("%c ", spaces[i][j]);
            		}
            		printf("\n");
        		}
        		int count = 0;
        		for(i = 0; i < 3; i++)
        		{
			for( j = 0; j<3; j++)
            		{
				if(takenSpaces[i][j] == 'X'|| takenSpaces[i][j] == 'O')
                			{
					count += 1;
                   			if(count == 9)
                    			{
						printf("game over, it's a tie!");
                        				break;
                    			}
                			}
            		}
       	 	}
		if( takenSpaces[0][0] == 'X' && takenSpaces[0][1] == 'X' && takenSpaces[0][2] == 'X' || takenSpaces[1][0] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[1][2] == 'X' ||takenSpaces[2][0] == 'X' && takenSpaces[2][1] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][0] == 'X' && takenSpaces[1][0] == 'X' && takenSpaces[2][0] == 'X' || takenSpaces[0][1] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][1] == 'X' || takenSpaces[0][2] == 'X' && takenSpaces[1][2] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][0] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][2] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][0] == 'X')
        		{
            		printf("player 1 won the game!");
            		game = false;
            		break;
            
        		}
        
        		if( takenSpaces[0][0] == 'O' && takenSpaces[0][1] == 'O' && takenSpaces[0][2] == 'O' || takenSpaces[1][0] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[1][2] == 'O' ||takenSpaces[2][0] == 'O' && takenSpaces[2][1] == 'O' && takenSpaces[2][2] == 'O' ||takenSpaces[0][0] == 'O' && takenSpaces[1][0] == 'O' && takenSpaces[2][0] == 'O' || takenSpaces[0][1] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][1] == 'O' || takenSpaces[0][2] == 'O' && takenSpaces[1][2] == 'O' && takenSpaces[2][2] == 'O' || takenSpaces[0][0] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][2] == 'O' || takenSpaces[0][2] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][0] == 'O')
        		{
            		printf("player 2 won the game!");
            		game = false;
            		break;
            
        		}
		printf("player two's move: ");
		scanf("%d %d", &p2move1, &p2move2);
		if(p2move1 > 2 || p2move2 > 2 || p2move1 < 0 || p2move2 < 0)
		{
			printf("please enter 2 numbers from 0-2 ");
			scanf("%d %d", &p2move1, &p2move2);
		}
		if(takenSpaces[p2move1][p2move2] != 'O' && takenSpaces[p2move1][p2move2] != 'X')
		{
		   	takenSpaces[p2move1][p2move2] = 'O';
		   	spaces[p2move1][p2move2] = 'O';
		}
		else
		{
		    	printf("that space is already taken, please choose another one ");
		    	scanf("%d %d", &p2move1, &p2move2);
		    	takenSpaces[p2move1][p2move2] = 'O';
		    	spaces[p2move1][p2move2] = 'O';
		}
	    	for (i = 0; i < 3; i++) 
		{
			for (j = 0; j < 3; j++) 
            		{
				printf("%c ", spaces[i][j]);
            		}
            		printf("\n");
        		}
        
        		if( takenSpaces[0][0] == 'X' && takenSpaces[0][1] == 'X' && takenSpaces[0][2] == 'X' || takenSpaces[1][0] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[1][2] == 'X' ||takenSpaces[2][0] == 'X' && takenSpaces[2][1] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][0] == 'X' && takenSpaces[1][0] == 'X' && takenSpaces[2][0] == 'X' || takenSpaces[0][1] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][1] == 'X' || takenSpaces[0][2] == 'X' && takenSpaces[1][2] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][0] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][2] == 'X' || takenSpaces[0][2] == 'X' && takenSpaces[1][1] == 'X' && takenSpaces[2][0] == 'X')
        		{
            		printf("player 1 won the game!");
            		game = false;
            		break;
            
        		}
        
        		if( takenSpaces[0][0] == 'O' && takenSpaces[0][1] == 'O' && takenSpaces[0][2] == 'O' || takenSpaces[1][0] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[1][2] == 'O' ||takenSpaces[2][0] == 'O' && takenSpaces[2][1] == 'O' && takenSpaces[2][2] == 'O' ||takenSpaces[0][0] == 'O' && takenSpaces[1][0] == 'O' && takenSpaces[2][0] == 'O' || takenSpaces[0][1] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][1] == 'O' || takenSpaces[0][2] == 'O' && takenSpaces[1][2] == 'O' && takenSpaces[2][2] == 'O' || takenSpaces[0][0] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][2] == 'O' || takenSpaces[0][2] == 'O' && takenSpaces[1][1] == 'O' && takenSpaces[2][0] == 'O')
        		{
            		printf("player 2 won the game!");
            		game = false;
            		break;
            
        		}
       		count = 0;
        		for(i = 0; i < 3; i++)
        		{
            		for( j = 0; j<3; j++)
            		{
				if(takenSpaces[i][j] == 'X'|| takenSpaces[i][j] == 'O')
                			{
                    			count += 1;
                    			if(count == 9)
                    			{
                       				printf("game over, it's a tie!");
                        				break;
                    			}
                			}
            		}
        		}
	}
}
