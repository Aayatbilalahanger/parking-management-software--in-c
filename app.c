//author : aayat bilal
// purpose : simpilify parking management 
// date : 2023- 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void bus();
void cycle();
void riksha();
int Menu();
void showdata();
void delete();
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;
void main()
{
    while (1)
    {
        switch (Menu())
        {
        case 1:
            bus();
            break;
        case 2:
            cycle();
            break;
        case 3:
            riksha();
            break;
        case 4:
            showdata();
            break;
        case 5:
            delete ();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("invalid choice");
        }
    }
}
int Menu()
{
    int ch;
    printf("1.enter bus\n");
    printf("2.enter cycle\n");
    printf("3.riksha\n");
    printf("4.show status\n");
    printf("5.delete data\n");
    printf("7.exit\n");
    printf("6.enter your choice\n");
    scanf("%d", &ch);
    return (ch);
}
void delete()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
}
void showdata()
{
    printf("no of bus = %d\n", nob);
    printf("no of cycle =  %d\n", noc);
    printf("no ofriksha  %d\n", nor);
    printf("total amount vichle is %d\n", count);
    printf("total gain amount = %d\n", amount);
}
void riksha()
{
    printf("entery sucessfull\n");
    nor++;
    amount = amount + 50;
    count++;
}
void cycle()
{
    printf("entery sucessfull\n");

    noc++;
    amount = amount + 20;
    count++;
}
void bus()
{
    printf("entery sucessfull\n");

    nob++;
    amount = amount + 100;
    count++;
}