#include <stdio.h>
#include <string.h>

int main(){
    FILE *archive;
    char content[1000] = "", content_archive[100];

    system("cls");

    archive = fopen("test.txt", "r");

    if(archive == NULL){
        printf("\nFile opening failed.\n");

        fclose(archive);
        exit(0);
    }else{
        while(fgets(content_archive, 100, archive))
            strcat(content, content_archive);
        
        printf(content);
    }

    printf("\n\nPressione ENTER para sair...");

    getch();

    fclose(archive);
    return 0;
}