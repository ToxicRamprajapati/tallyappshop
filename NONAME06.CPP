#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int price, gst, total=0;
clrscr();
printf("\n Billig softwer for shop = Simpal shop\n");
printf("\n =====================================\n");
printf("\n Enter the Name of the item :");
scanf("%s",&a);
printf("\n Enter the price of the item :");
scanf("%d",&price);
gst =((price/100)*18);
total =price+gst;
printf("\n\n Tinku Prajapati Ram coffee shop\n\n");
printf("\n=================================\n");
printf("\n ITEM PRICE GST TOTAL\n");
printf("\n%s  %d  %d  %d\n",a,price,gst,total);
printf("\n==============================\n");
printf("\n Thank you! Do Visit Again \n");
getch();
}

