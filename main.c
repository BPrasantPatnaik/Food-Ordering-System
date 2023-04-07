#include <stdio.h>
#include <stdlib.h>

int pos[5]={40,40,60,70,60};
     char sand[5][30]={"Veg Sandwich        ",
                      "Cheese Sandwich     ",
                      "Paneer Sandwich     ",
                      "Chicken Sandwich    ",
                      "chocolate Sandwich  "};

 int pob[5]={60,70,60,90,80};
     char brg[5][30]={"Aloo Tikka          ",
                      "Egg Burger          ",
                      "Veg Burger          ",
                      "Chicken Burger      ",
                      "Paneer Burger       "};

int pop[5]={80,110,130,130,120};
     char piz[5][30]={"Veg pizza           ",
                      "Paneer pizza        ",
                      "Baby corn pizza     ",
                      "Chicken pizza       ",
                      "Mushroom pizza      "};

int pon[5]={50,70,60,80,80};
     char nod[5][30]={"Veg noodles         ",
                      "Paneer noodles      ",
                      "Egg noodles         ",
                      "Chicken egg noodles ",
                      "Paneer egg noodles  "};

int poc[5]={70,60,60,70,50};
     char cr[5][30]={"Chicken chilli      ",
                      "Mushroom chilli     ",
                      "Paneer roll         ",
                      "Chicken roll        ",
                      "Egg roll            "};
int por[5]={70,180,110,90,80};
     char ri[5][30]={"Veg fried rice      ",
                      "Chicken dum biriyani",
                      "Paneer fried rice   ",
                      "shezwaan rice       ",
                      "Paneer rice         "};

void main()
{
    int sum=0;
    int a[20][4],items=0;
    int choice=0,code=0,quantity=0;
    int check=1;
    menu();
    while(check)
     {
       items++;

       printf("\n\n                Your category no. :");
       scanf("%d",&choice);
       printf("                Food code :");
       scanf("%d",&code);
       while(code>5||code<0)
               {
                printf("                Invalid entry enter again:");
                scanf("%d",&code);
               }
       printf("                Quantity :");
       scanf("%d",&quantity);

       int ai=items-1;//Array index
       a[ai][0]=choice;//Category like burger,pizza
       a[ai][1]=code-1;//food code
       a[ai][2]=quantity;
       a[ai][3]=customize(choice);
       printf("\nPress 1 to add more items or press 0 to get bill\n");
       scanf("%d",&check);
     }
     printf("\n\n                                             BILL\n");
     printf("                                             ~~~~\n\n\n");
     printf("-------------------------------------------------------------------------------------------\n");
     printf("Item Description \t\t Base Price \t Qty \t Customizations \t Net Price\n");
     printf("-------------------------------------------------------------------------------------------\n");
     for(int m=0;m<items;m++)
     {
         int out=bill(a,m);
      sum=sum+out;
     }
     float gst=0.05*sum;
     float total=sum+gst;
     printf("\nGST:5(percent) \t\t\t\t\t\t\t\t\t%f\n",gst);
     printf("-------------------------------------------------------------------------------------------\n");
     printf("Total Amount     \t\t\t\t\t\t\t\t%f\n",total);
}


