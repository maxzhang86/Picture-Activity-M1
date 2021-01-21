#include <stdio.h>

int main()
{
    char adjective1[250];
    char adjective2[230];
    char adjective3[210];
    char adjective4[190];
    char adjective5[170];
    printf("Input adjectives\n");
    scanf("%s",adjective1);
    printf("Input adjective2 ending in ily \n");
    scanf("%s", adjective2);
    printf("Input adjective3 ending in ily \n");
    scanf("%s", adjective3);
    printf("Input adjective4\n");
    scanf("%s", adjective4);
    printf("Input adjective5\n");
    scanf("%s", adjective5);
    printf("You are a %s person\n", adjective1);
    printf("Every morning you %s get out of bed and %s eat your %s breakfast\n", adjective2, adjective3, adjective4);
    printf("You think that school is %s very passionately", adjective5);
    
    return 0;
}
