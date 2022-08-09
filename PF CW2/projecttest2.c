#include <stdio.h>
#include <stdlib.h>

char movie_name[50];
int movie_code;
char description[100];
int ticket_price;
char date[];
char time[];

char cs_movie_name[50];
int cs_movie_code;
int cs_ticket_price;
char cs_description[];

int sub_choice1;
int sub_choice2;
int sub_choice3;
int sub_choice4;
int sub_choice4_movies;

char customer_name[];
int customer_mobile_number;
int seat_number;
int no_of_tickets;
int ticket_total_price;

int cansel_booking;
int choose_movie;
int book_movie;

int payment1;
int payment2;
int card_number;
int confirmation;
int mobile_payment;


int main(){
  loginpanel();
  return 0;
}




void loginpanel()
{
  int choice;

  {
    printf("\t------Welcome-------\n");
    printf("\tLogin Here\n");
    printf("\t1.Login\n");
    printf("\t2.Booking\n");
    printf("\t3.Exit \n");
    scanf("%d",&choice);


    switch(choice)
    {
       case 1:
       login();
       break;

       case 2:
        customer_menu();
        break;


       case 3:
       printf("\t Thank You Come again.... \n");
       break;

       default:
       printf("Invalid Choice\n");
       return loginpanel();



    }

  }


}

char username[20];
char password[20];
void login()
{
        printf("\t Username : ");
        scanf("%s", &username);

        printf("\t Password : ");
        scanf("%s", &password);

        if (strcmp(username, "a") == 0 && strcmp(password, "a") == 0)
            {
            printf("\t Login Successful\n\n");
            return admin_panel();
            }


        else
          {
          printf("\t login failed! Try again\n");
          return login();
          }


}
//
/*char username[20];
char password[20];
void user()
{
        printf("\tEnter Username :");
        scanf("%s", &username);

        printf("\tEnter Password :");
        scanf("%s", &password);

        if (strcmp(username, "a") == 0 && strcmp(password, "a") == 0)
            {
            printf("\tlogin successful\n");
            return user_panel();
            }

        else
          {
          printf("\tlogin failed Try again !\n");
          return user();
          }
}*/


void admin_panel()
{
        printf("\n\t---ADMIN ACCOUNT---\n");
        printf("\t1. Add Now Showing movie Records \n");
        printf("\t2. Add Upcomming movie Records \n");
        printf("\t3. View User Details \n");
        printf("\t4. Exit to main menu \n");
        scanf("%d", &sub_choice1);


        switch(sub_choice1)
        {
        case 1:
            printf("\n\t*Movie Name :");
            scanf("%s",&movie_name);
            printf("\n\t*Description (Use underscore):");
            scanf("%s",&description);
            printf("\n\t*Showing Date :");
            scanf("%s",&date);
            printf("\n\t*Showing time :");
            scanf("%s",&time);
            printf("\n\t*Ticket Price:");
            scanf("%d",&ticket_price);

            printf("\n\tMovie name : %s \n\tDescription: %s \n\tShowing Date:%s \n\t Showing Time: %s \n\tTicket Price :%d\n",movie_name,description,date,time,ticket_price);

            return admin_panel();
            break;


        case 2:
            printf("\n\t*Movie Name :");
            scanf("%s",&cs_movie_name);
            printf("\n\t*Description :");
            scanf("%s",&cs_description);

            printf("\n\tMovie name : %s \n\tDescription: %s \n",cs_movie_name,cs_description);

            return admin_panel();
        break ;


        case 3:
            return user_details();
        break;

        case 4:
            return loginpanel();
        break;

        default :
            printf("Not valid !");
            return admin_panel();



        }




}

