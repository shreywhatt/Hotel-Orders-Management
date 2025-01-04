#include<iostream>
using namespace std;

int main()

{
	int quant;
	int choice;
	
	int Qrooms=0, Qpasta = 0, Qburger =0, Qnoodles=0, Qshakes=0, Qchicken=0; //Quantity of items
	
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshakes=0, Schicken=0; //Sold no. of items
	
	int Total_rooms=0, Total_pasta=0,Total_burger=0, Total_noodles=0, Total_shakes=0, Total_chicken=0; //Quantity of total price of items
	
	
	
	// \t will add horizontal space
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms available:";
	cin>>Qrooms;
	cout<<"\n Quantity of Pasta: ";
	cin>>Qpasta;
	cout<<"\n Quantity of Burger: ";
	cin>>Qburger;
	cout<<"\n Quantity of noodles: ";
	cin>>Qnoodles;
	cout<<"\n Quantity of Shakes: ";
	cin>>Qshakes;
	cout<<"\n Quantity of Chicken Roll: ";
	cin>>Qchicken;
	
	//PART 1- MENU
	m: // for go to statement 
	
	cout<<"\n\t\t Please Select From The Given Menu Options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shakes";
	cout<<"\n6) ChickenRoll";
	cout<<"\n7) Information regarding sales and collection"; 
	
	//used by owner of the hotel to check the collection
	
	cout<<"\n8) EXIT";
	cout<<"\n\n PLEASE ENTER YOUR CHOICE :)";
	cin>>choice;
	
	//PART 2 ORDER PLACEMENT
	
	//we have to add functionality to choice using SWITCH CASE
	
	switch(choice)
	//We have to create 8 choices
	{
		case 1:
			cout<<"\n\n Enter the number of rooms requireed";
			cin>>quant;
			
			// In if statement, check if we have the required amount of rooms available
			if(Qrooms-Srooms >= quant)
			// Subtacting sold rooms from quantity of rooms we get no. of available rooms
			{
				Srooms = Srooms+quant;
				//The number of rooms required by the user will get added to the number of sold rooms
				
				Total_rooms= Total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you";	
			}
			else
			{
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in the hotel";
				break;
			}
			
			
		case 2:
			cout<<"\n\n Number of Pasta Required: ";
			cin>>quant;
			
			// In if statement, check if we have the required amount of pasta available
			if(Qpasta-Spasta >= quant)
			// Subtacting sold Pasta from quantity of pasta, we get no. of available pasta
			{
				Spasta = Spasta+quant;
				//The number of pasta required by the user will get added to the number of sold pasta
				
				Total_pasta= Total_pasta+quant*500;
		
				cout<<"\n\n\t\t"<<"Order for"<<quant<<" pastas has been placed!";
			}
			else
			{
				cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta available in the hotel";
				break;
			}
		
		
		case 3:
			cout<<"\n\n Number of Burgers Required: ";
			cin>>quant;
			
			// In if statement, check if we have the required amount of burger available
			if(Qburger-Sburger >= quant)
			// Subtacting sold Burger from quantity of burger, we get no. of available burger
			{
				Sburger = Sburger+quant;
				//The number of Burger required by the user will get added to the number of sold burger
				
				Total_burger= Total_burger+quant*600;
		
				cout<<"\n\n\t\t"<<"Order for"<<quant<<" burger/burgers has been placed!";
			}
			else
			{
				cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers are  available in the hotel";
				break;
			}
	
	
		case 4:
			cout<<"\n\n Number of noodles Required: ";
			cin>>quant;
			
			// In if statement, check if we have the required amount of noodles available
			if(Qnoodles-Snoodles >= quant)
			// Subtacting sold noodles from quantity of noodels, we get no. of available noodles
			{
				Snoodles = Snoodles+quant;
				//The number of noodles required by the user will get added to the number of sold noodles
			
				Total_noodles= Total_noodles+quant*400;
		
				cout<<"\n\n\t\t"<<"Order for"<<quant<<" noodles has been placed!";
			}
			else
			{
				cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles available in the hotel";
				break;
			}
			
		case 5:
			cout<<"\n\n Number of shakes Required: ";
			cin>>quant;
			
			// In if statement, check if we have the required amount of shakes available
			if(Qshakes- Sshakes >= quant)
			// Subtacting sold shakes from quantity of shakes, we get no. of available shakes
			{
				Sshakes = Sshakes+quant;
				//The number of shakes required by the user will get added to the number of sold shakes
			
				Total_shakes= Total_shakes+quant*300;
		
				cout<<"\n\n\t\t"<<"Order for"<<quant<<" shakes has been placed!";
			}
			else
			{
				cout<<"\n\tOnly"<<Qshakes- Sshakes<<"shakes available in the hotel";
				break;
			}
		
		
			case 6:
			cout<<"\n\n Number of ChickenRolls Required: ";
			cin>>quant;
			
			// In if statement, check if we have the required amount of ChickenRolls available
			if(Qchicken - Schicken >= quant)
			// Subtacting sold shakes from quantity of chickenroll, we get no. of available chickenrolls
			{
				Schicken = Schicken+quant;
				//The number of chickenroll required by the user will get added to the number of sold noodles
			
				Total_chicken= Total_chicken+quant*550;
		
				cout<<"\n\n\t\t"<<"Order for"<<quant<<" chickenrolls has been placed!";
			}
			else
			{
				cout<<"\n\tOnly"<<Qchicken - Schicken<<" chickenrolls available in the hotel";
				break;
			}
	// PART 3 CASE7, CASE8 AND DEFAULT CASE
	
			case 7:
				
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total rooms avaialble: "<<Qrooms;
			cout<<"\n\n Number of rented out rooms: "<<Srooms;
			cout<<"\n\n Number of remaining rooms: "<<Qrooms-Srooms;
			cout<<"\n\n Amount of Rooms Collection: "<<Total_rooms;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total pasta avaialble: "<<Qpasta;
			cout<<"\n\n Number of sold pasta: "<<Spasta;
			cout<<"\n\n Number of remaining pasta: "<<Qpasta - Spasta;
			cout<<"\n\n Amount of Pasta Collection: "<<Total_pasta;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total Burger avaialble: "<<Qrooms;
			cout<<"\n\n Number of Sold Burgers: "<<Sburger;
			cout<<"\n\n Number of remaining burgers: "<<Qburger-Sburger;
			cout<<"\n\n Amount of Burger Collection: "<<Total_burger;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total noodles avaialble: "<<Qnoodles;
			cout<<"\n\n Number of sold noodles: "<<Snoodles;
			cout<<"\n\n Number of remaining noodles: "<<Qnoodles-Snoodles;
			cout<<"\n\n Amount of Noodles Collection: "<<Total_noodles;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total pasta avaialble: "<<Qrooms;
			cout<<"\n\n Number of rented out rooms: "<<Srooms;
			cout<<"\n\n Number of remaining rooms: "<<Qrooms-Srooms;
			cout<<"\n\n Amount of Rooms Collection: "<<Total_rooms;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total shakes avaialble: "<<Qshakes;
			cout<<"\n\n Number of sold shakes: "<<Sshakes;
			cout<<"\n\n Number of remaining shakes: "<<Qshakes- Sshakes;
			cout<<"\n\n Amount of shakes collection: "<<Total_shakes;
			
			cout<<"\n\n\t\tDETAILS OF SALES AND COLLECTION ";
			cout<<"\n\n Number of total chickenrolls: "<<Qchicken;
			cout<<"\n\n Number of sold ChickenRoll: "<<Schicken;
			cout<<"\n\n Number of remaining ChickenRoll: "<<Qchicken - Schicken;
			cout<<"\n\n Amount of ChickenRoll collection: "<<Total_chicken;
			
			cout<<"\n\n\n TOTAL COLLECTION: " <<Total_rooms+Total_pasta+Total_burgers+Total_noodles+Total_shakes+Total_chicken;
		
		case 8:
			exit(0);
			
			default:
				cout<<"\n\nPlease select from the above mentioned menu only.";
			
	}
	
	goto m; //jump statement used to jump in parts having specified labels
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
}
