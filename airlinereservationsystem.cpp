#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();


class Management
{
    public:

        Management()
        {
            mainMenu();
        }
};


class Details
{
    public:

        static string name,gender;
        int PhoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer Id";
            cin>>cId;
            cout<<"\n Enter the name";
            cin>>name;
            cout<<"\nEnter the age";
            cin>>age;
            cout<<"\nAddress : ";
            cin>>add;
            cout<<"\n Gender : ";
            cin>>gender;
            cout<<"Your details are saved with us \n"<<endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};

            for(int a=0;a<6;a++){
                cout<<(a+1)<<".flght to "<<flightN[a]<<endl;
            }

            cout<< "\nWelcome to the Airlines : "<<endl;
            cout<<"Press the number of the country of which you want to book the flight : ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"_______________________Welcome to Dubai Emirates________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-01-2026  8:00AM 10hrs Rs.15000"<<endl;
                    cout<<"1. DUB - 658"<<endl;
                    cout<<"\t09-01-2026  4:00AM 11hrs Rs.10000"<<endl;
                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t10-01-2026  11:00AM 12hrs Rs.5000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==14000;
                        cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges==10000;
                        cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges==5000;
                        cout<<"\n You have successfully booked the flight DUB - 558"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }



                case 2:
                {
                    cout<<"_______________________Welcome to Canadian Airlines________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. CA - 198"<<endl;
                    cout<<"\t18-01-2026  2:00PM 20hrs Rs.34000"<<endl;
                    cout<<"1. CA - 158"<<endl;
                    cout<<"\t19-01-2026  6:00PM 23hrs Rs.25000"<<endl;
                    cout<<"1. CA - 298"<<endl;
                    cout<<"\t21-01-2026  12:00AM 21hrs Rs.40000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==34000;
                        cout<<"\n You have successfully booked the flight CA - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges==25000;
                        cout<<"\n You have successfully booked the flight CA - 158"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges==40000;
                        cout<<"\n You have successfully booked the flight CA - 298"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                
                case 3:
                {
                    cout<<"_______________________Welcome to UK Airways________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. UK - 798"<<endl;
                    cout<<"\t12-01-2026  12:00PM 14hrs Rs.44000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==44000;
                        cout<<"\n You have successfully booked the flight UK - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                
                case 4:
                {
                    cout<<"_______________________Welcome to US Airbase________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. US - 567"<<endl;
                    cout<<"\t10-01-2026  2:00PM 22hrs Rs.37000"<<endl;
                    cout<<"1. US - 658"<<endl;
                    cout<<"\t09-01-2026  6:00PM 23hrs Rs.39000"<<endl;
                    cout<<"1. US - 508"<<endl;
                    cout<<"\t12-01-2026  10:00AM 21hrs Rs.42000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==37000;
                        cout<<"\n You have successfully booked the flight US - 567"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges==39000;
                        cout<<"\n You have successfully booked the flight US - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges==42000;
                        cout<<"\n You have successfully booked the flight US - 508"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                
                case 5:
                {
                    cout<<"_______________________Welcome to Australian Airlines________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. As - 698"<<endl;
                    cout<<"\t18-01-2026  9:00PM 10hrs Rs.44000"<<endl;
                    cout<<"1. As - 158"<<endl;
                    cout<<"\t19-01-2026  4:00PM 23hrs Rs.34000"<<endl;
                    cout<<"1. As - 708"<<endl;
                    cout<<"\t17-01-2026  10:00AM 21hrs Rs.42000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==44000;
                        cout<<"\n You have successfully booked the flight As - 698"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges==34000;
                        cout<<"\n You have successfully booked the flight As - 158"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges==42000;
                        cout<<"\n You have successfully booked the flight As - 708"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                
                case 6:
                {
                    cout<<"_______________________Welcome to Europian Airlines________________\n"<<endl;
                    cout<<"Your confort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. EU - 498"<<endl;
                    cout<<"\t02-01-2026  2:00PM 18hrs Rs.36000"<<endl;
                    cout<<"1. EU - 958"<<endl;
                    cout<<"\t03-01-2026  6:00PM 15hrs Rs.25000"<<endl;
                    cout<<"1. EU - 528"<<endl;
                    cout<<"\t12-01-2026  10:00AM 11hrs Rs.31000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges==36000;
                        cout<<"\n You have successfully booked the flight CA - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges==25000;
                        cout<<"\n You have successfully booked the flight CA - 958"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges==31000;
                        cout<<"\n You have successfully booked the flight CA - 528"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                 default :
                    {
                       cout<<"Invalid input, Shifting to the main menu !"<<endl;
                       mainMenu();
                       break; 
                    }
            }
        }
};

float registration::charges;
int registration::choice;


class ticket : public registration, Details
{
    public: 

        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"______________XYZ Airlines_____________"<<endl;
                outf<<"_________________Ticket________________"<<endl;
                outf<<"_______________________________________"<<endl;

                outf<<"Customer ID : "<<Details::cId<<endl;
                outf<<"Customer Name : "<<Details::name<<endl;
                outf<<"Customer Gender : "<<Details::gender<<endl;
                outf<<"\tDescription"<<endl<<endl;

                if(registration::choice==1)
                {
                    destination="Dubai";
                }
                else if(registration::choice==2)
                {
                    destination="Canada";
                }
                else if(registration::choice==3)
                {
                    destination="UK";
                }
                else if(registration::choice==4)
                {
                    destination="USA";
                }
                else if(registration::choice==5)
                {
                    destination="Australia";
                }
                else if(registration::choice==6)
                {
                    destination="Europe";
                }

                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost : \t\t"<<registration::charges<<endl;

            }
            outf.close();

        }

        void disBill()
        {
            ifstream ifs("records.txt");
            {
                if(ifs)
                {
                    cout<<"File error : "<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close(); 
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                   XYZ Airlines    \n"<<endl;
    cout<<"\t___________________Main menu__________"<<endl;

    cout<<"\t______________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t  Pres 1 to add the Customer Details    \t|"<<endl;
    cout<<"\t|\t  Pres 2 for flight Registration        \t|"<<endl;
    cout<<"\t|\t  Pres 3 for Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t  Pres 4 to exit                        \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t_____________________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;


    switch(lchoice)
    {

        case 1:
        {
            cout<<"________Customers_________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu ";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
                break;
            }
        }

        case 2:
        {
            cout<<"_______Book a flight using this system __________\n"<<endl;
            r.flights();
            break;
        }


        case 3:
        {
            cout<<"_________GET YOUR TICKET_____\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed,you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;

            if(back==1)
            {
                t.disBill();
                cout<<"Press any key to go back to main menu";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else
            {
                mainMenu();

            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t_________Thank you________"<<endl;
            break;
        }

        default :
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }

    }


}

int main()
{
    Management Mobj;
    return 0;
}