#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cords
{
	int x;
	int y;
}

/*void display(struct cords c);

void display(struct cords c, char* arr){
	int i, j;
	for (i; i < sizeof(arr); i++){
		for (j; j < sizeof(arr); j++){
			
			printf("%d", arr[i][j]);
		}
	}
}

*/

char read_file(char* path, char* arr)
{
	
	char file_contents[100];
	char * pch;
	int i;
	FILE *filePointer; 

	filePointer = fopen(path, "r");
	
	if(filePointer == NULL)
	{
		printf("Error, cannot open file.");
		exit(1);
	}
	
	fscanf(filePointer, "%s", &file_contents);
	fclose(filePointer);
	
	for(i; i < sizeof(file_contents); i++){
		pch = strtok (file_contents, " ");
		while(pch != NULL)
		{
			printf("%s\n", pch)	;
		}
	}	
}

int main(int argc, char *argv[]) {
	
	char Board[20][40];
	char path[] = "./maze.txt";
	
	read_file(path, Board);
	return 0;
}
