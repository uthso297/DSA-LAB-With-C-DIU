#include <stdio.h>

struct User
{
    int data;
    struct User *link;
};

int main()
{
    struct User user1;
    struct User user2;
    printf("%d\n", sizeof(user1.data));
    printf("%d\n", sizeof(user1.link));

    printf("%d\n", sizeof(user1));

    printf("%p\n", &user1);
    printf("%p\n", &user2);
    return 0;
}