void customer_menu()
{

        printf("\n\t---USER ACCOUNT---\n");
        printf("\t1. Now Showing \n");
        printf("\t2. Coming Soon \n");
        printf("\t3. Buy Tickets \n");
        printf("\t4. My Transactions \n");
        printf("\t5. Exit to main menu \n");
        scanf("%d", &sub_choice2);


        switch(sub_choice2)
        {
        case 1:
            printf("\n\tMovie name : %s \n\tDescription: %s \n\tShowing Date:%s \n\tTime : %s \n\tTicket Price :%d\n",movie_name,description,date,time,ticket_price);
            return nowshowing();
            return customer_menu();
        break;


        case 2:

            printf("\n\tAvengers(2019)");
            printf("\n\tSpiderMan(2019)");
            printf("\n\tIronMan2(2010)");
            printf("\n\t%s\n",cs_movie_name);

            return customer_menu();


        break ;


        case 3:
            return booking();
        break;

        case 4:
            return transaction();
            break;

        case 5:
            return loginpanel();
        break;

        default :
            printf("Not valid !");
            return customer_menu();
        }




}


void booking()
{

		printf("\n\tPlease enter your name: ");
		scanf("%s",&customer_name);
		printf("\tPlease enter your phone number: ");
		scanf("%d",&customer_mobile_number);
		printf("\tEnter no of tickets: ");
		scanf("%d",&no_of_tickets);

        if (no_of_tickets <= 10)
        {
        ticket_total_price = no_of_tickets*ticket_price;

        printf("\n\tName: %s \n\tmobile number: %d \n\tno of tickets: %d \n\tTotal Price %d",customer_name,customer_mobile_number,no_of_tickets,ticket_total_price);
        return customer_menu();
        }


        else
        {
        printf("Error! maximum ticket limit is reached( Maximum is 10)...\n");
        //scanf("%d",&no_of_tickets);
        //return booking();
        return customer_menu();
        }

}



void transaction()
{

        printf("\t1. view Your bookings \n");
        printf("\t2. cancel Your bookings  \n");
        printf("\t3. Exit to main menu \n");
        scanf("%d", &sub_choice3);


        switch(sub_choice3)
        {
        case 1:
            printf("\n\tName: %s \n\tmobile number: %d \n\tno of tickets: %d \n\tTotal Price %d",customer_name,customer_mobile_number,no_of_tickets,ticket_total_price);
            payment_method();
            return transaction();
        break;


        case 2:
            printf("\tYour Transactions");
            printf("\n\tName: %s \n\tmobile number: %d \n\tno of tickets: %d \n\tTotal Price %d",customer_name,customer_mobile_number,no_of_tickets,ticket_total_price);
            printf("\tDo you want to cancel your Booking ?\n");
            printf("\tPress 1-YES \n\t Press 2-NO\n");
            scanf("%d",&cansel_booking);
                      switch(cansel_booking)
                      {
                      case 1:
                        printf("\n\tYour Booking Cancel is successful \n");
                        return transaction();
                        break;

                      case 2:
                        printf("\n\tReturning to Main Menu\n");
                        return customer_menu();
                        break;

                      default :
                        printf("\n\tInvalid Input !\n");
                        return transaction();
                      }

        break ;


        case 3:
            return customer_menu();
        break;

        default :
            printf("Not valid !");
            return transaction();



        }


}
void user_details()
{

   printf("\n\t1.User Details");
   printf("\n\t2.User Transactions");
   scanf("%d",&sub_choice4);

        switch(sub_choice4)
        {
        case 1:
            printf("\n\tUser name: %s \n\tUser mobile number:",customer_name,customer_mobile_number);
            return user_details();
            break;

        case 2:
         printf("\n\tName: %s \n\tmobile number: %d \n\tno of tickets: %d \n\tTotal Price %d",customer_name,customer_mobile_number,no_of_tickets,ticket_total_price);
         return user_details();
         break;

        default:
            printf("\n\tInvalid Input");
            return user_details();

        }


}

 void nowshowing()

