#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char data[40];
    FILE* myfile;
    //create a new file
    myfile = fopen("data.txt","w");
    fclose(myfile);

    // writting data to file
    myfile = fopen("data.txt","w");
    fprintf(myfile,"%s","This data file\n");
    fclose(myfile);

    myfile = fopen("data.txt","r");
    // fscanf(myfile,"%s",data);
    while(fgets(data,40,myfile)){
        printf("%s",data);
    }
    fclose(myfile);
    
    return 0;
}
