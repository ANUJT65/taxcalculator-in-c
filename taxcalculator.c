#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do

{

    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  LOGIN FORM  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\   ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                  ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"R12")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO TAX CALCULATION SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();//holds the screen

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");

    int sal,choice;float tax;
    float p,r,t,n,si,ci,cot,gst,cgst,sgst,vat,customs,tt2,tt,tt5,gross_income,allowable_deductions,taxable_income,tax_rate,tax_owed,transaction_amount, gst_amount, cgst_amount, sgst_amount;
    float amount, vat_rate, vat_amount, total,gst_rate;
    while(true)
    {




        printf("1) OLD INCOME TAX REGIME\n");
        printf("2) SIMPLE INTEREST\n");
        printf("3) COMPOUND INTEREST\n");
        printf("4) TOTAL AMOUNT OF SIMPLE INTEREST AND COMPOUND INTEREST\n");
        printf("5) CORPORATE TAX\n");
        printf("6) VAT\n");
        printf("7) Customs\n");
        printf("8) NEW INCOME TAX REGIME \n");
        printf("9) GST\n");

        printf("13) Quit\n");

        printf("ENTER CHOICE ");
        scanf("%d",&choice);
       switch(choice)
    { getch();

    case 1: printf("INCOME TAX\n");
        printf("income tax� refers to a type of tax that governments impose on income generated by businesses and individuals within their jurisdiction\n");
        printf("enter amount to calculate taxes \n");
        system("COLOR 5B");

	getch();
        float sal, tax;
    printf("Enter your income: ");
    scanf("%f", &sal);

    if (sal <= 500000) {
        tax = 0;
    }
    else if (sal > 500000 && sal <= 1000000) {
        tax = 500000 * 0.05;
    }
    else if (sal > 1000000 && sal <= 1500000) {
        tax = 500000 * 0.05 + (1000000) * 0.1;
    }
    else {
        tax = 500000 * 0.05 + (1000000) * 0.1 + (1500000) * 0.3;
    }

    printf("Your income tax is: %.2f\n", tax);

     break;

case 2: printf("SIMPLE INTEREST CALCULATOR\n");
printf(". Simple interest is based on the principal amount of a loan or deposit. In contrast, compound interest is based on the principal amount and the interest that accumulates on it in every period.");
system("COLOR 0E");

float principle, rate, time, interest;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = (p* r * t) / 100;
    printf("Simple interest is: %.2f\n", si);
printf("THE SIMPLE INTEREST IS= %f\n",si);
break;

case 3: printf("COMPOUND INTEREST CALCULATOR\n");
system("COLOR 5B");
    int n;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
     ci =p*(pow(1+r/100,t)-1);
    printf("Compound interest is: %.2f\n", ci);
    break;

case 4: printf("TOTAL AMOUNT OF SIMPLE INTEREST AND COMPOUND INTEREST\n");


printf(". Simple interest is based on the principal amount of a loan or deposit. In contrast, compound interest is based on the principal amount and the interest that accumulates on it in every period.");
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    ci =p*(pow(1+r/100,t)-1);
    tt=p+si+ci;
printf("THE SIMPLE INTEREST IS= %f\n",si);
printf("the compound interest is=%f\n",ci);
printf("Your total amount is =\n %f\n",tt);
 system("COLOR 0E");

break;

case 5: printf("CORPORATE TAX\n");
printf("A corporate tax is a tax on the profits of a corporation. The taxes are paid on a company's taxable income:\n");
     float gross_income, allowable_deductions, taxable_income, tax_rate, tax_owed;

   printf("Enter the gross income of the corporation: ");
   scanf("%f", &gross_income);
   printf("Enter the allowable deductions: ");
   scanf("%f", &allowable_deductions);

   // Calculate taxable income
   taxable_income = gross_income - allowable_deductions;

   // Calculate tax rate based on taxable income
   if (taxable_income < 1000000) {
       tax_rate = 0.10;
   } else if (taxable_income >= 1000000 && taxable_income < 5000000) {
       tax_rate = 0.15;
   } else {
       tax_rate = 0.20;
   }

   // Calculate tax owed
   tax_owed = taxable_income * tax_rate;

   // Print out tax owed
   printf("The corporation's taxable income is: %f\n", taxable_income);
   printf("The tax rate for the corporation is: %f\n", tax_rate);
   printf("The corporation owes %f in taxes.\n", tax_owed);
    system("COLOR 5B");


break;



case 6: printf("HIGHER VAT RATE\n");
printf("The amount of VAT the user pays is based on the cost of the product minus any costs of materials in the product that have already been taxed at a previous stage.\n");
printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("Enter the VAT rate: ");
    scanf("%f", &vat_rate);

    vat_amount = amount * (vat_rate / 100);
    total = amount + vat_amount;

    printf("Amount: $%.2f\n", amount);
    printf("VAT Rate: %.2f%%\n", vat_rate);
    printf("VAT Amount: $%.2f\n", vat_amount);
    printf("Total: $%.2f\n", total);
     system("COLOR 0E");


break;
case 7: printf("CUSTOMS\n");
printf("Customs duty refers to the tax imposed on goods when they are transported across international borders. In simple terms, it is the tax that is levied on import and export of goods.\n");
printf("enter the price of goods=\n");
    scanf("%f",&p);
    customs=p*0.01;
     printf("customs is =%f\n",customs);
     tt5=customs+p;
     printf("your total amount is %f",tt5);
     break;
    case 8: printf("NEW TAX REGIME\n");
    printf("Enter your income: ");
    scanf("%f", &sal);

    if (sal <= 700000) {
        tax = 0;
    }
    else if (sal > 700000 && sal <= 1000000) {
        tax = 700000 * 0.05;
    }
    else if (sal > 1000000 && sal <= 1500000) {
        tax = 700000 * 0.05 + (1000000) * 0.1;
    }
    else {
        tax = 700000 * 0.05 + (1000000) * 0.1 + (1500000) * 0.3;
    }

    printf("Your income tax is: %.2f\n", tax);
     system("COLOR 5B");

    break;
    case 9: printf("GST\n");
printf("Goods and Service Tax (GST) in payment transaction\n");
printf("enter choice of rate\n");
printf("10:GST RATE IS 18 PERCENT\n");
printf("11:GST RATE IS 12 PERCENT\n");
printf("12:GST RATE IS 5 PERCENT\n");
scanf("%d",&choice);
 if (choice == 10) { printf("rate is 18 percent\n");
printf("Enter the transaction amount: \n");
   scanf("%f", &transaction_amount);
 gst_rate=0.18;
   // Calculate GST amount
   gst_amount = transaction_amount *gst_rate;

   // Split GST amount into CGST and SGST amounts
   cgst_amount = gst_amount / 2;
   sgst_amount = gst_amount / 2;
   tt2= transaction_amount+gst_amount;

   // Print out GST, CGST, and SGST amounts
   printf("Transaction Amount: %f\n", transaction_amount);
   printf("GST Amount: %f\n", gst_amount);
   printf("CGST Amount: %f\n", cgst_amount);
   printf("SGST Amount: %f\n", sgst_amount);
   printf("Your total amount with GST is =\n %f\n",tt2);
    system("COLOR 0E");

   break;

    }
    if (choice ==11) {  printf("rate is 12 percent");
printf("Enter the transaction amount: ");
   scanf("%f", &transaction_amount);
float gst_rate2=0.12;
   // Calculate GST amount
   float gst_amount2 = transaction_amount* gst_rate2;

   // Split GST amount into CGST and SGST amounts
   float cgst_amount2 = gst_amount2 / 2;
   float sgst_amount2 = gst_amount2 / 2;
  float tt3= transaction_amount+gst_amount2;

   // Print out GST, CGST, and SGST amounts
   printf("Transaction Amount: %f\n", transaction_amount);
   printf("GST Amount: %f\n", gst_amount2);
   printf("CGST Amount: %f\n", cgst_amount2);
   printf("SGST Amount: %f\n", sgst_amount2);
   printf("Your total amount with GST is =\n %f\n",tt3);
    system("COLOR 5B");



   break;
    }
      if (choice ==12) {  printf("rate is 5 percent");
printf("Enter the transaction amount: ");
   scanf("%f", &transaction_amount);
float gst_rate3=0.05;
   // Calculate GST amount
   float gst_amount3 = transaction_amount* gst_rate3;

   // Split GST amount into CGST and SGST amounts
   float cgst_amount3 = gst_amount3 / 2;
   float sgst_amount3 = gst_amount3 / 2;
  float tt4= transaction_amount+gst_amount3;

   // Print out GST, CGST, and SGST amounts
   printf("Transaction Amount: %f\n", transaction_amount);
   printf("GST Amount: %f\n", gst_amount3);
   printf("CGST Amount: %f\n", cgst_amount3);
   printf("SGST Amount: %f\n", sgst_amount3);
   printf("Your total amount with GST is =\n %f\n",tt4);
    system("COLOR 0E");



   break;
    }




case 13: exit(0);


break;

return 0;}

    }
}
int main()
{
	login();
	system("COLOR 0A");
	printf("Process Done");
	getch();

	system("cls");
	system("COLOR E2");

	system("cls");
    d_mainmenu();
    system("COLOR 2B");



    return 0;
}



void d_mainmenu(){
}
