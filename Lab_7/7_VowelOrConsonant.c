#include <stdio.h>

int main() {
    char wow;
    printf("Enter a character: ");
    scanf("%c", &wow);
    if (wow == 'a' || wow == 'A' || wow=='e'|| wow=='E'|| wow=='i'|| wow=='I'|| wow=='o'|| wow=='O'|| wow=='u'|| wow=='U')
    {
        printf("The character %c is a vowel.",wow);
    }
    if(!(wow == 'a' || wow == 'A' || wow=='e'|| wow=='E'|| wow=='i'|| wow=='I'|| wow=='o'|| wow=='O'|| wow=='u'|| wow=='U'))
    {
        printf("The character %c is a consonant.",wow);
    }
    return 0;
}