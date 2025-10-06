#include <iostream> 
#include <string>

// TO DO: #include any other libraries you need
#include "EventTicket340.h"
#include "LinkedBag.h"

//name
//name

using namespace std;

/** 
 * 
 * Displays the application's main menu
 * pre create a new object of type Organizer
 * @param organizer object to interact with
 * 
 * */
void displayOrganizerMenu(Organizer& organizer){
	int organizerChoice = 0;
	do {
		LinkedBag<Event*> organizerEvents;
		cout << "\n Hi, "<< organizer.getUsername() <<", what would you like to do:\n"
		<< "1. Display Profile\n"
		<< "2. Modify Password\n"
		<< "3. Create Event\n"
		<< "4. Display All Events\n"
		<< "5. Display Kth Event\n"
		<< "6. Modify Event\n"
		<< "7. Sell Tickets\n"
		<< "8. Delete Event\n"
		<< "0. Logout\n"
		<< "Choice: ";
		cin >> organizerChoice;

		switch (organizerChoice) {
			case 1:{
				// TO DO: display organizer's profile information
				//      : e.g. organizer.displayProfile();
				organizer.displayProfile();
				break;
			}
			case 2: {
				// TO DO: ask for new password and update organizer's password
				// Ask user to input a new password -> string
				string newPassword;
				cout << "Please Enter new Password: ";
				getline(cin,newPassword);
				organizer.setPassword(newPassword);
				// organizer.setPassword(string)
				break;
			}
			case 3: {
				// TO DO: ask organizer to choose event type, then ask them to input event details.
				std::string choice;
				Event* event = nullptr;
				
				cout << "Which event type are you making (virtual or venue):  ";
				getline(cin,choice);
				if(choice == "virtual"){
				// 	create a Virtual event object
					std::string name;
					std::string description;
					int rating;
					std::string ratingStr;
					int soldTicketsCount;
					std::string ticketsStr;
					std::string streamLink;
					std::string audience;

					std::cout<< "Enter name of Event:";
					std::getline(std::cin,name);

					cout<< "Enter description: ";
					std::getline(std::cin,description);

					std::cout<< "Enter rating:";
					std::getline(std::sin,ratingStr);
					rating = std::stoi(ratingStr);

					std::cout<< "Enter number of sold Tickets: ";
					std::getline(std::sin,ticketsStr);
					soldTicketsCount = std::stoi(ticketsStr);

					std::cout<< "Enter Stream Link: ";
					std::getline(std::cin,streamLink);

					std::cout<< "Enter audience type:  ";
					std::getline(std::cin, audience);

					event = new VirtualEvent(name,description,rating,soldTicketsCount,streamLink,audience);
					
				}else if(choice == "venue"){
				// 	create a Venue even object
					std::string name;
					std::string description;
					int rating;
					int soldTicketsCount;
					std::string venue;
					std::string dateTime;
					int capacity;

					std::cout<< "Enter name of Event:";
					std::cin >> name;

					cout<< "Enter description: ";
					std::getline(std::cin,description);

					std::cout<< "Enter rating:";
					std::cin >> rating;

					std::cout<< "Enter number of sold Tickets: ";
					std::cin >> soldTicketsCount;

					cout<< "Enter venue name: ";
					std::cin >> venue;

					cout<< "Enter date and Time: ";
					std::getline(std::cin,dateTime);

					std::cout<<"Enter capacity for event: ";
					std::cin >> capacity;
				
					event = new VenueEvent(name,description,rating,soldTicketsCount,venue,dateTime,capacity);
					
				}
				organizerEvents.add(event);
				// Create the event and add it to the organizer's events
				break;
			}
			case 4:{
				// TO DO: display all organizer's events
				//        You may re-use code from class demo
				
				break;
			}
			case 5: {
				// TO DO: ask the organizer for a value k
				// Find the Kth event, if k > LinkedBag size, 
				//    return an error message that includes the size of the LinkedBag
				break;
			}
			case 6: {
				// TO DO: ask the organizer for the index of the event they want to modify.
				// Find the event, then prompt them for the new name and description.
				// Modify the event accordingly. 
				// If index > LinkedBag size, 
				//    return an error message that includes the size of the LinkedBag
				break;
			}
			case 7: {
				// TO DO: ask the organizer for the index of the event 
				// Find the event, then sell the tickets. 
				// If index > LinkedBag size, 
				//    return an error message that includes the size of the LinkedBag
				break;
			}
			case 8:{
				// TO DO: ask the organizer for the index of the event they want to delete 
				// Find the event, then remove it from the list. 
				// If index > LinkedBag size, 
				//    return an error message that includes the size of the LinkedBag
				break;
			}
			case 0: {
				cout << "Logging you out." << endl;
				break;
			}
			default:
				cout << "Invalid choice. Please try again." << endl;
		}

	} while (organizerChoice != 0);
}


int main(){
	// Instantiating the program using the default constructor
	// With this implementation, the application will only have one organizer
	EventTicket340 eventTicket340; 

	cout << "\n Welcome to EventTicket340:" << endl;
	// TO DO: Ask the organizer to enter their information 
	//        Instantiate a new Organizer object
	std::string username;
	std::string email;
	std::string password;
	std::string bio;
	std::string profilePicture;

	std::cout << "Please enter a username: ";
	std::cin >> username;

	std::cout << "Please enter an email: ";
	std::getline(std::cin,email);

	std::cout << "Please enter a password ";
	std::cin >> password;

	std::cout << "Please enter a bio: ";
	atd::getline(std::cin,bio);

	std::cout << "Please enter a profile picture ";
	std::cin >> profilePicture;

	// call eventTicket340 createOrganizer function 
	// replace /*...*/ with the right parameters
	eventTicket340.createOrganizer(username,email,password,bio,profilePicture);

	// Retrieve the organizer 
	Organizer currentOrganizer = eventTicket340.getOrganizer();

	// Display the main menu
	displayOrganizerMenu(currentOrganizer);
				
	return 0;
}