void menu()
{
     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     printf("|WELCOME TO DOSTI RESTAURANT| \n");
     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

     int code,quantity;
     printf("MENU:\n");//SHOWING MENU CARD.
     printf("-----\n\n");
     printf("1. SANDWICHES\n");

      for(int i=0;i<5;i++)//Printing the diff. sandwiches
        {
          int c=i+1;
          printf("     * %s       %d|(CODE:%d)\n",sand[i],pos[i],c);

        }

     printf("2. BURGERS\n");

      for(int i=0;i<5;i++)
        {
          int c=i+1;
          printf("     * %s       %d|(CODE:%d)\n",brg[i],pob[i],c);

         }

      printf("3. PIZZAS\n");
        for(int i=0;i<5;i++)
        {
          int c=i+1;
          printf("     * %s       %d|(CODE:%d)\n",piz[i],pop[i],c);

         }

       printf("4. NOODLES\n");
         for(int i=0;i<5;i++)
          {
            int c=i+1;
            printf("     * %s       %d|(CODE:%d)\n",nod[i],pon[i],c);

           }
        printf("5. CHILLI & ROLLS\n");
             for(int i=0;i<5;i++)
              {
               int c=i+1;
               printf("     * %s       %d|(CODE:%d)\n",cr[i],poc[i],c);

              }
         printf("6. RICE\n\n");
             for(int i=0;i<5;i++)
              {
               int c=i+1;
               printf("     * %s       %d|(CODE:%d)\n",ri[i],por[i],c);

              }
}