{
    printf("\n\tChoose The Movie\n");
    printf("\n\t1.Avatar(2009)\n");
    printf("\n\t2.Interstellar (2014)\n");
    printf("\n\t3.Inception(2010)\n");
    printf("\n\t4.%s\n",movie_name);
    printf("\n\t5. Exit\n");
    scanf("%d",&choose_movie);

       switch(choose_movie)
       {
       case 1:
        printf("\n\t A paraplegic Marine dispatched to the moon Pandora on a unique mission\n\t becomes torn between following his orders and protecting the world he feels is his home.\n");
           printf("\n\tPress 1 to book the movie\n");
           printf("\n\tPress 2 to goback\n");
           scanf("%d",&book_movie);
             switch(book_movie)
             {
             case 1:
                return booking();
                break;

             case 2:
                return nowshowing();
                break;

             case 3:
                return customer_menu();
                break;

             default :
                printf("\n\t Invalid Input");
                return nowshowing();
             }
        break;

       case 2:
        printf("\n\t A team of explorers travel through a wormhole in space in\n an attempt to ensure humanity's survival.\n");
        printf("\n\tPress 1 to book the movie\n");
        printf("\n\tPress 2 to goback\n");
        scanf("%d",&book_movie);
            switch(book_movie)
             {
             case 1:
                return booking();

                break;

             case 2:
                return nowshowing();
                break;

             case 3:
                return customer_menu();
                break;

             default :
                printf("\n\t Invalid Input");
                return nowshowing();
             }
        break;

       case 3:
        printf("\n\t A thief who steals corporate secrets through the use of dream-sharing technology\n\t is given the inverse task of planting an idea into the mind of a C.E.O.\n");
        printf("\n\tPress 1 to book the movie\n");
           printf("\n\tPress 2 to goback\n");
           scanf("%d",&book_movie);
             switch(book_movie)
             {
             case 1:
                return booking();
                break;

             case 2:
                return nowshowing();
                break;

             case 3:
                return customer_menu();
                break;

             default :
                printf("\n\t Invalid Input");
                return nowshowing();
             }
        break;

         case 4:
        printf("\n\t%s",description);
        printf("\n\tPress 1 to book the movie\n");
           printf("\n\tPress 2 to goback\n");
           scanf("%d",&book_movie);
             switch(book_movie)
             {
             case 1:
                return booking();
                break;

             case 2:
                return nowshowing();
                break;

             case 3:
                return customer_menu();
                break;

             default :
                printf("\n\t Invalid Input");
                return nowshowing();
             }
        break;

       case 5 :
           return customer_menu();
           break;

       default :
           printf("\t\n Invalid Input !\n");
        return nowshowing();
       }
}

void payment_method()
{
    printf("\n\tChoose Your payment method \n");
    printf("\n\t1.Visa/Master Card \n\t2.From Mobile Bill");
    scanf("%d",&payment1);

    switch(payment1)
    {
    case 1:
        printf("\n\tEnter your card number :");
        scanf("%d",&card_number);
        printf("\n\tConfirm Your Number :");
        printf("\n\tPress 1 to Confirm \n\tPress 2 to Decline");
        scanf("%d",&confirmation);

           switch(confirmation)

           {
            case 1:
            printf("\n\tYour Payment Successful \n");
            return customer_menu();
            break;

            case 2:
            printf("\n\tYour payment Declined \n");
            return payment_method();
            break;

            case 3:
            return customer_menu();
            break;

            default :
            printf("\n\t Invalid Input \n");

           }

    case 2:
         printf("\n\t Enter Your Mobile Number : ");
         scanf("%d",&mobile_payment);
         printf("\n\tConfirm Your Number : ");
         printf("\n\tPress 1 to Confirm \n\tPress 2 to Decline");
         scanf("%d",&confirmation);

           switch(confirmation)

           {
           case 1:
            printf("\n\tYour Payment Successful \n");
            return customer_menu();
            break;

           case 2:
            printf("\n\tYour payment Declined \n");
            return payment_method();
            break;

            case 3:
            return customer_menu();
            break;

            default :
            printf("\n\t Invalid Input");


         }

        case 3:
            return customer_menu();
            break;


        default:
            printf("\n\tInvalid Login");


    }



}

