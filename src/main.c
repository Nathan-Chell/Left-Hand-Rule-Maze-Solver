#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cords
{
	int x;
	int y;
};

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

char read_file(char* path, char* arr){
	
	char file_contents[10000][10];
	char line[2]; /* Line is of size 2, thus the maximum size of the total board is 99 x 99*/
	FILE *filePointer; 
	char temp_str[10];
	int counter = 0, i, j;

	filePointer = fopen(path, "r");
	
	if(filePointer == NULL)
	{
		printf("Error, cannot open file.");
		exit(1);
	}
	
	while(fscanf(filePointer, "%s", &line) != EOF){
		if (i < 3){
			strcat(temp_str, line);
			i++;
		}else{
			printf("%s", temp_str);
			i = 0;
			counter++;
			/*file_contents[counter] = temp_str;*/
			strncpy(temp_str, file_contents[counter], 10);
			temp_str[0] = "\0";
		}
	}
	
	/*
	for (i=0; i < (sizeof(file_contents) / sizeof(file_contents[0])); i++){
		printf("%c", &file_contents[i]);
	};
	*/
	
}

int main(int argc, char *argv[]) {
	
	char Board[20][40];
	char path[] = "../Data/maze.txt";
	
	read_file(path, Board);
	return 0;
}