int customize(int arr)
{

    printf("\n\n");
    int t=0,order=0;
    int dish=arr;
    char sandwich[][20]={"Cheese slices","Mushrooms","Chocolate sauce","Mayonnaise"};
    char burger[][20]={"Onions","Mayonnaise","Cheese slices","Tomato slices"};
    char pizza[][20]={"Mushrooms","Oregano","Cheese slices","Chilli flakes"};
    char Noodles[][20]={"Oregano","Onions","cheese","mushrooms"};
    char Chilli_Rolls[][20]={"Paneer","Cheese slics"};
    char Rice[][20]={"Curd","Chicken curry"};



    switch(dish)
     {
      case 1:
       {
          printf("........................................\n");
          printf("|Toppings for your sandwich(Each=20/-) :\n");
          printf("|______________________________________:\n");
          for(int i=1;i<5;i++)//Printing the toppings
           {
                int m=i-1;
                printf("|%d.%s  \n",i,sandwich[m]);
           }
          printf("|\n");
          printf("|Press 0 if you don't want any toppings:\n");
          printf("|.......................................\n\n");
          printf("How many toppings you want :");
          scanf("%d",&t);
          while(t>4||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
          if(t!=0)
           {

            printf("\nPress topping's serial:\n");
            for(int i=0;i<t;i++)
             {
              int choice=0;
              scanf("%d",&choice);
              while(choice>4||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
             }
           }

          break;
      }
    case 2:
     {
        printf("........................................\n");
        printf("|Toppings for your burger(Each=20/-)   :\n");
        printf("________________________________________\n");
        for(int i=1;i<5;i++)//Printing the toppings
         {
          int m=i-1;
          printf("|%d.%s \n",i,burger[m]);
         }
         printf("|\n");
        printf("|Press 0 if you don't want any toppings:\n");
        printf("........................................\n\n");
        printf("How many toppings you want :");
        scanf("%d",&t);
        while(t>4||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
         if(t!=0)
          {
           printf("Press topping's serial:\n");
           for(int i=0;i<t;i++)
            {
             int choice=0;
             scanf("%d",&choice);
             while(choice>4||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
            }
          }

        break;
     }
     case 3:
     {
        printf("........................................\n");
        printf("|Toppings for your pizza(Each=20/-)    :\n");
        printf("|______________________________________:\n");
        for(int i=1;i<5;i++)
        {
          int m=i-1;
          printf("|%d.%s \n",i,pizza[m]);
        }
        printf("|\n");
        printf("|Press 0 if you don't want any toppings:\n");
        printf("|......................................\n\n");
        printf("How many toppings you want :");
        scanf("%d",&t);
        while(t>4||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
        if(t!=0)
        {

          printf("Press topping's serial:\n");
          for(int i=0;i<t;i++)
           {
            int choice=0;
            scanf("%d",&choice);
             while(choice>4||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
           }
        }
          break;
     }
     case 4:
     {
        printf("........................................\n");
        printf("|Toppings for your Noodles(Each=20/-)  :\n");
        printf("|______________________________________:\n");
        for(int i=1;i<5;i++)
        {
          int m=i-1;
          printf("|%d.%s \n",i,Noodles[m]);
        }
        printf("|\n");
        printf("|Press 0 if you don't want any toppings:\n");
        printf("|.......................................\n\n");
        printf("How many toppings you want :");
        scanf("%d",&t);
        while(t>4||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
         if(t!=0)
          {
           printf("Press topping's serial:\n");
           for(int i=0;i<t;i++)
            {
             int choice=0;
             scanf("%d",&choice);
             while(choice>4||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
            }
          }

          break;
     }
     case 5:
     {
        printf("..............................................\n");
        printf("|Toppings for your Chilli & Rolls(Each=20/-) :\n");
        printf("|____________________________________________:\n");
        for(int i=1;i<3;i++)
        {
          int m=i-1;
          printf("|%d.%s \n",i,Chilli_Rolls[m]);
        }
        printf("|\n");
        printf("|Press 0 if you don't want any toppings    :\n");
        printf("|...........................................\n\n");
        printf("How many toppings you want :");
        scanf("%d",&t);
        while(t>2||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
         if(t!=0)
         {
          printf("Press topping's serial:\n");
          for(int i=0;i<t;i++)
           {
            int choice=0;
            scanf("%d",&choice);
            while(choice>2||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
            }
          }


         break;
     }
     case 6:
     {
        printf("....................................\n");
        printf("|Toppings for your Rice(Each=20/-) :\n");
        printf("|__________________________________:\n");
        for(int i=1;i<3;i++)
        {
          int m=i-1;
          printf("|%d.%s \n",i,Rice[m]);
        }
        printf("|\n");
        printf("|Press 0 if you don't want any toppings:\n");
        printf("|.......................................\n\n");
        printf("How many toppings you want :");
        scanf("%d",&t);
        while(t>2||t<0)
          {
              printf("Invalid entry enter again:");
              scanf("%d",&t);
          }
         if(t!=0)
         {
          printf("Press topping's serial:\n");
          for(int i=0;i<t;i++)
           {
            int choice=0;
            scanf("%d",&choice);
            while(choice>2||choice<0)
               {
                printf("Invalid entry enter again:");
                scanf("%d",&choice);
               }
           }
         }
          break;
     }

     default:
     {
         printf("Invalid");
     }




   }
    return t;
}

int bill(int bill[][4],int m)
{

    int n=bill[m][0];
    switch(n)
    {
    case 1:
        {
            int cprice=0;
            int custom=bill[m][3];
            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=pos[item]+cprice;
            int net=price*quantity;
            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",sand[item],pos[item],quantity,custom,net);
             return(net);
            break;
        }
    case 2:
        {
             int cprice=0;
            int custom=bill[m][3];
            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=pob[item]+cprice;
            int net=price*quantity;

            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",brg[item],pob[item],quantity,custom,net);
             return(net);
            break;
        }
    case 3:
        {
             int cprice=0;
            int custom=bill[m][3];
            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=pop[item]+cprice;
            int net=price*quantity;

            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",piz[item],pop[item],quantity,custom,net);
             return(net);
            break;
        }
    case 4:
        {
             int cprice=0;
            int custom=bill[m][3];
            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=pon[item]+cprice;
            int net=price*quantity;

            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",nod[item],pon[item],quantity,custom,net);
             return(net);
            break;
        }
    case 5:
        {
             int cprice=0;
            int custom=bill[m][3];
            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=poc[item]+cprice;
            int net=price*quantity;

            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",cr[item],poc[item],quantity,custom,net);
             return(net);
            break;
        }
    case 6:
        {
             int cprice=0;
            int custom=bill[m][3];

            cprice=custom*20;
            int item=bill[m][1];
            int quantity=bill[m][2];
            int price=por[item]+cprice;
            int net=price*quantity;

            printf("%s \t\t     %d \t  %d \t\t%d \t\t    %d\n",ri[item],por[item],quantity,custom,net);
            return(net);
            break;
        }

    }
  }

